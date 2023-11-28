# AutoCAD ObjectARX Application - Change Color

## Overview

This ObjectARX application introduces the `changeColor` function, enabling users to interactively modify the color of selected objects in AutoCAD. The function prompts users to select objects, input a color keyword or numeric value, and then iterates through the chosen objects, adjusting their color based on user input.

## Functionality

The `changeColor` function executes the following steps:

1. **Prompt for Object Selection:**
   - Prompts users to select objects in AutoCAD.

2. **Prompt for Color Selection:**
   - If objects are selected, prompts users to enter a color keyword/option, defaulting to "Red."

3. **Change Color of Selected Objects:**
   - Iterates through the selected objects, changing their color based on user input.
   - Users can specify colors using keywords ("Red," "Yellow," "Green") or numeric values (1, 2, 3).
   - Choosing "Bylayer" sets the object's color to be determined by the layer color.

4. **Close Selected Objects:**
   - Closes the selected objects after adjusting their colors.

## Usage

1. **Build and Load:**
   - Open the ObjectARX project in Microsoft Visual Studio.
   - Build the project and load the resulting DLL in AutoCAD.

2. **Run the Command:**
   - In AutoCAD, execute the custom command associated with the `changeColor` function (e.g., "CHANGECOLOR").

3. **Select Objects:**
   - Use AutoCAD's selection tools to choose objects in the drawing.

4. **Enter Color Option:**
   - Input a color keyword or numeric value when prompted.

5. **View Results:**
   - The function will adjust the color of the selected objects based on the user's input.
