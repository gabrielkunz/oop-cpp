//
// Created by Kunz, Gabriel on 07/05/21.
//

#ifndef COMPLEX_COMPLEX_H
#define COMPLEX_COMPLEX_H

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

#endif //COMPLEX_COMPLEX_H
