#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

struct Estudante {
    std::string nome;
    float notaFinal;
    std::string status;
};

int main() {
    std::vector<Estudante> turma;
    Estudante temp;
    char continuar;

    do {
        std::cout << "\n--- Registro de Desempenho ---" << std::endl;
        
        std::cout << "Nome do estudante: ";
        std::getline(std::cin >> std::ws, temp.nome);

        std::cout << "Nota final: ";
        std::cin >> temp.notaFinal;

        if (temp.notaFinal >= 6.0) {
            temp.status = "Aprovado";
        } else {
            temp.status = "Reprovado";
        }

        turma.push_back(temp);

        std::cout << "Deseja registrar outro estudante? (s/n): ";
        std::cin >> continuar;

    } while (continuar == 's' || continuar == 'S');

    std::cout << "\n" << std::setw(20) << std::left << "ESTUDANTE" 
              << std::setw(10) << "NOTA" 
              << "STATUS" << std::endl;
    std::cout << "------------------------------------------" << std::endl;

    for (const auto& aluno : turma) {
        std::cout << std::setw(20) << std::left << aluno.nome 
                  << std::setw(10) << std::fixed << std::setprecision(1) << aluno.notaFinal 
                  << aluno.status << std::endl;
    }

    return 0;
}
