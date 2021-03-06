# project-proposal
Sandy Chu, Kailin Li, Alvin Tan

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
 
Now you can get the attention of your pesky child, lover, roommate and show them how you feel! 
(If time permits, we might make it more fun to add in a random component, where the robot may not end up delivering the message intended or crumbles the message and tosses/catapults into target location (launched and controlled by the user))

## Component Parts
- Arduino, breadboard, batteries, battery pack, wires (already provided)
- Placeholder for paper (either 3D print one or buy one from Staples)
- servos (already provided)
  - hammer-like top that smears the paper onto the surface (attached to servo) (3d print)
- clothespin for pen (shop)
- wheels and motors (shop)
- mini-toilet plunger (shop)
- writing utensil (shop)
- motor and fasteners and screws for laterial movement

G-code for drawings
Block Diagram coming soon

## Challenges
 1) figuring out whether to move the pen or the placeholder to draw
 2) programming precise ink output to ensure image coherence (for most of the time?)
 3) incorporating G-code to draw from our robot 

## Timeline
- Week 1: Write proposal
- Week 2: Gather all components and complete block diagrams
- Week 3: Assembly
- Week 4: Troubleshoot
- Week 5: Present!

## References and link
- components: https://store.arduino.cc/usa/arduino-robot.
- robot: 
  - https://www.youtube.com/watch?v=zRL_u2qmwJM 
  - https://www.youtube.com/watch?v=K3U2OlnTnME
  - https://circuits.io/circuits/1747457-random-servo-movement
  - https://circuits.io/lab/gallery
  - http://www.instructables.com/id/How-to-use-the-L293D-Motor-Driver-Arduino-Tutorial/
  
Spring 2018
Design Innovation 23
