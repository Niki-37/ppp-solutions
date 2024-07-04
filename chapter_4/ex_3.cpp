#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  std::vector<double> distances;
  double sum{0};

  for (double distance; std::cin >> distance;) {
    distances.push_back(distance);
  }

  double smallest{distances[0]};
  double biggest{distances[0]};

  std::sort(distances.begin(), distances.end());

  for (auto& i : distances) {
    if (smallest > i) {
      smallest = i;
    }
    if (biggest < i) {
      biggest = i;
    }
    sum += i;
  }

  if (distances.size() % 2 == 0) {
    std::cout << "Median of distances is "
              << (distances[distances.size() / 2] +
                  distances[distances.size() / 2 - 1]) /
                     2.0
              << "\n";
  } else {
    std::cout << "Median of distances is " << distances[distances.size() / 2]
              << '\n';
  }

  std::cout << "The sum of all distances is " << sum << "\n";
  std::cout << "The smallest distance is " << smallest
            << "\nThe biggest distance is " << biggest << "\n";
}