# Class Diagram Representation

## Index

- [Classes](#classes)
	- [Wheel](#wheel)
	- [Gear](#gear)
	- [LinkablePart](#linkablepart)
	- [GearLever](#gearlever)
	- [Singleton](#singleton)
	- [Crankshaft](#crankshaft)
	- [ExplosionChamber](#explosionchamber)
	- [Injector](#injector)
	- [Pedal](#pedal)
	- [Dae](#dae)
	- [SteerWheel](#steerwheel)
	- [Brake](#brake)
	- [Motor](#motor)
	- [Transmission](#transmission)
	- [Direction](#direction)
	- [BrakeController](#brakecontroller)
	- [Cockpit](#cockpit)
	- [Electronics](#electronics)
	- [Car](#car)
- [Relationships](#relationships)
- [Links](#links)
	-[PlantUML Code](#plantuml-code)

## Classes

### Wheel

```cpp
	class Wheel
	{
		+ executeRotation(p_force: float): void
		+ Wheel()
		+ ~Wheel()
	}
```

> The structure Wheel is a class containing a method void executeRotation(float p_force); which allows a wheel to execute a rotation with a given force.

### Gear

```cpp
	class Gear
	{
		- demultiplier: int
		+ getDemultiplier(): int
		+ setDemultiplier(demulstiplier: int): void
		+ Gear()
		+ ~Gear()
	}
```

> The structure Gear is a class containing an integer variable demultiplier which stores the demultiplier of a gear.

### LinkablePart

```cpp
	class LinkablePart
	{
		+ execute(p_pression: float): void
	}
```

> The structure LinkablePart is a virtual class, requiering to implement a method void execute(float p_pression) to be instancied.

### GearLever

```cpp
	class GearLever : Singleton
	{
		- gears: Gear[]
		- level: int
		+ change(): void
		+ activeGear(): Gear*
		+ getGears(): Gear[]
		+ setGears(gears: Gear[]): void
		+ getLevel(): int
		+ setLevel(level: int): void
		- GearLever()
		+ ~GearLever()
	}
```

> - The structure GearLever is a class that inherits from Singleton<GearLever> containing an array of Gear objects and an integer variable level. It has a method void change(); which allows to change the current gear and a method Gear* activeGear(); which returns a pointer to the current active gear.

### Singleton

```cpp
	class Singleton <<GearLever>>
	{
		- static instance: Singleton*
		+ static getInstance: Singleton*
		- Singleton(instance: Singleton*)
		- ~Singleton()
	}
```

> [Singleton](https://refactoring.guru/pt-br/design-patterns/singleton) is a design pattern. It's a class that has only one static instance and provides a global access point to it.

### Crankshaft

```cpp
	class Crankshaft
	{
		- transmission: Transmission*
		+ receiveForce(p_volume: float): void
		+ getTransmission(): Transmission*
		+ setTransmission(transmission: Transmission*): void
		+ Crankshaft()
		+ ~Crankshaft()
	}
```

> The structure Crankshaft is a class containing a pointer to a Transmission object and a method void receiveForce(float p_volume); which receives a force in a given volume.

### ExplosionChamber

```cpp
	class ExplosionChamber
	{
		- crankshaft: Crankshaft*
		+ fill(p_volume: float): void
		+ getCrankshaft(): Crankshaft*
		+ setCrankshaft(crankshaft: Crankshaft*)
		+ ExplosionChamber()
		+ ~ExplosionChamber()
	}
```

> The structure ExplosionChamber is a class containing a pointer to a Crankshaft object and a method void fill(float p_volume); which fills the chamber with a given volume.

### Injector

```cpp
	class Injector
	{
		- explosionChamber: ExplosionChamber*
		+ execute(p_pression: float): void
		+ getExplosionChamber(): ExplosionChamber*
		+ setExplosionChamber(explosionChamber: ExplosionChamber*): void
		+ Injector()
		+ ~Injector()
	}
```

> The structure Injector is a class that inherits from LinkablePart containing a pointer to an ExplosionChamber object and a method void execute(float p_pression); which executes the injection with a given pressure.

### Pedal

```cpp
	class Pedal
	{
		- target: LinkablePart*
		+ setTarget(p_part: LinkablePart*): void
		+ use(p_pression: float): void
		+ Pedal()
		+ ~Pedal()
	}
```

> The structure Pedal is a class containing a pointer to a LinkablePart object and two methods: void setTarget(LinkablePart* p_part); which sets the target of the pedal to a given part, and void use(float p_pression); which uses the pedal with a given pressure.

### Dae

```cpp
	class Dae
	{
		- direction: Direction*
		- force: float
		+ use(p_angle: float): void
		+ getDirection(): Direction*
		+ setDirection(direction: Direction*): void
		+ getForce(): float
		+ setForce(force: float): void
		+ Dae()
		+ ~Dae()
	}
```

> The structure DAE is a class containing a pointer to a Direction object and a float variable force. It has a method void use(float p_angle); which uses the DAE with a given angle.
> - DAE (Direction Assistée Électrique): Electric Power Steering (EPS or EPAS) is used to assist the driver in steering the vehicle.

### SteerWheel

```cpp
	class SteerWheel
	{
		- dae: Dae*
		+ turn(p_angle: float): void
		+ getDae(): Dae*
		+ setDae(dae: Dae*): void
		+ SteerWheel()
		+ ~SteerWheel()
	}
```

> The structure SteerWheel is a class containing a pointer to a DAE object and method(s) void turn(float p_angle) which takes a float as input.

### Brake

```cpp
	class Brake
	{
		- wheel: Wheel*
		+ execute(p_force: float): void
		+ attackWheel(p_wheel: Wheel*): void
		+ getWheel(): Wheel*
		+ setWheel(wheel: Wheel*): void
		+ Brake()
		+ ~Brake()
	}
```

> The structure Brake is a class containing a pointer to a Wheel object and method(s) void execute(float p_force) and void attackWheel(Wheel* p_wheel) which take a float and a pointer to a Wheel object as inputs, respectively.

### Motor

```cpp
	class Motor
	{
		- injector: Injector
		- explosionChamber: ExplosionChamber
		- crankshaft: Crankshaft
		+ connectToTransmission(p_transmission: Transmission*): void
		+ getInjector(): Injector
		+ setInjector(injector: Injector): void
		+ getExplosionChamber(): ExplosionChamber
		+ setExplosionChamber(explosionChamber: ExplosionChamber): void
		+ getCrankshaft(): Crankshaft
		+ setCrankshaft(crankshaft: Crankshaft): void
		+ Motor()
		+ ~Motor()
	}
```

> The structure Motor is a class containing objects of type Injector, ExplosionChamber and Crankshaft. It has a method void connectToTransmission(Transmission* p_transmission); which connects the motor to a given transmission.

### Transmission

```cpp
	class Transmission
	{
		- wheels: *Wheel[]
		+ activate(p_force: float): void
		+ getWheels(): Wheel[]
		+ setWheels(wheels: Wheel[]): void
		+ Transmission()
		+ ~Transmission()
	}
```

> The structure Transmission is a class containing a vector of pointers to Wheel objects and a method void activate(float p_force); which activates the transmission with a given force.

### Direction

```cpp
	class Direction
	{
		- wheels: Wheel[]
		+ turn(p_angle: float): void
		+ getWheels(): Wheel[]
		+ setWheels(wheels: Wheel[]): void
		+ Direction()
		+ ~Direction()
	}
```

> The structure Direction is a class containing an array of Wheel objects and a method void turn(float p_angle); which turns the direction by a given angle.

### BrakeController

```cpp
	class BrakeController
	{
		- brakes: Brake[]
		+ execute(p_pression: float): void
		+ getBrakes(): Brake[]
		+ setBrakes(brakes: Brake[]): void
		+ BrakeController()
		+ ~BrakeController()
	}
```

> The structure BrakeController is a class that inherits from LinkablePart and contains an array of Brake objects and method(s) void execute(float p_pression) which takes a float as input.

### Cockpit

```cpp
	class Cockpit
	{
		- pedal: Pedal
		- steerWheel: SteerWheel
		- gearLever: GearLever
		+ getPedal(): Pedal
		+ setPedal(pedal: Pedal): void
		+ getSteerWheel(): SteerWheel
		+ setSteerWheel(steerWheel: SteerWheel): void
		+ getGearLever(): GearLever
		+ setGearLever(gearLever: GearLever): void
		+ Cockpit()
		+ ~Cockpit()
	}
```

> The structure Cockpit is a class containing Pedal, SteerWheel, GearLever objects and method(s) that manage these objects.
> - **Which methods are missing?**

### Electronics

```cpp
	class Electronics
	{
		- dae: Dae
		+ getDae(): Dae
		+ setDae(dae: Dae): void
		+ Electronics()
		+ ~Electronics()
	}
```

> The structure Electronics is a class containing a DAE object.

### Car

```cpp
	class Car
	{
		- brakeController: BrakeController
		- cockpit: Cockpit
		- electronics: Electronics
		- direction: Direction
		- transmission: Transmission
		- motor: Motor
		+ getBrakeController(): BrakeController
		+ setBrakeController(brakeController: BrakeController): void
		+ getCockpit(): Cockpit
		+ setCockpit(cockpit: Cockpit): void
		+ getElectronics(): Electronics
		+ setElectronics(electronics: Electronics): void
		+ getDirection(): Direction
		+ setDirection(direction: Direction): void
		+ getTransmission(): Transmission
		+ setTransmission(transmission: Transmission): void
		+ getMotor(): Motor
		+ setMotor(motor: Motor): void
		+ Car()
		+ ~Car()
	}
```

> The structure Car is a class containing a BrakeController, Direction, Transmission, Motor, Electronics, and Cockpit objects.

## Relationships

- [GearLever: Singleton] GearLever herda Singleton (inherit)
- [GearLever contém várias Gears] Gearlever é composto por Gears (composition)
- [Transmission: Wheel] Transmitission está associado a Wheels (association)
- [Injector: LinkablePart] Injector herda LinkablePart
- [Pedal LinkablePart] Pedal está associado a LinkablePart (association)
- [BrakeController: LinkablePart] BrakeController herda LinkablePart (inherit)
- [BrakeController: Brake] BrakeController é composto por Brakes (composition)
- [Brake: Wheel] Brale está agregado a Wheel (aggregation)
- [Crankshaft: Transmission] Crankshaft está associado a Transmission (association)
- [ExplosionChamber: Crankshaft] ExplosionChamber está associado a Crankshaft (association)
- [Injector: ExplosionChamber] Injector está associado a ExplosionChamber (association)
- [Electronics: Dae] Electronics está agregado a Dae (aggregation)
- [Direction: Wheel] Direction está agregado a Wheel (aggregation)
- [Dae: Direction] Dae é composto por Direction (composition)
- [SteerWheel: Dae] SteerWheel é associado a Dae (association)
- [Cockpit: Pedal] Cockpit é composto por Pedal (composition)
- [Cockpit: SteerWheel] Cockpit é composto por SteerWheel (composition)
- [Cockpit: GearLever] Cockpit é composto por GearLever (composition)
- [Motor: Injector] Motor é composto por Injector (composition)
- [Motor: ExplosionChamber] Motor é composto por ExplosionChamber (composition)
- [Motor: Crankshaft] Motor é composto por Crankshaft (composition)
- [Car: BrakeController] Car é composto por BrakeController (composition)
- [Car: Direction] Car é composto por Direction (composition)
- [Car: Transmission] Car é composto por Transmission (composition)
- [Car: Motor] Car é composto por Motor (composition)
- [Car: Electronics] Car é composto por Electronics (composition)
- [Car: Cockpit] Car é composto por Cockpit (composition)

## Links

- [PlantUML Generator](https://plantuml.com/)
- [PlantUML Syntax](https://plantuml.com/class-diagram)

### PlantUML Code

```
@startuml

package CarComposition <<Rectangle>>
{
	class Wheel #wheat ##tomato
	{
		==
		__ Methods __
		+ executeRotation(p_force: float): void
		.. Constructor/Destructor ..
		+ Wheel()
		+ ~Wheel()
	}

	abstract class LinkablePart #white ##tomato
	{
		==
		__ Methods __
		+ {abstract} execute(p_pression: float): void
	}

	class Gear #wheat ##tomato
	{
		__ Attributes __
		- demultiplier: int
		==
		__ Methods __
		.. Getters/Setters ..
		+ getDemultiplier(): int
		+ setDemultiplier(demulstiplier: int): void
		.. Constructor/Destructor ..
		+ Gear()
		+ ~Gear()
	}

	class GearLever #wheat ##tomato
	{
		__ Attributes __
		- gears: Gear[]
		- level: int
		==
		__ Methods __
		+ change(): void
		+ activeGear(): Gear*
		.. Getters/Setters ..
		+ getGears(): Gear[]
		+ setGears(gears: Gear[]): void
		+ getLevel(): int
		+ setLevel(level: int): void
		.. Constructor/Destructor ..
		- GearLever()
		+ ~GearLever()
	}

	stereotype Singleton <<GearLever>> #white ##tomato
	{
		__ Attributes __
		- {static} instance: Singleton*
		==
		__ Methods __
		.. Getters/Setters ..
		+ {static} getInstance: Singleton*
		.. Constructor/Destructor ..
		- Singleton(instance: Singleton*)
		+ ~Singleton()
	}

	class Pedal #wheat ##tomato
	{
		__ Attributes __
		- target: LinkablePart*
		==
		__ Methods __
		+ setTarget(p_part: LinkablePart*): void
		+ use(p_pression: float): void
		.. Getters/Setters ..
		.. Constructor/Destructor ..
		+ Pedal()
		+ ~Pedal()
	}

	class SteerWheel #wheat ##tomato
	{
		__ Attributes __
		- dae: Dae*
		==
		__ Methods __
		+ turn(p_angle: float): void
		.. Getters/Setters ..
		+ getDae(): Dae*
		+ setDae(dae: Dae*): void
		.. Constructor/Destructor ..
		+ SteerWheel()
		+ ~SteerWheel()
	}

	class Motor #wheat ##tomato
	{
		__ Attributes __
		- injector: Injector
		- explosionChamber: ExplosionChamber
		- crankshaft: Crankshaft
		==
		__ Methods __
		+ connectToTransmission(p_transmission: Transmission*): void
		.. Getters/Setters ..
		+ getInjector(): Injector
		+ setInjector(injector: Injector): void
		+ getExplosionChamber(): ExplosionChamber
		+ setExplosionChamber(explosionChamber: ExplosionChamber): void
		+ getCrankshaft(): Crankshaft
		+ setCrankshaft(crankshaft: Crankshaft): void
		.. Constructor/Destructor ..
		+ Motor()
		+ ~Motor()
	}

	class Crankshaft #wheat ##tomato
	{
		__ Attributes __
		- transmission: Transmission*
		==
		__ Methods __
		+ receiveForce(p_volume: float): void
		.. Getters/Setters ..
		+ getTransmission(): Transmission*
		+ setTransmission(transmission: Transmission*): void
		.. Constructor/Destructor ..
		+ Crankshaft()
		+ ~Crankshaft()
	}

	class ExplosionChamber #wheat ##tomato
	{
		__ Attributes __
		- crankshaft: Crankshaft*
		==
		__ Methods __
		+ fill(p_volume: float): void
		.. Getters/Setters ..
		+ getCrankshaft(): Crankshaft*
		+ setCrankshaft(crankshaft: Crankshaft*)
		.. Constructor/Destructor ..
		+ ExplosionChamber()
		+ ~ExplosionChamber()
	}

	class Injector #wheat ##tomato
	{
		__ Attributes __
		- explosionChamber: ExplosionChamber*
		==
		__ Methods __
		+ execute(p_pression: float): void
		.. Getters/Setters ..
		+ getExplosionChamber(): ExplosionChamber*
		+ setExplosionChamber(explosionChamber: ExplosionChamber*): void
		.. Constructor/Destructor ..
		+ Injector()
		+ ~Injector()
	}

	class Transmission #wheat ##tomato
	{
		__ Attributes __
		- wheels: *Wheel[]
		==
		__ Methods __
		+ activate(p_force: float): void
		.. Getters/Setters ..
		+ getWheels(): *Wheel[]
		+ setWheels(wheels: *Wheel[]): void
		.. Constructor/Destructor ..
		+ Transmission()
		+ ~Transmission()
	}

	class BrakeController #wheat ##tomato
	{
		__ Attributes __
		- brakes: Brake[]
		==
		__ Methods __
		+ execute(p_pression: float): void
		.. Getters/Setters ..
		+ getBrakes(): Brake[]
		+ setBrakes(brakes: Brake[]): void
		.. Constructor/Destructor ..
		+ BrakeController()
		+ ~BrakeController()
	}

	class Brake #wheat ##tomato
	{
		__ Attributes __
		- wheel: Wheel*
		==
		__ Methods __
		+ execute(p_force: float): void
		+ attackWheel(p_wheel: Wheel*): void
		.. Getters/Setters ..
		+ getWheel(): Wheel*
		+ setWheel(wheel: Wheel*): void
		.. Constructor/Destructor ..
		+ Brake()
		+ ~Brake()
	}

	class Cockpit #wheat ##tomato
	{
		__ Attributes __
		- pedal: Pedal
		- steerWheel: SteerWheel
		- gearLever: GearLever
		==
		__ Methods __
		.. Getters/Setters ..
		+ getPedal(): Pedal
		+ setPedal(pedal: Pedal): void
		+ getSteerWheel(): SteerWheel
		+ setSteerWheel(steerWheel: SteerWheel): void
		+ getGearLever(): GearLever
		+ setGearLever(gearLever: GearLever): void
		.. Constructor/Destructor ..
		+ Cockpit()
		+ ~Cockpit()
	}

	class Dae #wheat ##tomato
	{
		__ Attributes __
		- direction: Direction*
		- force: float
		==
		__ Methods __
		+ use(p_angle: float): void
		.. Getters/Setters ..
		+ getDirection(): Direction*
		+ setDirection(direction: Direction*): void
		+ getForce(): float
		+ setForce(force: float): void
		.. Constructor/Destructor ..
		+ Dae()
		+ ~Dae()
	}

	class Direction #wheat ##tomato
	{
		__ Attributes __
		- wheels: Wheel[]
		==
		__ Methods __
		+ turn(p_angle: float): void
		.. Getters/Setters ..
		+ getWheels(): Wheel[]
		+ setWheels(wheels: Wheel[]): void
		.. Constructor/Destructor ..
		+ Direction()
		+ ~Direction()
	}

	class Electronics #wheat ##tomato
	{
		__ Attributes __
		- dae: Dae
		==
		__ Methods __
		.. Getters/Setters ..
		+ getDae(): Dae
		+ setDae(dae: Dae): void
		.. Constructor/Destructor ..
		+ Electronics()
		+ ~Electronics()
	}

	class Car #wheat ##tomato
	{
		__ Attributes __
		- brakeController: BrakeController
		- cockpit: Cockpit
		- electronics: Electronics
		- direction: Direction
		- transmission: Transmission
		- motor: Motor
		==
		__ Methods __
		.. Getters/Setters ..
		+ getBrakeController(): BrakeController
		+ setBrakeController(brakeController: BrakeController): void
		+ getCockpit(): Cockpit
		+ setCockpit(cockpit: Cockpit): void
		+ getElectronics(): Electronics
		+ setElectronics(electronics: Electronics): void
		+ getDirection(): Direction
		+ setDirection(direction: Direction): void
		+ getTransmission(): Transmission
		+ setTransmission(transmission: Transmission): void
		+ getMotor(): Motor
		+ setMotor(motor: Motor): void
		.. Constructor/Destructor ..
		+ Car()
		+ ~Car()
	}
}

GearLever --|> Singleton
GearLever "1" *--> "0..*" Gear
Injector --|> LinkablePart
BrakeController --|> LinkablePart
Pedal "1" --> "1" LinkablePart
BrakeController "1" *--> "0..*" Brake
Brake "1" o--> "1" Wheel
Transmission "1" o--> "0..*" Wheel
Crankshaft "1" --> "1" Transmission
ExplosionChamber "1" --> "1" Crankshaft
Injector "1" --> "1" ExplosionChamber
Electronics "1" *--> "1" Dae
Dae "1" *--> "1" Direction
Direction "1" o--> "0..*" Wheel
SteerWheel "1" --> "1" Dae
Cockpit "1" *--> "1" Pedal
Cockpit "1" *--> "1" SteerWheel
Cockpit "1" *--> "1" GearLever
Motor "1" *--> "1" Injector
Motor "1" *--> "1" ExplosionChamber
Motor "1" *--> "1" Crankshaft
Car "1" *--> "1" BrakeController
Car "1" *--> "1" Direction
Car "1" *--> "1" Transmission
Car "1" *--> "1" Motor
Car "1" *--> "1" Electronics
Car "1" *--> "1" Cockpit

@enduml
```