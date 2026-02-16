#include <iostream>

int main() {
  int totalAlunos{0};
  float somaNotas{0.0f};
  while (true) {
    float nota{0};
    std::cout << "Aluno " << totalAlunos + 1 << "\nnota: ";
    std::cin >> nota;

    if (nota > 10.0f) {
      std::cout << "\nNota Invalida\n";
      continue;
    };
    if (nota < 0.0f)
      break;

    somaNotas += nota;
    totalAlunos++;
  }

  if (totalAlunos > 0)
    std::cout << "Media da turma: " << somaNotas / totalAlunos;

  return 0;
}
