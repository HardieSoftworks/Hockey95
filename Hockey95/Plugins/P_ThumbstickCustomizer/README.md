# **ThumbstickCustomizer is a plugin for Unreal engine**
# Currently tested using Unreal Engine 5.6.
The component allows designers to modify inner/outer deadzones, axis sensitivity, and axis inversion. It also can convert raw input into 360 degree values, normalized values, and square coordinates. It contains an actor component called **AnalogControlCalcs** which can be added to actors (especially Pawns). 

# Examples folder
The folder contains a level and associated assets. The level shows visual representations of player input on a circle and square plane. The raw input is shown as a red dot and the adjusted input is shown as a green dot. Inner and outer deadzones are in red. An arrow corresponds to the calculated 360 degree angle based on controller input. The **Pawn_Analog** actor blueprint has an example of how player input is processed using the plugin.
