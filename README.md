# Artificial-Intelligence-Project-1

Project 1 for GDP-6017 (Artificial Intelligence)

Build Instructions:
- Built using Visual Studio 17 (2022) - Retarget solution if necessary.
- All build requirements and other files are included within the project.

AI Info:
- The scene contains 3 models that have AI elements attached.
- All AIs have the same mesh model but different textures applied.
- Model with the white(ish) texture denotes "seek/flee" (ie. actually the ai-notes image from class).
- Model with the moon texture denotes "pursue/evade".
  Looks ahead 25(ish) units from the player's position.
- Model with the blue(ish) texture denotes "approach" and maintains a distance of 2x radius from the player.
- The AI characters move around in response to the player character in the scene.

Gameplay & Controls:
- Pressing the F key assumes control of the player character and attaches the camera to it.
- The player character can be controlled by the W,A,S,D,Q,E keys.
- The C key will detach the camera from the player character.
- Pressing the F1 key will enable/disable free camera controlled by the mouse.
- Pressing X key will render the whole scene in wireframe mode.
- A moving light-bulb is attached to the player character that illuminates their surroundings.