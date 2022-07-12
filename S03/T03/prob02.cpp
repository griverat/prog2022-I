/*
 * Created on Mon Jul 11 21:49:55 2022

 * @author: Gerardo A. Rivera Tello
 * @handle: DangoMelon
 */

#include <iostream>

int main()
{
    float payment, perc, inc_payment;
    int int_payment;

    std::cout << "Ingrese el salario del trabajador: ";
    std::cin >> payment;

    int_payment = static_cast<int>(payment);

    switch (int_payment)
    {
    case 0 ... 8999:
        perc = 0.2;
        break;
    case 9000 ... 14999:
        perc = 0.1;
        break;
    case 15000 ... 19999:
        perc = 0.05;
        break;
    default:
        perc = 0.03;
        break;
    }

    inc_payment = payment * (1 + perc);

    std::cout << "El salario del trabajador con incremento es: " << inc_payment << std::endl;
    std::cout << "El porcentaje de incremento es: " << perc * 100 << "%" << std::endl;

    return 0;
}