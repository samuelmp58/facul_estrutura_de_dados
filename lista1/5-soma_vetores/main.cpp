#include <iostream>
#include <vector>

int main() {
  int N;
  std::cout << "Digite o tamanho N: ";
  std::cin >> N;

  std::vector<int> A(N), B(N), Soma(N);

  std::cout << "Digite os " << N << " elementos do vetor A: ";
  for (int i = 0; i < N; i++) {
    std::cin >> A[i];
  }

  std::cout << "Digite os " << N << " elementos do vetor B: ";
  for (int i = 0; i < N; i++) {
    std::cin >> B[i];
  }

  for (int i = 0; i < N; i++) {
    Soma[i] = A[i] + B[i];
  }

  std::cout << "Vetor Soma: ";
  for (int i = 0; i < N; i++) {
    std::cout << Soma[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}
