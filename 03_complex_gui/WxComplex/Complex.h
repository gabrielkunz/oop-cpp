#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

#include <math.h>
#include <iostream>

class Complex {
 public:
  Complex();
  Complex(float real_part, float imaginary_part);
  ~Complex();
  float getRealPart();
  float getImaginaryPart();
  float getAbsoluteValue();
  float getPhase();
  void setRealPart(float real_part);
  void setImaginaryPart(float imaginary_part);
  Complex * sum(Complex * complex_number);
  Complex * subtract(Complex * complex_number);
  Complex * multiply(Complex * complex_number);
  Complex * divide(Complex * complex_number);
  void printRectangularForm();
  void printPolarForm();
 private:
  float real_part;
  float imaginary_part;
};

#endif // COMPLEX_H_INCLUDED
