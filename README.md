# 5619 Final Project

# NOTE:
We're very sorry, we didn't realize that we had to have our code pushed to a specific repository for the final project so had to rush push our code to this repo.  In the process of doing that we overwrote the original README.md file because we had to use `git push --force` and so we're stuck with this.

Name: Nick Karlovich, Audrey Hebert

UMN Email: karlo015@umn.edu, heber169@umn.edu

Third Party Assets:

Used Technologies from past Assignemnts 4 & 5

Fantasy Skybox FREE: https://assetstore.unity.com/packages/2d/textures-materials/sky/fantasy-skybox-free-18353

RPG Monster Duo PBR Polyart: https://assetstore.unity.com/packages/3d/characters/creatures/rpg-monster-duo-pbr-polyart-157762

FREE Magic Aura Construction Kit:https://assetstore.unity.com/packages/vfx/particles/spells/free-magic-aura-construction-kit-154136

VR Debugger Tutorial: https://www.youtube.com/watch?v=Pi4SHO0IEQY&ab_channel=DonionTech

Grass: https://assetstore.unity.com/packages/2d/textures-materials/floors/hand-painted-grass-texture-78552

Buildings, some trees, benches, fences, big boat, bushes: https://assetstore.unity.com/packages/3d/props/exterior/low-poly-brick-houses-131899

Cliffs: https://assetstore.unity.com/packages/3d/environments/landscapes/low-poly-cliff-pack-67289

Bushes: https://assetstore.unity.com/packages/3d/environments/landscapes/lowpoly-environment-pack-99479

Rocks on Ground: https://assetstore.unity.com/packages/3d/environments/low-poly-rock-pack-57874

Some Trees: https://assetstore.unity.com/packages/3d/low-poly-tree-62946

Cobblestone on Ground: https://assetstore.unity.com/packages/2d/textures-materials/stone/tileable-cobblestone-texture-21235

All other assets (Arrow, materials for water etc.): Created by us

*Aplogies for these instructions being so short, we had to rewrite them from scratch when we re-created via git push --force from memory on a very short timeline*

# About:
 This was made for the final project in 5619, VR and 3D Interaction. This can be run on the Oculus Quest via the apk file. This simulation maps spells in a 3D enviroment via various 3D interaction techniques. We created this to aid DND fight scenarios. We created a Spell Simulator that approaches this concept through two methods, the first through prescice, pointing and manipulation interaction techniques, and the second, through motion capture data collected from the headset and controllers of an Oculus Quest. We created the first method, Caster Stance,  so that you could create various spell shapes, sizes and colors while placing the spells on the board so that they could be helpful for planning out attacks. It's much more prescice, and allows the user to create multiple spells in a conscie and timely manner. The second method, Avatar stance, was created because we wanted a way to really immerse yourself in the game, it is a fluid spellcasting stance that reads the user's headset and controller data and casts spells accordingly. It is meant so that you can really feel like a magic user through particle simulation spells and quick movements. 

## Project Description
In our simulation there are two "stances", Caster stance and Avatar Stance.  Caster stance allows for the user to move their selection cube anywhere in the world and cast any of the determined spells along with being able to make their own spells.  Avtar stance is a mode where predetermined gestures can be made in order to "cast" more flavorful and interesting spells based on the gesture that the user gestures.

## Caster Stance:
In caster stance there is a selection cube.  It is locked to a tile grid to simulate how in a TTRPG(Table Top Role Playing Game) spells are typically represented on a grid.  The user can move this selection cube with two interaction techniques.  Precision Mode and Pointer Mode.

#### Pointer Mode:
Pointer mode is the name implies, controlled by where you point your right controller.  It uses a basic fishing reel technique (from assignment 4) in order to control forward and backwards motion.  **Pointer mode is enabled whenever you hold the RIGHT GRIP BUTTON**  once you let go of pointer mode the selection sphere will stay where your pointer was when you let go of the grip button.

#### Precsion Mode:
Precision mode is more precise than pointer mode.  It is the default mode that is enabled when not in Pointer Mode.  Pointer mode uses the right joystick, A & B buttons, and the trigger.  To move the spell in pointer mode, you can hold the joystick, forward, left, right, or backwards.  Then press the trigger button once to move it one tile.  If you hold the trigger button it will slowly continue moving the sphere (the delay between moves decreasing over time, kinda like how if you hold backspace for a while).  So, the joystick controlls X-Z directions.  To modify the Y-axis, press the B button to go up, and the A button go to down.  Holding down the buttons acts similarly to holding down the joystick.

It should be noted that precision mode can intelligently determine which direction you are facing.  So if you start facing north and then press right on the thumbstick the spell will move to the right (-x lets say), but if you rotate 180 degrees and press right again on the thumbstick it knows you are facing the opposite direction and will move the cube to your right, which is in the +x direction.  The "direction" you're facing is controlled by your headset's y-rotation.

### UI

The UI of the system is on the left-hand side of the screen.  Along the top row are 3 premade spells.  The next three entries are by default empty slots that can be filled with custom spells.  These buttons won't do anything until you create a custom spell for them.  The third row is where the buttons to create said custom spells are. Along the bottom row are two more buttons, one to switch to avatar stance, and one to clear whatever spell is being visualized at the moment.

### Spell Creation

Controls:
* X -> select an option in a cyclical menu (shape and color)
* Y -> go to the next option in a cyclical menu
* Left Grip -> select the a point in the world for a width, height, or depth calculation

First you will be presented with a spell shape selector, allowing you to cycle through spell shapes
Then you will have the option to change the width of the spell
* Squares wil change only width
* Cylinders will also change depth with this option
* Spheres will change depth and ehight with this option as well

Next, if applicable you will be able modify the height of the square or cylinder

Finally, if applicable you will be able to modify the depth of the shape.

Then finally you will be able to cycle through the different color options for the spells.

When decding on the width, height, and or depth of a spell, click the grip button once to select the first location, click it again to select the second location


## How To Use Avatar Stance:
* First, check  that you are in avatar stance! There is a button on the UI that triggers the stances' on/off state. 
* To cast the slice spell: move 1 or two hands quickly downwards. This should create a large blue column of light a few meters away in the direction that your headset is facing. 
* To cast the clap spell: move both hands together in a clap motion. This should create a storm of red swirling particles in the direction that your headset is facing. 
* To cast the swirl spell: move 1 hand in a lasso motion. This should create a green swirling spell around an orb in the direction that your headset is facing.
* You can also have multiple spells running at once. Depending on how fast you cast spells, you can have multiple spells overlap each other at once.
