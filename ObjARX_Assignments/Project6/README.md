# AutoCAD ObjectARX Application - List Objects

## Overview

This ObjectARX application introduces the `listObjects` function, designed to retrieve and display the class names of all objects in the current space of an AutoCAD drawing. The class names are output to the AutoCAD Text Window.

## Functionality

The `listObjects` function carries out the following tasks:

1. **Access Current AutoCAD Database:**
   - Retrieves the current AutoCAD database.

2. **Retrieve Current Space Object:**
   - Obtains the current space object, typically Model Space or Paper Space.

3. **Iterate Through Objects:**
   - Iterates through each object in the current space.

4. **Display Class Names:**
   - For each object, gets the entity and displays its class name.

5. **Entity and Iterator Handling:**
   - Closes each entity after retrieving and displaying its class name.
   - Closes the current space object.
   - Deletes the block iterator object from memory.

6. **Text Window Display:**
   - Displays the AutoCAD Text Window.

## Usage

1. **Build and Load:**
   - Open the ObjectARX project in Microsoft Visual Studio.
   - Build the project and load the resulting DLL in AutoCAD.

2. **Run the Command:**
   - Execute the custom command linked to the `listObjects` function in AutoCAD (e.g., "LISTOBJECTS").

3. **View Results:**
   - The function prints the class names of all objects in the current space to the AutoCAD Text Window.
