#include <iostream>
#define QNT 10
int main() {
  int vetorA[QNT]{0}, vetorM[QNT]{0};

  for (auto i = 0; i < QNT; ++i) {
    std::cout << "VetorA[" << i << "]: ";
    std::cin >> vetorA[i];
  }

  int x{0};
  std::cout << "Valor de x: ";
  std::cin >> x;

  for (auto i = 0; i < QNT; ++i) {
    vetorM[i] = vetorA[i] * x;
  }

  for (int x : vetorM) {
    std::cout << x << std::endl;
  }

  return 0;
}
