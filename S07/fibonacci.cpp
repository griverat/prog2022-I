/*
 * Created on Tue Aug 02 15:31:50 2022

 * @author: Gerardo A. Rivera Tello
 * @handle: DangoMelon
 */

#include <iostream>

int fibonacci_iterativo(int n);
int fibonacci_recursivo(int n);

int main()
{
    int n;
    std::cout << "Ingrese la posición del termino de la sucesion de Fibonacci: ";
    std::cin >> n;
    std::cout << "El termino " << n << " de la sucesion de Fibonacci iterativa es: " << fibonacci_iterativo(n) << std::endl;
    std::cout << "El termino " << n << " de la sucesion de Fibonacci recursiva es: " << fibonacci_recursivo(n) << std::endl;
}

int fibonacci_iterativo(int n)
{
    int curr = 0, prev = 1, temp;

    for (int i = 0; i < n; i++)
    {
        temp = curr;
        curr += prev;
        prev = temp;
    }
    return curr;
}

int fibonacci_recursivo(int n)
{
    if (n < 3)
        return 1;
    else
        return fibonacci_recursivo(n - 1) + fibonacci_recursivo(n - 2);
}