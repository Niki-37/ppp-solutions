#include <iostream>

int main() {
  double miles{0};
  std::cout << "Input miles: ";
  std::cin >> miles;

  double result{miles * 1.609};

  std::cout << miles << " mile(s) is " << result << " km" << std::endl;
}