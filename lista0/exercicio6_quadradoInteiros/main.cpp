#include <iostream>

constexpr int MAX = 20;

int main() {
  for (auto i = 1; i <= MAX; i++) {
    std::cout << i << "^2 = " << i * i << std::endl;
  }

  return 0;
}
