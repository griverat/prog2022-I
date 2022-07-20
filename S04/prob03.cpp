/*
 * Created on Tue Jul 19 16:07:04 2022

 * @author: Gerardo A. Rivera Tello
 * @handle: DangoMelon
 */

#include <iostream>

int main()
{
    int alumnos, aprobado = 0, desaprobado = 0;
    int n = 0;

    float nota;

    std::cout << "Ingrese la cantidad de alumnos: ";
    std::cin >> alumnos;

    while (n != alumnos)
    {
        std::cout << "Ingrese la nota del alumno: ";
        std::cin >> nota;

        if (nota >= 0 && nota <= 20)
        {
            n++;
            if (nota > 11)
            {
                aprobado++;
            }
            else
            {
                desaprobado++;
            }
        }
        else
            std::cout << "La nota ingresada no es valida" << std::endl;
    }

    std::cout << "La cantidad de alumnos aprobados es: " << aprobado << std::endl;
    std::cout << "La cantidad de alumnos desaprobados es: " << desaprobado << std::endl;
}