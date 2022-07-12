/*
 * Created on Mon Jul 11 23:20:45 2022

 * @author: Gerardo A. Rivera Tello
 * @handle: DangoMelon
 */

#include <iostream>

int main()
{
    int gender, age, fine;
    std::string gender_char;

    std::cout << "Ingrese la opcion del genero que corresponda: " << std::endl;
    std::cout << "1. Masculino" << std::endl;
    std::cout << "2. Femenino" << std::endl;
    std::cout << "Su eleccion: ";
    std::cin >> gender;

    std::cout << "Ingrese la edad: ";
    std::cin >> age;

    switch (gender)
    {
    case 1:
        gender_char = "masculino";
        switch (age)
        {
        case 0 ... 25:
            fine = 1000;
            break;
        default:
            fine = 700;
            break;
        }
        break;
    default:
        gender_char = "femenino";
        switch (age)
        {
        case 0 ... 21:
            fine = 800;
            break;
        default:
            fine = 500;
            break;
        };
        break;
    }

    std::cout << "El genero es " << gender_char << std::endl;
    std::cout << "El valor de la multa es: " << fine << std::endl;

    return 0;
}
