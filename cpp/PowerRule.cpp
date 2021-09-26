#include <iostream>
#include "include.h"

void powerRule(int coefficient, int exponent) {
  coefficient *= exponent;
  exponent--;
  
  displayAnswer(coefficient, exponent);

//  if (coefficient == 0) {
//    std::cout << "\n"  << "Solution: " << "x^" << exponent << "\n";
//  }
//  else if (exponent == 0) {
//    std::cout << "\n" << "Solution: " << coefficient << "\n";
//  }
//  else {
//    std::cout << "\n" << "Solution: " << coefficient << "x^" << exponent << "\n";
//  }
}  
