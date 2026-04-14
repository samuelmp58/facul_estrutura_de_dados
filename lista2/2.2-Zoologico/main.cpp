#include <iostream>
#include <string>
#include <iomanip>

struct Animal {
    std::string nome;
    std::string especie;
    int idade;
    float peso;
};

typedef Animal ListaAnimais[10];

int main() {
    ListaAnimais zoo;

    std::cout << "--- Cadastro de Animais do Zoologico ---" << std::endl;

    for (int i = 0; i < 10; i++) {
        std::cout << "\nRegistro do Animal #" << i + 1 << ":" << std::endl;
        
        std::cout << "Nome: ";
        std::getline(std::cin >> std::ws, zoo[i].nome);

        std::cout << "Especie: ";
        std::getline(std::cin >> std::ws, zoo[i].especie);

        std::cout << "Idade: ";
        std::cin >> zoo[i].idade;

        std::cout << "Peso (kg): ";
        std::cin >> zoo[i].peso;
    }

    std::cout << "\n" << std::setw(15) << std::left << "NOME" 
              << std::setw(15) << "ESPECIE" 
              << std::setw(10) << "IDADE" 
              << "PESO (kg)" << std::endl;
    std::cout << "--------------------------------------------------------" << std::endl;

    for (int i = 0; i < 10; i++) {
        std::cout << std::setw(15) << std::left << zoo[i].nome 
                  << std::setw(15) << zoo[i].especie 
                  << std::setw(10) << zoo[i].idade 
                  << std::fixed << std::setprecision(2) << zoo[i].peso << std::endl;
    }

    return 0;
}
