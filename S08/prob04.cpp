/*
 * Created on Tue Aug 16 15:57:47 2022

 * @author: Gerardo A. Rivera Tello
 * @handle: DangoMelon
 */

#include <iostream>

int main()
{
    int size;
    std::cout << "Ingrese el tamaño del vector: ";
    std::cin >> size;

    std::cout << "Ingrese los numeros de manera ascendente" << std::endl;

    int vector[size];
    for (int i = 0; i < size; i++)
    {
        std::cout << "Ingrese el elemento " << i << " del vector: ";
        std::cin >> vector[i];
    }

    int num;
    std::cout << "Ingrese el numero a buscar: ";
    std::cin >> num;

    int low = 0;
    int high = size - 1;
    int mid;

    bool found = false;

    while (low <= high && !found )
    {
        mid = (low + high) / 2;
        if (vector[mid] == num)
        {
            found = true;
        }
        else if (vector[mid] < num)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    if (found)
    {
        std::cout << "El numero " << num << " se encuentra en el vector" << std::endl;
    }
    else
    {
        std::cout << "El numero " << num << " no se encuentra en el vector" << std::endl;
    }
    return 0;
}