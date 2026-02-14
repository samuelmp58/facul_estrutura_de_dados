#include <iostream>
#include <vector>
#include <limits>
#include <string>

struct RegraCategoria {
    int idadeLimite;
    std::string nome;
};

int main() {
    int idade{0};

    std::vector<RegraCategoria> tabela = {
        {4,  "Muito jovem para competir"},
        {7,  "Infantil A"},
        {10, "Infantil B"},
        {13, "Juvenil A"},
        {17, "Juvenil B"}
    };
    std::string categoriaSenior = "Senior";

    std::cout << "Digite a idade: ";
    while(!(std::cin >> idade)){
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalido. Digite a idade: ";
    }

    std::string resultado = categoriaSenior; 
    for (const auto& regra : tabela) {
        if (idade <= regra.idadeLimite) {
            resultado = regra.nome;
            break;
        }
    }

    std::cout << "Categoria: " << resultado << std::endl;

    return 0;
}
