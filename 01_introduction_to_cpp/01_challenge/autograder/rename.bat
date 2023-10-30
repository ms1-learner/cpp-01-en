@echo off
setlocal

set empty=

g++ -std=c++17 -o autograder\main main.cpp 2> nul
if errorlevel 1 (
    set empty=empty
) else (
    del autograder\main.exe
)

g++ -std=c++17 -o autograder\rename_main autograder\rename_main.cpp

autograder\rename_main main.cpp autograder\gen\dummy_main.cpp %empty%

del autograder\rename_main.exe

endlocal