**Coin Management System**

A small C console program for managing coin-related operations (student project for CSE115L). This repository contains the source code, headers, and supporting files required to build and run the project on Windows using a GCC toolchain (MinGW or similar).

**Features**
- **Summary:**: Basic coin management functionality implemented in C (student assignment).
- **Platform:**: Windows (tested with PowerShell and GCC/MinGW).

**Files**
- `main.c`: Program entry point and main logic.
- `menu.h`: Menu declarations and helper functions.
- `splash.h`: Startup splash or UI helpers.
- `login.txt`: Example or persisted login data (text file used by the program).
- `images/`: Folder containing any ASCII or binary image assets used by the program.
- `tempCodeRunnerFile.c`: Temporary file created by code runner (can be ignored).

**Prerequisites**
- Install a C compiler such as `gcc` (MinGW-w64 recommended on Windows).
- Have PowerShell available (default on Windows).

**Build (PowerShell)**
Use `gcc` to compile the project. From the project root run:

```powershell
gcc main.c -o coinms.exe
# If there are multiple source files, list them all, for example:
# gcc main.c another.c -o coinms.exe
```

If you use an IDE (Code::Blocks, Visual Studio, etc.) configure a project and add the `.c` and `.h` files.

**Run (PowerShell)**
Run the produced executable from PowerShell:

```powershell
.\coinms.exe
```

**Usage**
- The program is a console application. Follow on-screen menus to interact with the coin-management features.
- If the program expects `login.txt` or other files, ensure they are present in the same folder as the executable.

**Output Images**

Below are screenshots of the program in action:

![Splash Screen](output%20image/sp.jpg)

![Screenshot 1](output%20image/1.jpg)

![Screenshot 2](output%20image/2.jpg)

![Screenshot 3](output%20image/3.jpg)

![Screenshot 4](output%20image/4.jpg)

![Screenshot 5](output%20image/5.jpg)

![Screenshot 6](output%20image/6.jpg)

![Screenshot 7](output%20image/7.jpg)

**Troubleshooting**
- If `gcc` is not found, install MinGW-w64 and add its `bin` directory to your `PATH`.
- If compilation fails with missing headers, ensure all `.h` files are in the project root and included correctly.
- For runtime errors, run the program from PowerShell to see console output and error messages.

**Contributing / Next steps**
- Add a `LICENSE` if you wish to open-source the project.
- Add a `Makefile` or build script for easier builds.
- Consider splitting code into multiple `.c` files and add a small `README` section describing the program flow.

**Contact**
- Author: Student project. For questions, update the project or ask the project owner.
