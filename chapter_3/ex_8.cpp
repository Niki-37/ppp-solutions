#include <iostream>

int main() {
  int number{0};
  std::cout << "Enter the number: " << "\n";
  std::cin >> number;

  std::string odd_or_even;
  if (number % 2 != 0) {
    odd_or_even = "odd";
  } else {
    odd_or_even = "even";
  }

  std::cout << "The value " << number << " is an " << odd_or_even
            << " number\n";
}