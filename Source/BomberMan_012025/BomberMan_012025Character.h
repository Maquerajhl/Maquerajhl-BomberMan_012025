
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Logging/LogMacros.h"
#include "ACInventario.h"
#include "InventoryActor.h"

#include "PowerUpCollection.h" // Asegúrate de incluir el encabezado de UPowerUpCollection

#include "BomberMan_012025Character.generated.h"


// Declaración forward de UPowerUpCollection
class UPowerUpCollection;

class USpringArmComponent;
class UCameraComponent;
class UInputMappingContext;
class UInputAction;
struct FInputActionValue;

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

UCLASS(config=Game)
class ABomberMan_012025Character : public ACharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FollowCamera;
	
	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputMappingContext* DefaultMappingContext;

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* JumpAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* MoveAction;

	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* LookAction;

public:
	ABomberMan_012025Character();
	
	UPROPERTY()
	UACInventario* MyInventory;

	UPROPERTY()
	UPowerUpCollection* PowerUpCollection; // <-- Agregado

	UFUNCTION()
	void DropItem();
	UFUNCTION()
	void TakeItem(AInventoryActor* InventoryItem);
	//UFUNCTION()
	//virtual void NotifyHit(class UPrimitiveComponent* MyComp,
	//	AActor* Other, class UPrimitiveComponent* OtherComp,
	//	bool bSelfMoved, FVector HitLocation, FVector
	//	HitNormal, FVector NormalImpulse, const FHitResult&
	//	Hit) override;
	UFUNCTION()
	void MoveForward(float AxisValue);
	void MoveRight(float AxisValue);
	void PitchCamera(float AxisValue);
	void YawCamera(float AxisValue);

protected:

	/** Called for movement input */
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);
			

protected:

	virtual void NotifyHit(UPrimitiveComponent* MyComp,
		AActor* Other, UPrimitiveComponent* OtherComp,
		bool bSelfMoved, FVector HitLocation, FVector
		HitNormal, FVector NormalImpulse, const FHitResult&
		Hit) override;

	virtual void NotifyControllerChanged() override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

	void Tick(float DeltaTime) override;
	void BeginPlay() override;
private:
	FVector MovementInput;
	FVector CameraInput;
	
public:
	UFUNCTION(BlueprintCallable, Category = "Testing")
	void SimulatePlayerDeath();

	UFUNCTION(BlueprintCallable, Category = "Testing")
	void SimulateEnemyKilled();
	
	//para el composite


private:
	// Variable to store the maximum number of bombs
	int32 MaxBombs;

public:
	UFUNCTION()
	void SetMaxBombs(int32 NewMaxBombs);

	UFUNCTION()
	int32 GetMaxBombs() const;

	UFUNCTION()
	void SetExplosionRange(int32 NewExplosionRange);

	UFUNCTION()
	int32 GetExplosionRange() const;
private:
	// Variable to store the explosion range  
	int32 ExplosionRange;

};

