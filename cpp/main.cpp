#include <iostream>
#include <stdlib.h>
#include "include.h"
#include <typeinfo>

// Driver Code
int main() {
  
  int coefficient, exponent;

  std::cout << "Enter Your Equation On Next Line" << "\n";
  std::cout << "--------------------------------" << "\n";

  std::cout << "Coefficient (Enter 0 if no coefficient in equation): ";
  std::cin >> coefficient;

//  while (typeid(coefficient).name() != "i") {
//    std::cout << "ERROR: value entered must be of type int" << "\n";
//    std::cout << "Coefficient: ";
//    std::cin >> coefficient;
//  }

  std::cout << "Exponent: ";
  std::cin >> exponent;
//  while (typeid(coefficient).name() != "i") {
//    std::cout << "ERROR: value entered must be of type int" << "\n";
//    std::cout << "Exponent: ";
//    std::cin >> exponent;
//  }

  std::cout << "Equation: " << coefficient << "x^" << exponent << "\n";
  powerRule(coefficient, exponent);
}
