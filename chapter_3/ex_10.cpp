#include <iostream>

int main() {
  std::cout << "Enter +, -, * or / and two numbers: " << "\n";

  double num1, num2;
  std::string operation;
  std::cin >> operation >> num1 >> num2;

  if (operation == "+") {
    std::cout << "The sum is " << num1 + num2 << "\n";
  } else if (operation == "-") {
    std::cout << "The difference is " << num1 - num2 << "\n";
  } else if (operation == "*") {
    std::cout << "The product is " << num1 * num2 << "\n";
  } else if (operation == "/") {
    std::cout << "The quotient is " << num1 / num2 << "\n";
  }
}