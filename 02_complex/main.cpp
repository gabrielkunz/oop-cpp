#include <stdio.h>
#include <iostream>
#include <string>

class Complex {
 public:
    Complex();
    float GetRealPart();
    float GetImaginaryPart();
    float GetAbsoluteValue();
    float GetPhase();
    float Sum(Complex* num);
    float Subtract(Complex* num);
    float Multiply(Complex* num);
    float Divide(Complex* num);
    std::string GetRectangularForm();
    std::string GetPolarForm();
 private:
    float real_part;
    float imaginary_part;
    float abs_value;
    float phase;
};
