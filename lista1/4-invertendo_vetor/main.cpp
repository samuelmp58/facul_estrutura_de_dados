#include <iostream>
#define QNT 20

int main() {
  int vetor[QNT];

  auto mostrarVetorInvertendo = [](int *arr) -> void {
    for (auto i{QNT - 1}; i >= 0; --i) {
      std::cout << arr[i] << (i == 0 ? "." : ", ");
    }
  };

  for (auto i{0}; i < QNT; ++i) {
    std::cout << "Vetor[" << i << "]: ";
    std::cin >> vetor[i];
  }

  mostrarVetorInvertendo(vetor);

  return 0;
}
