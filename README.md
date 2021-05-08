# Object-oriented programs in C++
 
## Usage - single main.cpp file
Compile:
```console
foo@bar ~ % g++ main.cpp <executable_name>.out
```
Execute:
```console
foo@bar ~ % ./<executable_name>.out
```

## Usage - multiple .cpp files

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
