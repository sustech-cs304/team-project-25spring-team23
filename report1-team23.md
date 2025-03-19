[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/_7UQvaE8)

# Racing in SUSTech

## Functional Requirements

1. Friendly User Interface

   Start/quit the game , enter a level and navigate menus conveniently. Get clear guidance(e.g. keyboard guidance/mission guidance) from HUD and minimap.
2. Realistic Vehicle Entry & Exit Animation

   Players can seamlessly enter and exit the vehicle with smooth animations.
3. Advanced Driving Physics (Acceleration, Braking, and Drifting)

   Vehicles respond realistically to acceleration and braking, considering speed, weight, and terrain and on-screen indicators should provide clear feedback.
   Drifting mechanics allow controlled oversteering, with tire friction and road conditions affecting performance.
4. Dynamic environment simulation system

   The 3D modeling replicates the campus of SUSTech, and supports dynamic switching of weather such as rain, snow and fog and the simulation of physical parameters. A 24-hour light cycle of light and shadow changes, and multiple ambient sound effects help create an immersive campus experience.

5. AI Opponent Behavior Modeling

   Design AI opponents with different difficulty levels, providing beginner, intermediate and advanced modes. Each mode features AI with varying reaction speeds, path planning, and obstacle avoidance strategies. AI players will navigate through the SUSTech campus map, identify and avoid obstacles, and be able to make adjustments in case of unexpected situations, such as being hit by other vehicles.

6. Game mode

   Design different game modes, including single-player for completing tasks, pve mode, and pvp mode. Allow players to freely choose pvp or pve mode, and enter missions or racing modes at specific locations on the map. In single-player mode, players can complete certain tasks, such as staying in the air for five seconds or not colliding. In pvp or pve mode, players need to race with other vehicles on certain routes.
   
## Unfunctional Requirements

1. (Performance)The game should run smoothly on midrange PCs with 1k/30+fps.
2. (Security)The game saves should be encrypted to prevent cheating/tampering.
3. (Usability)Controls should be intuitive and responsive, suitable for both novice and experienced players.
4. (Scalability): System should support various vehicle models with different handling characteristics. Modular vehicle control system to allow easy updates or additions of new mechanics.

## Data Requirements

1. on-time game statistics(e.g. car speed, time limit, car health, drift distance, etc.)
2. SUSTech GIS geographic data, architectural blueprints and materials, weather effects resource package and environmental sound library.

## Technical requirements

1. UMG(Unreal Motion Graphics UI Designer) for UI design.
2. Realize a dynamic interactive environment driven by weather/day and night.
