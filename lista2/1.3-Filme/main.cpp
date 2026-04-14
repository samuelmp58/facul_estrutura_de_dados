#include <iostream>
#include <string>
#include <iomanip>
#include <vector>

struct Filme {
    std::string nome;
    float notaEnredo;
    float notaAtuacao;
    float notaEfeitos;
    float media;

    void calcularMedia() {
        media = (notaEnredo + notaAtuacao + notaEfeitos) / 3.0f;
    }
};

int main() {
    char continuar;
    
    Filme filmeAtual;

    do {
        std::cout << "\n--- Sistema de Avaliacao ---" << std::endl;
        
        std::cout << "Nome do Filme: ";
        std::getline(std::cin >> std::ws, filmeAtual.nome);

        std::cout << "Nota Enredo: ";
        std::cin >> filmeAtual.notaEnredo;

        std::cout << "Nota Atuacao: ";
        std::cin >> filmeAtual.notaAtuacao;

        std::cout << "Nota Efeitos: ";
        std::cin >> filmeAtual.notaEfeitos;

        filmeAtual.calcularMedia();

        std::cout << std::fixed << std::setprecision(2);
        std::cout << "\nFilme: " << filmeAtual.nome << "\nMedia Final: " << filmeAtual.media << std::endl;

        std::cout << "\nDeseja continuar? (s/n): ";
        std::cin >> continuar;

    } while (continuar == 's' || continuar == 'S');

    std::cout << "Programa finalizado." << std::endl;
    return 0;
}
