#include <iostream>
#include <limits>

int main() {
  int n{0};

  do {
    if (!(std::cin >> n)) {
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
  } while (n < 1 || n > 10);

  return 0;
}
