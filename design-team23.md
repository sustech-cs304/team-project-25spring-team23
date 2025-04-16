## Architectural Design

## UI Design

### Main Components of UI

**Main Menu:** Player can start playing, choose cars and enter Setting Menu by clicking buttons.

**Settings Menu:** Player can customize their own game settings here.

**In-game HUD:** Screen layout while playing, including Mission Briefing, Mini Map and Vehicle Statistics.

### UI Design templte (Using wireframe tool 墨刀):

![1744813862731](image/design-team23/1744813862731.png)


## PVE Design

### The architecture of PVE can be divided into three core modules:
**Path Generation Module**
**Vehicle Control Module**
**Path Extraction and Steering Instruction Module**

#### 1. Path Generation Module
This module is responsible for creating a path object (`PathActor`) within Unreal Engine and adding a Spline component to define the trajectory. The spline curve serves as the ideal path for vehicle navigation, enabling smooth movement and providing tangent information along the path.
- Create the path object;
- Add the spline curve;
- Provide the `GetPath` interface for other modules to access path information.


#### 2. Vehicle Control Module
This module controls the behavior of the vehicle and interacts with both the path and navigation modules. Its main purpose is to reference the `PathActor` and call the `GetPath` interface to obtain the nearest point and direction information on the spline based on the current vehicle location.
- Receive reference to the path object;
- Call `GetPath` to retrieve navigation info;
- Update the vehicle’s position and direction accordingly.

#### 3. Path Extraction and Steering Instruction Module
This module handles the core logic for path following.
- Finding the nearest location on the path to the vehicle’s current position;
- Extracting the tangent direction at that location;
- Normalizing the direction vector;
- Computing the angle difference (steering) between the current orientation and desired direction;
- Outputting the steering value for vehicle control.

### Justification for PVE Design
- **Clear Module Separation**: `PathActor` handles path creation, `GetPath` performs direction logic, and the vehicle blueprint is responsible for execution. This separation improves maintainability and scalability.
- **High Reusability**: A single `PathActor` can serve multiple vehicles, enabling multi-agent simulations.
- **Data-Driven Design**: `GetPath` only requires position and path inputs, making it easy to test and debug.



