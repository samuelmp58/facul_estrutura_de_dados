#include <iostream>
#include <vector>

struct Aluno {
  static std::vector<Aluno> alunos;
  int id;
  float altura;
};
std::vector<Aluno> Aluno::alunos;

int main() {
  for (auto i = 0; i < 5; i++) {
    Aluno aluno;

    std::cout << "Informe o numero do aluno: ";
    std::cin >> aluno.id;
    std::cout << "Informe a altura do aluno: ";
    std::cin >> aluno.altura;

    Aluno::alunos.push_back(aluno);
  }

  if (Aluno::alunos.empty()) {
    std::cout << "Nenhum aluno cadastrado." << std::endl;
    return 1;
  }

  Aluno *maisAlto = &Aluno::alunos[0];
  Aluno *maisBaixo = &Aluno::alunos[0];

  for (auto &aluno : Aluno::alunos) {
    if (aluno.altura > maisAlto->altura)
      maisAlto = &aluno;

    if (aluno.altura < maisBaixo->altura)
      maisBaixo = &aluno;
  }

  std::cout << std::endl;
  std::cout << "O aluno mais alto e o " << maisAlto->id
            << ", altura: " << maisAlto->altura << std::endl;

  std::cout << "O aluno mais baixo e o " << maisBaixo->id
            << ", altura: " << maisBaixo->altura << std::endl;

  return 0;
}
