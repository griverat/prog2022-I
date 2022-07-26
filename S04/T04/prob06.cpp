/*
 * Created on Tue Jul 26 11:56:31 2022

 * @author: Gerardo A. Rivera Tello
 * @handle: DangoMelon
 */

#include <iostream>

int main()
{
    int n;
    bool isprime = true;

    std::cout << "Ingrese un numero menor a 200: ";
    std::cin >> n;

    if (n >= 200)
    {
        std::cout << "El numero ingresado es mayor o igual a 200" << std::endl;
        return 0;
    }

    for (int i = 2; i < (n / 2) + 1; i++)
    {
        if (n % i == 0)
        {
            isprime = false;
            break;
        }
    }

    if (isprime && n != 0 && n != 1)
    {
        std::cout << "✅ El numero " << n << " es primo" << std::endl;
    }
    else
    {
        std::cout << "❌ El numero " << n << " no es primo" << std::endl;
    }
}