#include <iostream>

int main() {
  double val1, val2, result{0};
  char ch{};

  std::cout << "Enter 2 numbers and operation (+, -, *, /)\n";
  std::cin >> val1 >> val2 >> ch;

  switch (ch) {
    case '+':
      result = val1 + val2;
      std::cout << "The sum of " << val1 << " and " << val2 << " is " << result
                << "\n";
      break;
    case '-':
      result = val1 - val2;
      std::cout << "The difference of " << val1 << " and " << val2 << " is "
                << result << "\n";
      break;
    case '*':
      result = val1 * val2;
      std::cout << "The product of " << val1 << " and " << val2 << " is "
                << result << "\n";
      break;
    case '/':
      result = val1 / val2;
      std::cout << "The quotient of " << val1 << " and " << val2 << " is "
                << result << "\n";
      break;
    default:
      std::cout << "Incorrect input, try again" << "\n";
      break;
  }
}