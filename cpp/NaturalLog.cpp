#include <iostream>

int main() { // only int main for now because i want to test before switching to normal function declaration
  // This function will calculate the deriviative of ln(u). d/dx ln(u) = 1/u du/dx
  
  int u;
  std::cout << "The only U functions that are currently supported are exponent functions (ie. x^2, 2x^3)" << "\n";
  std::cout << "Enter U function (ln(u)): ";
  std::cin >> u;
  std::cout << "Calculating: ln(" << u << ")" << "\n";
  
  std::cout << "1 / " << powerRule(u)
}
