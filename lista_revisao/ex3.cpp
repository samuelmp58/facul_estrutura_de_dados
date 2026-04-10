#include <iostream>
#include <vector>
#include <iomanip>

int main() {
    int n{0};
    do {
        std::cout << "Digite a quantidade de números (N >= 10): ";
        std::cin >> n;
    } while (n < 10);

    int par{0}, impar{0}, positivos{0}, negativos{0}, zeros{0};
    int mulTres{0}, mulCinco{0}, mulAmbos{0}, maior{0}, menor{0};
    double somaPar{0}, somaImpar{0};


    auto verificar = [&](int n_val) {
        if (n_val % 2 == 0) {
            par++;
            somaPar += n_val;
        } else {
            impar++;
            somaImpar += n_val;
        }

        // 2. Positivo, Negativo ou Zero
        if (n_val == 0) {
            zeros++;
        } else if (n_val > 0) {
            positivos++;
        } else {
            negativos++;
        }

        // 3. Múltiplos
        if (n_val % 3 == 0 && n_val % 5 == 0) {
            mulAmbos++;
        } else if (n_val % 3 == 0) {
            mulTres++;
        } else if (n_val % 5 == 0) {
            mulCinco++;
        }

        // 4. Maior e Menor
        if (n_val > maior) maior = n_val;
        if (n_val < menor) menor = n_val;
    };

    for (int i{0}; i < n; ++i) {
        int x;
        std::cout << "Número " << i + 1 << ": ";
        std::cin >> x;

        if (i == 0) {
            maior = x;
            menor = x;
        }
        verificar(x);
    }

    std::cout << "\n--- RELATÓRIO FINAL ---\n";
    std::cout << "Pares: " << par << " | Ímpares: " << impar << "\n";
    std::cout << "Positivos: " << positivos << " | Negativos: " << negativos << " | Zeros: " << zeros << "\n";
    std::cout << "Múltiplos de 3: " << mulTres << "\n";
    std::cout << "Múltiplos de 5: " << mulCinco << "\n";
    std::cout << "Múltiplos de ambos (3 e 5): " << mulAmbos << "\n";
    std::cout << "Maior: " << maior << " | Menor: " << menor << "\n";

    if (par > 0) 
        std::cout << "Média dos pares: " << (somaPar / par) << "\n";
    else 
        std::cout << "Média dos pares: 0 (nenhum par digitado)\n";

    if (impar > 0) 
        std::cout << "Média dos ímpares: " << (somaImpar / impar) << "\n";
    else 
        std::cout << "Média dos ímpares: 0 (nenhum ímpar digitado)\n";

    return 0;
}
