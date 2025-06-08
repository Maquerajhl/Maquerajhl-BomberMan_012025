# 🧨 BomberMan - Laboratorio de Patrones de Diseño

¡Bienvenido al repositorio de BomberMan!  
Este proyecto explora la implementación de varios **Patrones de Diseño** para crear un sistema flexible, escalable y fácil de mantener.  
A continuación, se explica cómo cada patrón se aplica específicamente en este repositorio:

---

## 🚀 Patrones de Diseño Aplicados

### 🏭 Factory Method
Usamos el **Factory Method** para instanciar diferentes tipos de bloques del mapa, como **Acero** y **Ladrillo**.  
De esta manera, el código que solicita un bloque no está acoplado a clases concretas, permitiendo agregar nuevos tipos de bloques fácilmente y manteniendo el sistema abierto a extensiones.

---

### 🏗️ Builder
El patrón **Builder** nos permite construir laberintos paso a paso:
- El **Director** (`ADirectorLaberinto`) coordina la construcción.
- El **Constructor concreto** (`AConstructorLaberintoConcreto`) ensambla pisos, muros y demás partes.
- El resultado es un objeto `UMaestroLaberintoProducto` que representa el laberinto final.

Esto facilita la modificación o expansión de la estructura del laberinto sin alterar otras partes del código.

---

### 🧬 Prototype
Implementamos el **Prototype** para gestionar la creación de diferentes tipos de naves enemigas.  
En lugar de instanciar cada nave desde cero, clonamos prototipos existentes (por ejemplo, naves rápidas o lentas), optimizando la creación masiva y permitiendo flexibilidad para futuras variantes de enemigos.

---

### 🎛️ Facade
La clase `UBombermanGameFlowFacade` implementa el **Patrón Facade** para unificar y simplificar la interacción con el flujo principal del juego:
- Iniciar ronda
- Manejar muerte del jugador
- Registrar eliminación de enemigos

El resto del sistema puede controlar estos procesos a través de la fachada, sin preocuparse por la lógica interna de los distintos subsistemas.

---

### 🌿 Composite
El **Patrón Composite** permite tratar objetos individuales y colecciones uniformemente:
- Los power-ups (`UPowerUpBombCount`, `UPowerUpCollection`, etc.) implementan una interfaz común (`IPowerUpEffect`).
- El personaje puede aplicar o revertir todos los efectos de sus power-ups recogidos mediante una única llamada, sin importar si tiene uno o muchos.

Esto simplifica la gestión y extensión del sistema de power-ups y elementos destructibles.

