#include <iostream>

int main() {
    int numero;
    int anterior = 0;
    bool ordenado = true;

    std::cout << "Ingrese un numero entero: " << std::endl;
    while (std::cin >> numero && numero != 0) {
        if (numero < anterior) {
            ordenado = false;
        }
        anterior = numero;
    }
    if (ordenado) {
        std::cout << "ORDENADO" << std::endl;
    } else {
        std::cout << "NO ORDENADO" << std::endl;
    }
    return 0;
}