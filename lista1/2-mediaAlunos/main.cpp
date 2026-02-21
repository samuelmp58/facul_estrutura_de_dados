#include <iostream>
#define TOTALALUNOS 20

int main() {
  float notasAlunos[TOTALALUNOS];
  float totalNotas{0.0f}, mediaNotas{0.0f};
  int AlunosAcimaMedia{0};

  for (auto i{0}; i < TOTALALUNOS; ++i) {
    std::cout << "Nota do aluno " << i << ": ";
    std::cin >> notasAlunos[i];
    totalNotas += notasAlunos[i];
  }

  mediaNotas = totalNotas / TOTALALUNOS;

  for (auto i{0}; i < TOTALALUNOS; ++i) {
    if (notasAlunos[i] > mediaNotas)
      AlunosAcimaMedia++;
  }

  std::cout << "Media: " << mediaNotas
            << "\nAlunos Acima da media: " << AlunosAcimaMedia << std::endl;
}
