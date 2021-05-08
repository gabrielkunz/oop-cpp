//
// Created by Kunz, Gabriel on 07/05/21.
//

#include "ArrayComplex.h"

ArrayComplex::ArrayComplex(int size) {
  elements = new Complex[size];
  this->size = size;
}

ArrayComplex::~ArrayComplex() {
  delete [] elements;
  std::cout << "object deleted by destructor." << std::endl;
}

void ArrayComplex::addComplexNumber(Complex * complex_number, int index) {
  elements[index] = * complex_number;
}

int ArrayComplex::getSize() {
  return size;
}

void ArrayComplex::printArrayRectangular() {
  for (int i = 0; i < size; i++) {
    elements[i].printRectangularForm();
  }
}

void ArrayComplex::printArrayPolar() {
  for (int i = 0; i < size; i++) {
    elements[i].printPolarForm();
  }
}

int ArrayComplex::getGreaterAbsValueIndex() {
  int index_greater_absvalue = 0;

  for (int i = 0; i < size; i++) {
    if (elements[i].getAbsoluteValue() > elements[index_greater_absvalue].getAbsoluteValue()) {
      index_greater_absvalue = i;
    }
  }

  return index_greater_absvalue;
}

Complex * ArrayComplex::getComplexNumber(int index) {
  if (index >= size) {
    std::cout << "Error: index out of array limits." << std::endl;
    return 0;
  } else {
    return &(elements[index]);
  }
}
