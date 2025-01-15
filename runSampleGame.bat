@echo off

set path_to_main=build\bin\debug\main.exe

echo Building the project...
cmake --build build

echo Running main.exe...

:: i use cmd /k to open a new terminal window instead of the built-in vscode terminal
start cmd /k %path_to_main%