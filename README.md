# C-Plus-Plus OOP Doc

![](https://img.shields.io/badge/build-passing-green.svg) ![](https://img.shields.io/badge/Premake-5-green.svg) ![](https://img.shields.io/badge/C++-17-orange.svg) ![](https://img.shields.io/badge/LUA-5.3-blue.svg) ![](https://img.shields.io/badge/Doxygen-1.8.15-9cf.svg)

 - A simple c-plus-plus project using premake5 as build system and doxygen for documentation.

 - Project structure
 ```
    .
    ├── bin                    # Binaries will be here.
    ├── src                    # Source folder.
    │   ├── main.cpp           # Your code goes here.
    |   └── cpp-proj.make      # Project makefile
    ├── premake5.lua           # Build script `run premake in the same dir as this file`.
    ├── Doxyfile               # Doxygen config file.
    └── Makefile               # Main Makefile.
```
 ### How to Use
 - first download premake5 [here](https://premake.github.io/download.html#v5) and read the Wiki tutorial [here](https://github.com/premake/premake-core/wiki/Using-Premake)
 - execute the following commands

     ```
     git clone https://github.com/thiago-rezende/c-plus-plus-oop-doc.git
     cd c-plus-plus-oop-doc
     premake5 gmake
     make
     ```

 ### Generate Documentation
 - first download doxygen [here](http://www.doxygen.nl/)
 - open the Doxyfile with the Doxywizard
 - run doxygen
