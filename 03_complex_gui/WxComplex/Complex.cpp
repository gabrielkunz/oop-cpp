#include "Complex.h"

Complex::Complex() {
  real_part = 0;
  imaginary_part = 0;
}

Complex::Complex(float real_part, float imaginary_part) {
  setRealPart(real_part);
  setImaginaryPart(imaginary_part);
}

Complex::~Complex(){
  std::cout << "Object deleted.";
  std::cout << std::endl;
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

Complex * Complex::sum(Complex * complex_number) {
  float result_real = this->real_part + complex_number->real_part;
  float result_imaginary = this->imaginary_part + complex_number->imaginary_part;

  auto result = new Complex(result_real, result_imaginary);
  return result;
}

Complex * Complex::subtract(Complex * complex_number) {
  float result_real = this->real_part - complex_number->real_part;
  float result_imaginary = this->imaginary_part - complex_number->imaginary_part;

  auto result = new Complex(result_real, result_imaginary);
  return result;
}

Complex * Complex::multiply(Complex *complex_number) {
  float abs1 = getAbsoluteValue();
  float phase1 = getPhase();
  float abs2 = complex_number->getAbsoluteValue();
  float phase2 = complex_number->getPhase();

  float result_abs = abs1 * abs2;
  float result_phase = phase1 + phase2;
  float result_real = result_abs * cos(result_phase);
  float result_imaginary = result_abs * sin(result_phase);

  auto result = new Complex(result_real, result_imaginary);
  return result;
}

Complex * Complex::divide(Complex *complex_number) {
  float abs1 = getAbsoluteValue();
  float phase1 = getPhase();
  float abs2 = complex_number->getAbsoluteValue();
  float phase2 = complex_number->getPhase();

  float result_abs = abs1 / abs2;
  float result_phase = phase1 - phase2;
  float result_real = result_abs * cos(result_phase);
  float result_imaginary = result_abs * sin(result_phase);

  auto result = new Complex(result_real, result_imaginary);
  return result;
}

void Complex::printRectangularForm() {
  std::cout << "(";
  std::cout << std::to_string(getRealPart());
  std::cout << ", ";
  std::cout << std::to_string(getImaginaryPart());
  std::cout << "i)";
}

void Complex::printPolarForm() {
  std::cout << "(";
  std::cout << std::to_string(getAbsoluteValue());
  std::cout << " ∠ ";
  std::cout << std::to_string(getPhase() * 180/3.1415926535);
  std::cout << "º)";
}
