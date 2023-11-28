# AutoCAD ObjectARX Application - Add Layer

## Overview

This ObjectARX application includes a function, `addLayer`, designed to manage the presence of a layer named "OBJ" in the current AutoCAD drawing. If the "OBJ" layer doesn't exist, the function creates it with predefined properties.

## Functionality

The `addLayer` function:

1. **Checks for Existing Layer:**
   - Verifies if a layer named "OBJ" is present in the Layer Table.

2. **Creates a New Layer if Not Found:**
   - If the layer is absent, the function:
     - Opens the Layer Table for write access.
     - Creates a new "OBJ" layer with a cyan color.
     - Adds the layer to the Layer Table.
     - Closes the Layer Table and the created layer record to release resources.

## Usage

1. **Build and Load:**
   - Open the ObjectARX project in Microsoft Visual Studio.
   - Build the project and load the resulting DLL in AutoCAD.

2. **Run the Command:**
   - In AutoCAD, execute the custom command associated with the `addLayer` function (e.g., "ADDLAYER").

3. **View Results:**
   - The function ensures the existence of a "OBJ" layer in the drawing, creating it with predefined properties if needed.