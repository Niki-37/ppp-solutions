#include <iostream>

int main() {
  std::string input;
  std::cout << "Enter the number: ";
  std::cin >> input;

  if (input.compare("zero") == 0) {
    std::cout << 0 << "\n";
  } else if (input.compare("one") == 0) {
    std::cout << 1 << "\n";
  } else if (input.compare("two") == 0) {
    std::cout << 2 << "\n";
  } else if (input.compare("three") == 0) {
    std::cout << 3 << "\n";
  } else if (input.compare("four") == 0) {
    std::cout << 4 << "\n";
  } else {
    std::cout << "not a number I know" << "\n";
  }
}