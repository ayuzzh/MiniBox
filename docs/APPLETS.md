# Applet
Applet is a sub functionality which is built into minibox executable
if enabled while configuring the project. For example "echo" is an
applet likewise "pwd", "cd" are also applets.

## Create your own applet for MiniBox
Here your applet's name is assumed as XXXX. 
1. First you need to create XXXX.cpp source file in src folder. 
For example, echo applet's source file is located in src/coreutils
folder. Cause it is well fitted in that folder. If you want you
can create a XYZ folder in src for grouping the applets then 
create source file in that folder.

2. Then make sure to follow the below source code format in the
XXXX.cpp file.
```
#include <applets.hpp>
#include <config.h>

#if XXXX_BUILD == ON

//Here goes your source code

void XXXX_usage()
{
}

int XXXX_main(int argc, char* argv[])
{
	//Here goes the code
}

#endif

```
3. Include `#define XXXX_BUILD @XXXX_BUILD@` this in MiniBoxConfig.h.i
file which is located in root directory of the repository.

4. Include `option(XXXX "compile XXXX command" ON)` and 
`set(XXXX_BUILD ${XXXX})` in CMakeLists.txt file.

5. Include `src/path-to-applet-cpp-file/XXXX.cpp` in CMakeLists.txt after
the line `src/MiniBox.cpp`.

6. Include `int XXXX_main(int argc, char* argv[])` in include/applets.hpp
file.

7. Include this code in src/applets.cpp file in applets_call function.
```
#if XXXX_BUILD == ON

else if (strcmp(_basename, "XXXX") == 0)
{
	XXXX_main(_argc, _argv);
}

#endif
```

8. Include this code in src/applets.cpp file in applets\_as\_main function.
```
#if XXXX_BUILD == ON

else if (strcmp(_basename, "XXXX") == 0)
{
	XXXX_main(argc, argv);
}

#endif
```

