# AutoCAD ObjectARX Application - Input Line

## Overview

This ObjectARX application introduces the `inputLine` function, enabling users to draw a line in AutoCAD by interactively inputting two points. The drawn line is then added to the current space block of the drawing.

## Functionality

The `inputLine` function executes the following tasks:

1. **Access Current AutoCAD Database:**
   - Retrieves the current AutoCAD database.

2. **Retrieve Current Space Block:**
   - Obtains the current space block, typically Model Space or Paper Space.

3. **Interactive Point Input:**
   - Prompts the user to input the first point using `acedGetPoint`.

4. **Second Point Input:**
   - If the first point is successfully obtained, prompts the user for the second point.

5. **Create Line Object:**
   - If both points are successfully obtained, creates a new AcDbLine object using the specified points.

6. **Append to Space Block:**
   - Appends the new Line object to the current space block.

7. **Close Objects:**
   - Closes the current space block and the Line object.

## Usage

1. **Build and Load:**
   - Open the ObjectARX project in Microsoft Visual Studio.
   - Build the project and load the resulting DLL in AutoCAD.

2. **Run the Command:**
   - Execute the custom command linked to the `inputLine` function in AutoCAD (e.g., "DRAWLINE").

3. **Follow Prompts:**
   - The function prompts you to interactively input the first and second points.

4. **View Result:**
   - A line is created based on the input points and added to the current space block.
