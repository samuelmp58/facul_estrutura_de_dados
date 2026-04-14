#include <iostream>
#include <string>

#define QNT 10

int main() {
    std::string nomes[QNT];

    for (int i = 0; i < QNT; ++i) {
        std::cout << "Nome " << i + 1 << ": ";
        std::cin >> nomes[i];
    }

    auto procurarPessoa = [&nomes](std::string target) -> void {
        bool encontrado = false;
        
        for (int i = 0; i < QNT; ++i) {
            if (nomes[i] == target) {
                encontrado = true;
                break;
            }
        }

        if (encontrado) {
            std::cout << "ACHEI\n";
        } else {
            std::cout << "NÃO ACHEI\n";
        }
    };

    std::string pessoa;
    std::cout << "\nDigite o nome de uma pessoa para ver se existe no array: ";
    std::cin >> pessoa;

    procurarPessoa(pessoa);

    return 0;
}
