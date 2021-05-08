#include <iostream>
#include <string>

#include "Complex.h"
#include "ArrayComplex.h"

int main() {
  auto * complex_numbers = new ArrayComplex(5);

  auto * c_num1 = new Complex(3, 0);
  auto * c_num2 = new Complex(-1, 1);
  auto * c_num3 = new Complex(5, 3);
  auto * c_num4 = new Complex(-4, 7);
  auto * c_num5 = new Complex(2, -9);

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
