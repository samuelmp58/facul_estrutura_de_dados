#include <iostream>

int main() {
    auto validar = [](int A, int B, int C) -> bool {
        return (A < B + C) && (B < A + C) && (C < A + B);
    };

    int ladoA{0}, ladoB{0}, ladoC{0};
    std::cout << "Lados de um triângulo: " << std::endl;

    std::cout << "Lado A: "; std::cin >> ladoA;
    std::cout << "Lado B: "; std::cin >> ladoB;
    std::cout << "Lado C: "; std::cin >> ladoC;

    if (!validar(ladoA, ladoB, ladoC)) {
        std::cout << "Não forma um triângulo" << std::endl;
        return -1;
    }

    if (ladoA == ladoB && ladoB == ladoC) {
        std::cout << "Equilátero" << std::endl;
    } 
    else if (ladoA != ladoB && ladoA != ladoC && ladoB != ladoC) {
        std::cout << "Escaleno" << std::endl;
    } 
    else {
        std::cout << "Isósceles" << std::endl;
    }
    
    int L, a1, b2;

    if (ladoA >= ladoB && ladoA >= ladoC) {
        L = ladoA; a1 = ladoB; b2 = ladoC;
    } else if (ladoB >= ladoA && ladoB >= ladoC) {
        L = ladoB; a1 = ladoA; b2 = ladoC;
    } else {
        L = ladoC; a1 = ladoA; b2 = ladoB;
    }
    
    int L2 = L * L;
    int somaQuadrados = (a1 * a1) + (b2 * b2);
    
    if (L2 == somaQuadrados) {
        std::cout << "Tipo: Retângulo" << std::endl;
    } else if (L2 > somaQuadrados) {
        std::cout << "Tipo: Obtusângulo" << std::endl;
    } else {
        std::cout << "Tipo: Acutângulo" << std::endl;
    }

    return 0;
}
