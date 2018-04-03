# project-proposal
hw 10

Our project proposal idea is the creation of an arduino robot who moves, draws on scrap paper, and tries to stick them onto objects/humans depending on external stimulus. 

## Summary
The goal of the project is to have our robot move around the environment and draw in response to the stimulus on post-it notes. We are inspired by the Art Robot, the Robotic Alarm that runs around, and our love for annoying reminders on post-its. Our stimulus would be sounds (human voices, ideally) so our robot can act as a messenger and reminder depending on the frequency it detects in the environment. 

A user-testing scenario may go like this:
  Owner: COME HERE!!!
  Robot awakes and detects the closest color to it is red - this must mean love is in the air! It draws a heart on a scrap paper. The mini plunger picks up and removes the paper from the pad. It moves towards the nearest object (opposite of the original source of sound) and tries to place it there.
  Owner's special friend: OH HOW SWEET!

Specifically, our robot should accomplish the following objectives:
  1) Respond to environmental stimulus of ___ using a ___ sensor
      1a) Draws different strokes and patterns depending the sensor input
      1b) Potentially switching sharpies/markers depending on the input as well
  2) Create a distinct personality for the robot, such that users want to engage with it
      2a) Pastes the paper to the nearest object and person, creating a sense that it wants to remind/disrupt the normal order of things by freaking its owner/owners' friends out.
      2b) Changing the speed of the drawing (ref. Art Robot) to project a certain level of urgency depending on the stimulus encountered.
  3) Tosses/catapults the crumpled paper (launched and controlled by the user)
  
Now you can get the attention of your pesky child, lover, roommate and show them how you feel! 
(If time permits, we might make it more fun to add in a random component, where the robot may not end up delivering the message intended...)

## Component Parts
- Arduino, breadboard, batteries, battery pack, wires (already provided)
- Placeholder for paper (either 3D print one or buy one from Staples)
- servos (already provided)
  - hammer-like top that smears the paper onto the surface (attached to servo) (3d print)
- clothespin for pen (shop)
- wheels and motors (shop)
- mini-toilet plunger (shop)
- writing utensil (shop)

Include what types of inputs/outputs/data it will use, and a block diagram showing how all those pieces are connected.

## Challenges
 1) tearing up a first post-it from the stack requires a lot of precision from the claw
    -> alternative is to use 5x5 pieces of paper and use a mini-plunger 
 2) figuring out whether to move the pen or the placeholder to draw
 3) programming precise ink output to ensure image coherence (for most of the time?)
 4) incorporating G-code to draw from our robot 

## Timeline
- Week 1: Write proposal
- Week 2: Gather all components and complete block diagrams
- Week 3: Assembly
- Week 4: Troubleshoot
- Week 5: Present!

## References and link
components: https://store.arduino.cc/usa/arduino-robot.
art robot: https://www.youtube.com/watch?v=7TQlpWWWLho
           https://www.youtube.com/watch?v=8_zs_kfFAFM
           https://www.youtube.com/watch?v=0sT3qlGAV_U
             gcode- https://www.youtube.com/watch?v=GWo2zyjR7wo
           
