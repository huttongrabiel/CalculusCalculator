#include <iostream>
#include "include.h"

void powerRule() {
  
  int coefficient, exponent;

  std::cout << "Coefficient (Enter 0 if no coefficient in equation): ";
  std::cin >> coefficient;

  std::cout << "Exponent: ";
  std::cin >> exponent;

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

void twoParameterPowerRule(int coefficient, int exponent) {
  // If need to give data to powerrule instead of gather data from user, use this function
  
  coefficient *= exponent;
  exponent--;

  std::cout << coefficient << "x^" << exponent;
}
