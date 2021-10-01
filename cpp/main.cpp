#include <iostream>
#include <stdlib.h>
#include "include.h"
#include <typeinfo>
#include <map>
#include <functional>

// Driver Code
int main() {
  
  int user_function_decision;
  
  //Lets user pick rule because determing what rule to use is really hard, at least for now
  std::cout << "Select a Currently Supported Calculation" << "\n";
  std::cout << "----------------------------------------" << "\n";
  std::cout << "1. Exponent Rule" << "\n";
  std::cout << "2. Basic Six Trig Derivatives" << "\n";
  std::cout << "\nEnter the Number for Your Calculation: ";
  std::cin >> user_function_decision;

  // Mapping our decisions for cleaner access
  std::map<int, std::function<void()>> calculation_decision;
  calculation_decision.insert(std::pair<int, std::function<void()>>(1, powerRule));
  calculation_decision.insert(std::pair<int, std::function<void()>>(2, trigonometricDerivative));
  
  //Iterate through each key and match to equation
  std::map<int, std::function<void()>>::iterator itr;
  for (itr = calculation_decision.begin(); itr != calculation_decision.end(); itr++) {
    if (itr->first == user_function_decision) {
      itr->second();
    }
  }
  
//  while (typeid(coefficient).name() != "i") {
//    std::cout << "ERROR: value entered must be of type int" << "\n";
//    std::cout << "Coefficient: ";
//    std::cin >> coefficient;
//  }
//  while (typeid(coefficient).name() != "i") {
//    std::cout << "ERROR: value entered must be of type int" << "\n";
//    std::cout << "Exponent: ";
//    std::cin >> exponent;
//  }

//  powerRule(coefficient, exponent);
}
