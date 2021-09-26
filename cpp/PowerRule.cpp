#include <iostream>
#include "include.h"

void powerRule(int coefficient, int exponent) {
  coefficient *= exponent;
  exponent--;
  
  if (coefficient == 0) {
    std::cout << "Solution: " << "x^" << exponent << "\n";
  }
  else if (exponent == 0) {
    std::cout << "Solution: " << coefficient << "\n";
  }
  else {
    std::cout << "Solution: " << coefficient << "x^" << exponent << "\n";
  }
}  
