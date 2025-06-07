// Copyright Epic Games, Inc. All Rights Reserved.

#include "BomberMan_012025Character.h"
#include "Engine/LocalPlayer.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Controller.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"

DEFINE_LOG_CATEGORY(LogTemplateCharacter);

//////////////////////////////////////////////////////////////////////////
// ABomberMan_012025Character

ABomberMan_012025Character::ABomberMan_012025Character()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
		
	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f); // ...at this rotation rate

	// Note: For faster iteration times these variables, and many more, can be tweaked in the Character Blueprint
	// instead of recompiling to adjust them
	GetCharacterMovement()->JumpZVelocity = 700.f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;
	GetCharacterMovement()->BrakingDecelerationFalling = 1500.0f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 400.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named ThirdPersonCharacter (to avoid direct content references in C++)

	MyInventory = CreateDefaultSubobject<UACInventario>("MyInventory");

}

void ABomberMan_012025Character::DropItem()
{
	if (MyInventory->CurrentInventory.Num() == 0)
	{
		return;
	}
	AInventoryActor* Item = MyInventory->CurrentInventory.Last();
	MyInventory->RemoveFromInventory(Item);
	FVector ItemOrigin;
	FVector ItemBounds;
	Item->GetActorBounds(false, ItemOrigin, ItemBounds);
	FTransform PutDownLocation = GetTransform() +
		FTransform(RootComponent->GetForwardVector() *
			ItemBounds.GetMax());
	Item->PutDown(PutDownLocation);

}

void ABomberMan_012025Character::TakeItem(AInventoryActor* InventoryItem)
{
	InventoryItem->PickUp();
	MyInventory->AddToInventory(InventoryItem);

}

void ABomberMan_012025Character::NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	AInventoryActor* InventoryItem =
		Cast<AInventoryActor>(Other);
	if (InventoryItem != nullptr)
	{
		TakeItem(InventoryItem);
	}
}

void ABomberMan_012025Character::MoveForward(float AxisValue)
{
	MovementInput.X = FMath::Clamp<float>(AxisValue, -1.0f,
		1.0f);

}

void ABomberMan_012025Character::MoveRight(float AxisValue)
{
	MovementInput.Y = FMath::Clamp<float>(AxisValue, -1.0f,
		1.0f);

}

void ABomberMan_012025Character::PitchCamera(float AxisValue)
{
	CameraInput.Y = AxisValue;
}

void ABomberMan_012025Character::YawCamera(float AxisValue)
{
	CameraInput.X = AxisValue;
}

//////////////////////////////////////////////////////////////////////////
// Input

void ABomberMan_012025Character::NotifyControllerChanged()
{
	Super::NotifyControllerChanged();

	// Add Input Mapping Context
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}
}

void ABomberMan_012025Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	PlayerInputComponent->BindAction("DropItem",
		EInputEvent::IE_Pressed,
		this,
		&ABomberMan_012025Character::DropItem);
	// Movement
	PlayerInputComponent->BindAxis("MoveForward", this,
		&ABomberMan_012025Character::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this,
		&ABomberMan_012025Character::MoveRight);
	PlayerInputComponent->BindAxis("CameraPitch", this,
		&ABomberMan_012025Character::PitchCamera);
	PlayerInputComponent->BindAxis("CameraYaw", this,
		&ABomberMan_012025Character::YawCamera);

	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent)) {
		
		// Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		// Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ABomberMan_012025Character::Move);

		// Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &ABomberMan_012025Character::Look);
	}
	else
	{
		UE_LOG(LogTemplateCharacter, Error, TEXT("'%s' Failed to find an Enhanced Input component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
}

void ABomberMan_012025Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!MovementInput.IsZero())
	{
		MovementInput *= 100;
		//Scale our movement input axis values by 100 units
		// per second
		FVector InputVector = FVector(0, 0, 0);
		InputVector += GetActorForwardVector() *
			MovementInput.X *
			DeltaTime;
		InputVector += GetActorRightVector() * MovementInput.Y
			*
			DeltaTime;
		/* GEngine->AddOnScreenDebugMessage(-1, 1,
				FColor::Red,
				FString::Printf(TEXT("x- %f, y - %f, z - %f"),
			 InputVector.X, InputVector.Y, InputVector.Z)); */
	}
	if (!CameraInput.IsNearlyZero())
	{
		FRotator NewRotation = GetActorRotation();
		NewRotation.Pitch += CameraInput.Y;
		NewRotation.Yaw += CameraInput.X;
		APlayerController* MyPlayerController =
			Cast<APlayerController>(GetController());
		if (MyPlayerController != nullptr)
		{
			MyPlayerController->AddYawInput(CameraInput.X);
			MyPlayerController->AddPitchInput(CameraInput.Y);
		}
		SetActorRotation(NewRotation);
	}

}

void ABomberMan_012025Character::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	
		// get right vector 
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		// add movement 
		AddMovementInput(ForwardDirection, MovementVector.Y);
		AddMovementInput(RightDirection, MovementVector.X);
	}
}

void ABomberMan_012025Character::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}
