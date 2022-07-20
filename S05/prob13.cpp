/*
 * Created on Wed Jul 20 15:23:24 2022

 * @author: Gerardo A. Rivera Tello
 * @handle: DangoMelon
 */

#include <iostream>

int main()
{
    int num;
    unsigned long long int factorial = 1;
    do
    {
        std::cout << "Ingrese un numero: ";
        std::cin >> num;
    } while (num < 0);

    for (int i = 1; i <= num; i++)
    {
        factorial *= i;
    }
    std::cout << "El factorial de " << num << " es: " << factorial << std::endl;
}