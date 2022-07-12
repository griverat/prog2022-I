/*
 * Created on Mon Jul 11 23:39:41 2022

 * @author: Gerardo A. Rivera Tello
 * @handle: DangoMelon
 */

#include <iostream>

int main()
{
    int daysToMonth[12] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
    int day, month, year, dayNumber;
    std::string zodiac;

    std::cout << "Ingrese el dia: ";
    std::cin >> day;
    if (day < 1 || day > 31)
    {
        std::cout << "El dia ingresado no es valido" << std::endl;
        return 0;
    }

    std::cout << "Ingrese el mes: ";
    if (std::cin >> month)
    {
        if (month < 1 || month > 12)
        {
            std::cout << "El mes ingresado no es valido" << std::endl;
            return 0;
        }
    }
    else
    {
        std::cout << "El mes ingresado no es valido" << std::endl;
        return 0;
    }

    std::cout << "Ingrese el anio: ";
    if (std::cin >> year)
    {
        if (year < 0)
        {
            std::cout << "El anio ingresado no es valido" << std::endl;
            return 0;
        }
    }
    else
    {
        std::cout << "El anio ingresado no es valido" << std::endl;
        return 0;
    }

    dayNumber = daysToMonth[month - 1] + day;

    switch (dayNumber)
    {
    case 80 ... 109:
        zodiac = "Aries";
        break;
    case 110 ... 140:
        zodiac = "Tauro";
        break;
    case 141 ... 171:
        zodiac = "Geminis";
        break;
    case 172 ... 203:
        zodiac = "Cancer";
        break;
    case 204 ... 234:
        zodiac = "Leo";
        break;
    case 235 ... 265:
        zodiac = "Virgo";
        break;
    case 266 ... 295:
        zodiac = "Libra";
        break;
    case 296 ... 325:
        zodiac = "Escorpio";
        break;
    case 326 ... 355:
        zodiac = "Sagitario";
        break;
    case 356 ... 365:
    case 1 ... 19:
        zodiac = "Capricornio";
        break;
    case 20 ... 49:
        zodiac = "Acuario";
        break;
    case 50 ... 79:
        zodiac = "Piscis";
        break;
    }

    std::cout << "El zodiaco del dia " << day << "-" << month << "-" << year << " es " << zodiac << std::endl;
    return 0;
}
