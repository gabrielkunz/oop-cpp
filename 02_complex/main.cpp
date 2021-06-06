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
  auto * result = new Complex();

  complex_numbers->addComplexNumber(c_num1, 0);
  complex_numbers->addComplexNumber(c_num2, 1);
  complex_numbers->addComplexNumber(c_num3, 2);
  complex_numbers->addComplexNumber(c_num4, 3);
  complex_numbers->addComplexNumber(c_num5, 4);

  std::cout << "Array size: ";
  std::cout << std::to_string(complex_numbers->getSize());
  std::cout << std::endl;
  std::cout << "Array in rectangular form: " << std::endl;
  complex_numbers->printArrayRectangular();
  std::cout << "Array in polar form: " << std::endl;
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

  // Sum
  result = c_num5->sum(c_num1);
  std::cout << std::endl;
  c_num5->printRectangularForm();
  std::cout << " + ";
  c_num1->printRectangularForm();
  std::cout << " = ";
  result->printRectangularForm();
  std::cout << std::endl;
  delete result;

  // Subtract
  result = c_num5->subtract(c_num2);
  std::cout << std::endl;
  c_num5->printRectangularForm();
  std::cout << " - ";
  c_num2->printRectangularForm();
  std::cout << " = ";
  result->printRectangularForm();
  std::cout << std::endl;
  delete result;

  // Multiply
  result = c_num5->multiply(c_num3);
  std::cout << std::endl;
  c_num5->printRectangularForm();
  std::cout << " * ";
  c_num3->printRectangularForm();
  std::cout << " = ";
  result->printRectangularForm();
  std::cout << std::endl;
  delete result;

  // Divide
  result = c_num5->divide(c_num4);
  std::cout << std::endl;
  c_num5->printRectangularForm();
  std::cout << " / ";
  c_num4->printRectangularForm();
  std::cout << " = ";
  result->printRectangularForm();
  std::cout << std::endl;
  delete result;

  return 0;
}
