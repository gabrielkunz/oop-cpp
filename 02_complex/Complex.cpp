//
// Created by Kunz, Gabriel on 07/05/21.
//

#include "Complex.h"

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
