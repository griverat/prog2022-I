/*
 * Created on Mon Jul 11 22:30:12 2022

 * @author: Gerardo A. Rivera Tello
 * @handle: DangoMelon
 */

#include <iostream>
#include <cmath>

int main()
{
    int opcion;
    float numero1, numero2;
    float resultado;
    char symbol = '#';  
    int num = 6;
    std::cout << std::string(num, symbol) << " Calculadora " << std::string(num, symbol) << std::endl;
    std::cout << symbol << " 1. Suma" << std::endl;
    std::cout << symbol << " 2. Resta" << std::endl;
    std::cout << symbol << " 3. Multiplicacion" << std::endl;
    std::cout << symbol << " 4. Division" << std::endl;
    std::cout << symbol << " 5. Potenciacion" << std::endl;
    std::cout << symbol << " 6. Salir" << std::endl;

    std::cout << "Ingrese una opcion: ";
    std::cin >> opcion;
    std::cout << "Ingrese el primer numero: ";
    std::cin >> numero1;
    std::cout << "Ingrese el segundo numero: ";
    std::cin >> numero2;

    switch (opcion)
    {
    case 1:
        resultado = numero1 + numero2;
        std::cout << "El resultado es: " << resultado << std::endl;
        break;
    case 2:
        resultado = numero1 - numero2;
        std::cout << "El resultado es: " << resultado << std::endl;
        break;
    case 3:
        resultado = numero1 * numero2;
        std::cout << "El resultado es: " << resultado << std::endl;
        break;
    case 4:
        resultado = numero1 / numero2;
        std::cout << "El resultado es: " << resultado << std::endl;
        break;
    case 5:
        resultado = pow(numero1, numero2);
        std::cout << "El resultado es: " << resultado << std::endl;
        break;
    default:
        std::cout << "Opcion invalida" << std::endl;
        break;
    }

    return 0;
}
