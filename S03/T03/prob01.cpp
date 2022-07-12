/*
 * Created on Mon Jul 11 21:49:03 2022

 * @author: Gerardo A. Rivera Tello
 * @handle: DangoMelon
 */

#include <iostream>

int main()
{
    int number;
    std::cout << "Ingrese un numero entero de 2 cifras: ";
    std::cin >> number;

    if (number < 10 || number > 99)
    {
        std::cout << "El numero ingresado no es de 2 cifras";
    }
    else
    {

        int first_digit = number / 10;
        int second_digit = number % 10;

        switch (first_digit)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 9:
            std::cout << "El primer digito es primo" << std::endl;
            break;
        default:
            std::cout << "El primer digito no es primo" << std::endl;
            break;
        }

        switch (second_digit)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 9:
            std::cout << "El segundo digito es primo" << std::endl;
            break;
        default:
            std::cout << "El segundo digito no es primo" << std::endl;
            break;
        }
    }

    return 0;
}
