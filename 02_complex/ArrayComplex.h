//
// Created by Kunz, Gabriel on 07/05/21.
//

#ifndef COMPLEX_ARRAYCOMPLEX_H
#define COMPLEX_ARRAYCOMPLEX_H

#include "Complex.h"

class ArrayComplex {
public:
  explicit ArrayComplex(int size);
  ~ArrayComplex();
  int getSize();
  void addComplexNumber(Complex * complex_number, int index);
  void printArrayRectangular();
  void printArrayPolar();
  int getGreaterAbsValueIndex();
  Complex * getComplexNumber(int index);
private:
  Complex * elements;
  int size;

};

#endif //COMPLEX_ARRAYCOMPLEX_H
