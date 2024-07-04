#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  std::vector<double> temps;

  for (double temp; std::cin >> temp;) {
    temps.push_back(temp);
  }

  std::sort(temps.begin(), temps.end());

  if (temps.size() % 2 == 0) {
    std::cout << "Median temperature: "
              << (temps[temps.size() / 2] + temps[temps.size() / 2 - 1]) / 2.0
              << '\n';
  } else {
    std::cout << "Median temperature: " << temps[temps.size() / 2] << '\n';
  }
}