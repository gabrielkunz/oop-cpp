# Object-oriented programs in C++
 
## Usage

- Pre-requisite: [CMake](https://cmake.org/download/) installed.

Create build directory and navigate to it:
```console
foo@bar ~ % mkdir build
foo@bar ~ % cd build/
```
Configure project:
```console
foo@bar ~ % cmake ../
```
Build project:
```console
foo@bar ~ % cmake --build .
```
Run project:
```console
foo@bar ~ % ./<project name>
```

## Program 1: 01_account/
Bank account class with methods to perform credit, debit and transfer operations.

## Program 2: 02_complex/
Complex number class with methods to get polynomial and polar parts and perform mathematical operations.

## Program 3: 03_complex_gui/
GUI interface for a complex number calculator using wxWidgets and Complex class. CMake was not written for this projection, it is necessary to build the project and the wxWdigets 3.1.5 binaries to run the program.


