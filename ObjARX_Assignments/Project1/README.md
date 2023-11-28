# Project Overview

Welcome to the ObjectARX Application Template for AutoCAD! This project is designed as a starting point for developing ObjectARX applications within the AutoCAD environment. Leveraging the power of Microsoft Foundation Classes (MFC), this Dynamic Link-Library (DLL) with a DLL extension provides a robust foundation for your AutoCAD extensions.

## Getting Started

Follow these steps to set up your ObjectARX project:

1. **Create a New ObjectARX Project:**
   - Launch Microsoft Visual Studio.
   - Generate a new project as an MFC Dynamic Link-Library (DLL) with a DLL extension.

2. **Configure for ObjectARX:**
   - Adjust C++ and Linker properties to tailor the project for ObjectARX development.

3. **Add Required Libraries:**
   - In the project properties, establish links to ObjectARX libraries and other essential dependencies for AutoCAD applications.

4. **Define acrxEntryPoint Function:**
   - Define the `acrxEntryPoint` function, the crucial entry point for your ObjectARX application.
   - Manage initialization and unloading messages, such as `AcRx::kInitAppMsg` and `AcRx::kUnloadAppMsg`.

5. **Implement Command for Message Display:**
   - Craft code to exhibit the message "Hello in the world of AutoCAD" upon entering the "MYCOMMAND" in AutoCAD.
   - Develop a custom command function (e.g., `addCommand`) and register it using `acedRegCmds->addCommand`.

## Usage

Follow these simple steps to experience your ObjectARX application in action:

1. **Build the Project:**
   - Utilize Microsoft Visual Studio to compile and build your ObjectARX project.

2. **Load the DLL in AutoCAD:**
   - Load the resulting DLL into the AutoCAD environment.

3. **Execute Custom Command:**
   - Enter the command "AddCommand" within AutoCAD to witness the displayed message and explore the capabilities of your custom ObjectARX application.