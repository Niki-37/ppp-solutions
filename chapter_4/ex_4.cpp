#include <iostream>

int main() {
  int low{1};
  int high{100};
  int mid{0};

  char ch{};

  while (low <= high) {
    mid = (high + low) / 2;
    std::cout << "Is your number " << mid
              << "? (enter 'r' for right, 'h' for higher, 'l' for lower): ";

    std::cin >> ch;

    if (ch == 'r') {
      break;
      std::cout << "Your number is " << mid << "\n";
    } else if (ch == 'h') {
      low = mid++;
    } else if (ch == 'l') {
      high = mid--;
    }
  }
}