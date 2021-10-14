#include <iostream>
#include "include.h"

void naturalLogOfU() {  
  // This function will calculate the deriviative of ln(u). d/dx ln(u) = 1/u du/dx
  
  int uCoefficient, uExponent;
  std::cout << "The only U functions that are currently supported are exponent functions (ie. x^2, 2x^3)" << "\n";
  std::cout << "Enter U function coefficient (ie. 3): ";
  std::cin >> uCoefficient;
  std::cout << "Enter U function exponent (ie. 4): ";
  std::cin >> uExponent;
  std::cout << "Calculating: ln(" << uCoefficient << "x^" << uExponent << ")" << "\n";
  
  std::cout << "1 / " << uCoefficient << "x^" << uExponent << " * ";
  twoParameterPowerRule(uCoefficient, uExponent);
  std::cout << "\n";
}
