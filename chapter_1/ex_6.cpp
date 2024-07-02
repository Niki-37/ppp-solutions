#include <iostream>

int main() {
  int val1, val2, val3{0};
  std::cout << "Enter 3 digit values: " << "\n";
  std::cin >> val1 >> val2 >> val3;

  if (val1 > val2 && val1 > val3) {
    if (val2 > val3) {
      std::cout << val3 << ", " << val2 << ", " << val1 << "\n";
    } else if (val3 >= val2) {
      std::cout << val2 << ", " << val3 << ", " << val1 << "\n";
    }
  }

  if (val2 > val1 && val2 > val3) {
    if (val1 > val3) {
      std::cout << val3 << ", " << val1 << ", " << val2 << "\n";
    } else if (val3 >= val1) {
      std::cout << val1 << ", " << val3 << ", " << val2 << "\n";
    }
  }

  if (val3 > val1 && val3 > val2) {
    if (val1 > val2) {
      std::cout << val2 << ", " << val1 << ", " << val3 << "\n";
    } else if (val2 >= val1) {
      std::cout << val1 << ", " << val2 << ", " << val3 << "\n";
    }
  }
}