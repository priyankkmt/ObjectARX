# Building an ObjectARX Application for Release

This exercise provides guidance on building a project for release on other workstations.

## Instructions

1. In Microsoft Visual Studio, navigate to the menu bar, and click **Build ➔ Configuration Manager**.

2. In the Configuration Manager dialog box, choose "Release" from the Active Solution Configuration drop-down list, and then click **Close**.

3. In Microsoft Visual Studio, on the menu bar, click **Build ➔ Build Solution**.

   - The location of the build output is displayed in the Output window.
1> projectName.vcxproj -> C:\Datasets\Wednesday\SD6174-L Sparring with Autodesk® ObjectARX® - Round 2 Stepping into the Ring\AU2014\x64\Release\output.arx
1>FinalizeBuildStatus:
1> Deleting file "x64\Release\output.unsuccessfulbuild".
1> Touching "x64\Release\output.lastbuildstate".

4. Load the generated `output.arx` file into AutoCAD.

5. Try some of the commands defined in the ARX file: UNO, ADDLINE, MAKELAYER, LISTOBJECTS, INPUTLINE, and CHANGECOLOR. The commands should execute as they did before. However, the release version of the ARX file can be copied and executed on other workstations running AutoCAD 2015.

6. Unload the `output.arx` file from AutoCAD.
