# AutoCAD ObjectARX Application

## Overview

This ObjectARX application introduces the `commandAndSystemVariable` function, designed to interact with the CIRCLERAD system variable in AutoCAD. The function executes the following tasks:

1. Fetches the current value of the CIRCLERAD system variable using `acedGetVar` and displays it through `acutPrintf`.
2. Defines a center point (`pt`) and a radius (`rrad`) for a circle.
3. Executes the CIRCLE command with the provided values using `acedCommandS`.
4. Pauses for user input before completing the circle, utilizing the PAUSE option with another call to the CIRCLE command.
5. Restores the CIRCLERAD system variable to its original value using `acedSetVar`.

## Usage

1. **Build and Load:**
   - Open the ObjectARX project in Microsoft Visual Studio.
   - Build the project and load the resulting DLL in AutoCAD.

2. **Run the Command:**
   - In AutoCAD, input the custom command associated with the `commandAndSystemVariable` function (e.g., "MYCOMMAND").

3. **Interact with CIRCLERAD:**
   - The function will retrieve the current value of the CIRCLERAD system variable, display it, create a circle with specified values, and pause for user input.