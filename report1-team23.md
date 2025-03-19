[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/_7UQvaE8)

# Racing in SUSTech

## Functional Requirements

1. Map 
   
   Map modeling and lane design based on SUSTech.

2. Advanced Driving Physics (Acceleration, Braking, and Drifting)

   Vehicles respond realistically to acceleration and braking, considering speed, weight, and terrain and on-screen indicators should provide clear feedback.
   Drifting mechanics allow controlled oversteering, with tire friction and road conditions affecting performance.

3. Dynamic environment simulation system

   The 3D modeling replicates the campus of SUSTech, and supports dynamic switching of weather such as rain and fog and the simulation of physical parameters. A 24-hour light cycle of light and shadow changes, and multiple ambient sound effects help create an immersive campus experience.

4. AI Opponent Behavior Modeling

   Design AI opponents with different difficulty levels, providing beginner, intermediate and advanced modes. Each mode features AI with varying reaction speeds, path planning, and obstacle avoidance strategies. AI players will navigate through the SUSTech campus map, identify and avoid obstacles, and be able to make adjustments in case of unexpected situations, such as being hit by other vehicles.

5. Game mode

   Design different game modes, including single-player for completing tasks and pve mode. Allow players choose to enter missions or racing modes at specific locations on the map. In single-player mode, players can complete certain tasks, such as staying in the air for five seconds or not colliding. In pve mode, players need to race with other vehicles on certain routes.
   
## Unfunctional Requirements

1. (Performance)The game should run smoothly on midrange PCs with 1k/30+fps.
2. (Security)The game saves should be encrypted to prevent cheating/tampering.
3. (Usability)Controls should be intuitive and responsive, suitable for both novice and experienced players. Friendly user interface.
4. (Scalability): System should support various vehicle models with different handling characteristics. Modular vehicle control system to allow easy updates or additions of new mechanics.

## Data Requirements

1. On-time game statistics(e.g. car speed, time limit, car health, drift distance, etc.)
2. SUSTech GIS geographic data, architectural blueprints and materials, weather effects resource package and environmental sound library.
3. Player account information (username, game progress).
4. The player's record of performance in different game modes (match time, final ranking).
5. Vehicles specs(e.g. acceleration rate, top speed, etc.)

## Technical requirements

1. UMG(Unreal Motion Graphics UI Designer) for UI design.
2. Use Python scripts for automated testing and data processing.
3. Use C++ and blueprint for UE.
4. Server architecture to support online gaming functions.
5. Use Git and GitHub to manage versioning of project code and resources.
6. Use blender for modeling
