/*
 * Created on Tue Jul 19 15:50:43 2022

 * @author: Gerardo A. Rivera Tello
 * @handle: DangoMelon
 */

#include <iostream>

int main(){
    int n;

    std::cout << "Ingrese un numero entero positivo o cero: ";
    std::cin >> n;

    if (n%1 != 0)
    {
        std::cout << "El numero ingresado no es entero" << std::endl;
        return 1;
    };
    if (n < 0)
    {
        std::cout << "El numero ingresado es negativo" << std::endl;
        return 1;
    };

    for (int i = 0; i < n+1; i++)
    {
        std::cout << i << std::endl;
    }

}