#include <iostream>

constexpr int MAX = 500;

int main() {
  for (auto i = 5; i <= MAX; i += 5) {
    std::cout << i << (i == MAX ? "." : ", ");
  }

  return 0;
}
