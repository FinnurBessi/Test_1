@echo off
echo 
echo ##############################
echo     Running Test Scripts    
echo ##############################
cd %~dp0
cd build
cmake .. -G "MinGW Makefiles"
mingw32-make
ctest --output-on-failure
if %ERRORLEVEL% neq 0 (
	echo error: Tests Failed!
)
