#include <iostream>
#include "include.h"

void displayAnswer(int coefficient, int exponent) {
  
  if (coefficient == 0) { 
    std::cout << " ----------------------- " << "\n";
    std::cout << "|                       |" << "\n";
    std::cout << "|                       |" << "\n";
    std::cout << "|           " << "x^" << exponent << "         |" << "\n";
    std::cout << "|                       |" << "\n";
    std::cout << "|                       |" << "\n";
    std::cout << " ----------------------- " << "\n";
  }
  else if (exponent == 0) {
    std::cout << " ----------------------- " << "\n";
    std::cout << "|                       |" << "\n";
    std::cout << "|                       |" << "\n";
    std::cout << "|           " << coefficient << "           |" << "\n";
    std::cout << "|                       |" << "\n";
    std::cout << "|                       |" << "\n";
    std::cout << " ----------------------- " << "\n";
 
  }
  else {
    std::cout << " ----------------------- " << "\n";
    std::cout << "|                       |" << "\n";
    std::cout << "|                       |" << "\n";
    std::cout << "|         " << coefficient << "x^" << exponent <<  "         |" << "\n";
    std::cout << "|                       |" << "\n";
    std::cout << "|                       |" << "\n";
    std::cout << " ----------------------- " << "\n";
  }
}
