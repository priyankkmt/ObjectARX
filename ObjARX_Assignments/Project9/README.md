# Debugging an ObjectARX Application

This exercise guides you through the process of building a project for debugging and debugging the project in Microsoft Visual Studio.

## Instructions

1. In Microsoft Visual Studio, navigate to the menu bar and click **Build ➔ Configuration Manager**.

2. In the Configuration Manager dialog box, select "Debug" from the Active Solution Configuration drop-down list, and then click **Close**.

3. In the source code window, set a breakpoint by clicking in the leftmost margin across from the code line `pDb->getSymbolTable(pBlockTable, AcDb::kForRead);` in the `addLine` function.
   - *Note: The breakpoint is where the program will pause, allowing you to step through each line of code during execution.*

4. On the menu bar, click **Debug ➔ Start Debugging**.
   - If a Microsoft Visual Studio message box appears, stating "This Project is Out of Date," click **Yes** to build the project. This message is related to adding the breakpoint to the project. After clicking **Yes**, Visual Studio will start up AutoCAD 2015.

5. In the new AutoCAD session, create a new drawing, and then display the **Load/Unload Applications** dialog box.

6. In the Load/Unload Applications dialog box, browse to the location of the compiled debug version of the ARX file. Select `AU2014.arx` and click **Load**.

7. In the "File Loading - Security Concern" message box, click **Load**.

8. Click **Close**.

9. At the Command prompt, type `addline` and press **Enter**.

10. Focus will shift to Microsoft Visual Studio, and the line with the breakpoint will have a yellow arrow next to it, indicating that it is waiting for you to start debugging.

11. Press **F10** to begin stepping through each line of code until the yellow arrow is to the left of the code line `pBlockTableRecord->appendAcDbEntity(pLine);`.

12. Hover the cursor over the `endPt` variable in the line that begins with `AcDbLine *pLine` to see its current value. Alternatively, use the Watch window, which displays automatically while debugging a project.

13. Click **Debug ➔ Continue** to resume normal execution. You are returned to AutoCAD.

14. Switch back to Microsoft Visual Studio and click **Debug ➔ Stop Debugging** to end the debugging session.

15. Unload the `output.arx` file from AutoCAD.
