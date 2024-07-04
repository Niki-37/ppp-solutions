#include <iostream>

int main() {
  double pennies{0};
  double nickels{0};
  double dimes{0};
  double quarters{0};
  double half_dollars{0};

  std::cout << "How many pennies do you have?" << "\n";
  std::cin >> pennies;

  std::cout << "How many nickels do you have?" << "\n";
  std::cin >> nickels;

  std::cout << "How many dimes do you have?" << "\n";
  std::cin >> dimes;

  std::cout << "How many quarters do you have?" << "\n";
  std::cin >> quarters;

  std::cout << "How many half dollars do you have?" << "\n";
  std::cin >> half_dollars;

  if (pennies > 1) {
    std::cout << "You have " << pennies << " pennies.\n";
  } else {
    std::cout << "You have " << pennies << " pennie.\n";
  }

  if (nickels > 1) {
    std::cout << "You have " << nickels << " nickels.\n";
  } else {
    std::cout << "You have " << nickels << " nickel.\n";
  }

  if (dimes > 1) {
    std::cout << "You have " << dimes << " dimes.\n";
  } else {
    std::cout << "You have " << dimes << " dime.\n";
  }

  if (quarters > 1) {
    std::cout << "You have " << quarters << " quarters.\n";
  } else {
    std::cout << "You have " << quarters << " quarter.\n";
  }

  if (half_dollars > 1) {
    std::cout << "You have " << half_dollars << " half dollars.\n";
  } else {
    std::cout << "You have " << half_dollars << " half dollar.\n";
  }

  double total =
      (pennies + nickels * 5 + dimes * 10 + quarters * 25 + half_dollars * 50) /
      100;

  std::cout << "The value of all of your coins is $" << total << ".\n";
}