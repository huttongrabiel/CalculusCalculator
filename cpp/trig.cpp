#include <iostream>
#include "include.h"
#include <map>

void trigonometricDerivative() {
  std::map<std::string, std::string> trigDerivs;

  // Populating the map with values
  // sin -> cos
  // cos -> -sin
  // tan -> sec^2
  // cot -> -csc^2
  // cscx -> -cscxcotx
  // secx -> secxtanx
  trigDerivs.insert(std::pair<std::string, std::string>("sin(x)", "cos(x)")); 
  trigDerivs.insert(std::pair<std::string, std::string>("cos(x)", "-sin(x)")); 
  trigDerivs.insert(std::pair<std::string, std::string>("tan(x)", "sec^2(x)")); 
  trigDerivs.insert(std::pair<std::string, std::string>("cot(x)", "-csc^2(x)")); 
  trigDerivs.insert(std::pair<std::string, std::string>("csc(x)", "-csc(x)cot(x)")); 
  trigDerivs.insert(std::pair<std::string, std::string>("sec(x)", "sec(x)tan(x)")); 
  
  std::string user_trig_function;
  std::cout << "Enter your trig function (Ex. 'sin(x)' or 'cos(x)'): ";
  std::cin >> user_trig_function; 

  std::map<std::string, std::string>::iterator itr;
  for (itr = trigDerivs.begin(); itr != trigDerivs.end(); itr++) {
    if (itr->first == user_trig_function) {
      std::cout << itr->second << "\n";
    }
  } 
} 
