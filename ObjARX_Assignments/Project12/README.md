# Working with System Variables and Using Commands

This exercise demonstrates how to effectively utilize the `acedSetVar`, `acedGetVar`, and `acedCommandS` methods to manipulate system variables and execute commands in AutoCAD.

## Instructions

1. In Microsoft Visual Studio, navigate to the source code file and place the cursor after the line `#include "dbents.h"`. Press Enter once.

    ```cpp
    #include "acedCmdNF.h"
    ```

2. Define a function named `commandAndSysVar` by adding the following code:

    ```cpp
    void commandAndSysVar()
    {
        // Function implementation goes here
    }
    ```

3. In the `acrxEntryPoint` function, add the following code to register the new command:

    ```cpp
    acedRegCmds->addCommand(_T("AUCommands"), _T("CommandAndSysVar"), _T("CommandAndSysVar"), ACRX_CMD_MODAL, commandAndSysVar);
    ```

4. Save, build, and load the `output.arx` file into AutoCAD.

5. At the Command prompt, type `commandandsysvar` and press Enter.

6. In the drawing area, specify a point to draw the second circle.

7. Unload the `output.arx` file from AutoCAD.

Feel free to explore and modify the function implementation as needed.
