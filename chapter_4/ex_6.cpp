#include <iostream>
#include <vector>

int main() {
  std::vector<std::string> strings(10);
  std::vector<std::string> integers(10);
  strings[0] = "zero";
  strings[1] = "one";
  strings[2] = "two";
  strings[3] = "three";
  strings[4] = "four";
  strings[5] = "five";
  strings[6] = "six";
  strings[7] = "seven";
  strings[8] = "eight";
  strings[9] = "nine";

  integers[0] = "0";
  integers[1] = "1";
  integers[2] = "2";
  integers[3] = "3";
  integers[4] = "4";
  integers[5] = "5";
  integers[6] = "6";
  integers[7] = "7";
  integers[8] = "8";
  integers[9] = "9";

  std::string str = "";
  while (std::cin >> str) {
    for (int i = 0; i < strings.size(); i++) {
      if (strings[i] == str) {
        std::cout << i << "\n";
      }
      if (integers[i] == str) {
        std::cout << strings[i] << "\n";
      }
    }
  }
}
