#include <stdio.h>
#include <math.h>
#include <iostream>
#include <string>

class Complex {
 public:
  Complex();
  Complex(float real_part, float imaginary_part);
  float getRealPart();
  float getImaginaryPart();
  float getAbsoluteValue();
  float getPhase();
  void setRealPart(float real_part);
  void setImaginaryPart(float imaginary_part);
  void sum(Complex * complex_number);
  void subtract(Complex * complex_number);
  void multiply(Complex * complex_number);
  void divide(Complex * complex_number);
  void printRectangularForm();
  void printPolarForm();
 private:
  float real_part;
  float imaginary_part;
};

Complex::Complex() {
  real_part = 0;
  imaginary_part = 0;
}

Complex::Complex(float real_part, float imaginary_part) {
  setRealPart(real_part);
  setImaginaryPart(imaginary_part);
}

float Complex::getRealPart() {
  return real_part;
}

float Complex::getImaginaryPart() {
  return imaginary_part;
}

float Complex::getAbsoluteValue() {
  return sqrt(real_part * real_part + imaginary_part * imaginary_part);
}

float Complex::getPhase() {
  return atan2(imaginary_part, real_part);
}

void Complex::setRealPart(float real_part) {
  this->real_part = real_part;
}

void Complex::setImaginaryPart(float imaginary_part) {
  this->imaginary_part = imaginary_part;
}

void Complex::sum(Complex * complex_number) {
  real_part += complex_number->real_part;
  imaginary_part += complex_number->imaginary_part;
}

void Complex::subtract(Complex * complex_number) {
  real_part -= complex_number->real_part;
  imaginary_part -= complex_number->imaginary_part;
}

void Complex::printRectangularForm() {
  std::cout << "Rectangular form: (";
  std::cout << std::to_string(getRealPart());
  std::cout << ", ";
  std::cout << std::to_string(getImaginaryPart());
  std::cout << ")" << std::endl;
}

void Complex::printPolarForm() {
  std::cout << "Polar form: (";
  std::cout << std::to_string(getAbsoluteValue());
  std::cout << ", ";
  std::cout << std::to_string(getPhase() * 180/3.1415926535);
  std::cout << ")" << std::endl;
}

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

int main() {
  ArrayComplex * complex_numbers = new ArrayComplex(5);

  Complex * c_num1 = new Complex(3, 0);
  Complex * c_num2 = new Complex(-1, 1);
  Complex * c_num3 = new Complex(5, 3);
  Complex * c_num4 = new Complex(-4, 7);
  Complex * c_num5 = new Complex(2, -9);

  complex_numbers->addComplexNumber(c_num1, 0);
  complex_numbers->addComplexNumber(c_num2, 1);
  complex_numbers->addComplexNumber(c_num3, 2);
  complex_numbers->addComplexNumber(c_num4, 3);
  complex_numbers->addComplexNumber(c_num5, 4);

  std::cout << "Array size: ";
  std::cout << std::to_string(complex_numbers->getSize());
  std::cout << std::endl;
  complex_numbers->printArrayRectangular();
  complex_numbers->printArrayPolar();

  int index_greater_absvalue = complex_numbers->getGreaterAbsValueIndex();
  Complex * greater_absvalue_num = complex_numbers->getComplexNumber(index_greater_absvalue);

  std::cout << std::endl;
  std::cout << "The index of the number with greater absolute value: ";
  std::cout << std::to_string(index_greater_absvalue);
  std::cout << std::endl;
  std::cout << "The greater absolute value in the array: ";
  std::cout << std::to_string(greater_absvalue_num->getAbsoluteValue());
  std::cout << std::endl;

  return 0;
}
