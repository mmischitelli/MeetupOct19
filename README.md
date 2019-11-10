# MeetupOct19

Hello World example shown during the October 2019 Italian C++ Meetup in Modena.

## Description

This is the simplest possible example I could come up with using UE4. It's just an actor statically spawned at startup which greets the developer running the code with a very uninteresting *Hello, World!*.

It is possible to alter the message shown by modifying the *Subject to salute* property in the Details window, after having selected the Text Widget actor in the World Outliner.

## Features

Actors, blueprints with default properties used by spawned classes, some slight interaction between UE's Editor and spawned Actors.

## Instructions

Clone UE4 source code to your computer, set it up by running Setup.bat and GenerateProjectFiles.bat. I'd suggest to compile the engine before compiling the project, just to make sure everything works.

Then clone this repo and right-click on the .uproject -> Generate Project Files. Once finished, double-click on the .sln to open Visual Studio, then hit F5 to launch the project with the debugger attached.