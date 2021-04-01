#include <stdio.h>
#include <iostream>
#include <string>

class Complex {
 public:
    Complex();
    float getRealPart();
    float getImaginaryPart();
    float getAbsoluteValue();
    float getPhase();
    float setRealPart(float real_part);
    float setImaginaryPart(float imaginary_part);
    float setAbsoluteValue(float abs_value);
    float setPhase(float phase);
    float sum(Complex* num);
    float subtract(Complex* num);
    float multiply(Complex* num);
    float divide(Complex* num);
    std::string getRectangularForm();
    std::string getPolarForm();
 private:
    float real_part;
    float imaginary_part;
    float abs_value;
    float phase;
};
