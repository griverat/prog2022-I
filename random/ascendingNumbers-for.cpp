#include <iostream>

int main()
{
    int anterior = 0;
    bool ordenado = true;

    std::cout << "Ingrese un numero entero: " << std::endl;
    for (int numero = 1; numero != 0; std::cin >> numero)
    {
        if (numero < anterior)
        {
            ordenado = false;
        }
        anterior = numero;
    }
    if (ordenado)
    {
        std::cout << "ORDENADO" << std::endl;
    }
    else
    {
        std::cout << "NO ORDENADO" << std::endl;
    }
    return 0;
}