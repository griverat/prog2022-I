/*
 * Created on Tue Jul 26 11:42:20 2022

 * @author: Gerardo A. Rivera Tello
 * @handle: DangoMelon
 */

#include <iostream>

int main(){
    int n, curr = 1, prev = 0;

    std::cout << "Ingrese la cantidad de terminos a imprimir de la sucesion de Fibonacci: ";
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cout << prev << " ";
        int temp = curr;
        curr += prev;
        prev = temp;
    }
    std::cout << std::endl;
}