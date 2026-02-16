#include <iostream>

int main() {
  for (int i = 1; i <= 100; ++i) {
    std::cout << i << (i == 100 ? "." : ", ");
  }

  return 0;
}
