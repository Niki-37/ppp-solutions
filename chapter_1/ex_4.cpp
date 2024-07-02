#include <iostream>

int main() {
  int val1{0}, val2{0};
  std::cout << "input your numbers: ";
  std::cin >> val1 >> val2;

  if (val1 > val2) {
    std::cout << val1 << " is larger than " << val2 << "\n";
    std::cout << val2 << " is smaller than " << val1 << "\n";
    std::cout << "The difference is " << val1 - val2 << "\n";
    std::cout << "The ratio is " << val2 << "/" << val1 << "\n";
  } else if (val2 > val1) {
    std::cout << val2 << " is larger than " << val1 << "\n";
    ;
    std::cout << val2 << " is smaller than " << val1 << "\n";
    ;
    std::cout << "The difference is " << val2 - val1 << "\n";
    ;
    std::cout << "The ratio is" << val1 << "/" << val2 << "\n";
    ;
  }

  std::cout << "The sum is " << val1 + val2 << "\n";
  ;
  std::cout << "The product is " << val1 * val2 << "\n";
  ;
}