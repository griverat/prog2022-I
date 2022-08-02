/*
 * Created on Tue Jul 26 17:02:01 2022

 * @author: Gerardo A. Rivera Tello
 * @handle: DangoMelon
 */

#include <iostream>

bool is_perfect(int n);
bool is_amicable(int x, int y);
bool get_function(int n);

void menu(int &n);
void text_helper(bool cond, std::string &emoji, std::string &extra);

int main()
{
    int opt;
    bool keep_going = true;

    do
    {
        menu(opt);
        keep_going = get_function(opt);
    } while (keep_going);
    std::cout << std::endl
              << "🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥" << std::endl;
    std::cout << "🟥 Ejecucion del programa terminada 🟥" << std::endl;
    std::cout << "🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥" << std::endl;
}

bool get_function(int n)
{
    int x, y, sel;
    bool ans, keep_going = true;
    std::string extra, emoji;
    switch (n)
    {
    case 1:
        std::cout << "🟧🟧🟧🟧🟧 1️⃣\t Son Amigos 🟧🟧🟧🟧🟧" << std::endl;
        std::cout << "🟧 Ingrese los dos numeros a verificar: " << std::endl;
        std::cout << "🟧 x: ";
        std::cin >> x;
        std::cout << "🟧 y: ";
        std::cin >> y;

        text_helper(is_amicable(x, y), emoji, extra);

        std::cout << emoji << "Los numeros " << x << " y " << y << extra << " son amigos" << std::endl;
        break;
    case 2:
        std::cout << "🟨🟨🟨🟨🟨 2️⃣\t Es Perfecto 🟨🟨🟨🟨🟨" << std::endl;
        std::cout << "🟨 Ingrese el numero a verificar: " << std::endl;
        std::cout << "🟨 x: ";
        std::cin >> x;

        text_helper(is_perfect(x), emoji, extra);

        std::cout << emoji << "El numero " << x << extra << " es perfecto: " << std::endl;
        break;
    default:
        keep_going = false;
        break;
    }

    if (keep_going)
    {
        std::cout << std::endl
                  << "Desea continuar? (1. Si / 2. No)" << std::endl;
        std::cin >> sel;
        std::cout << std::endl;
        keep_going = sel == 1 ? true : false;
    }
    return keep_going;
}

void text_helper(bool cond, std::string &emoji, std::string &extra)
{
    if (!cond)
    {
        emoji = "❌ ";
        extra = " no";
    }
    else
    {
        emoji = "✅ ";
        extra = "";
    }
}

void menu(int &n)
{

    std::cout << "⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜ MENU ⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜" << std::endl;
    std::cout << "⬜ Ingrese una de las siguientes opciones: \t\t⬜" << std::endl;

    std::cout << "🟧  1️⃣\t Son Amigos \t\t\t\t\t🟧" << std::endl;
    std::cout << "🟨  2️⃣\t Es Perfecto \t\t\t\t\t🟨" << std::endl;

    std::cout << "🟥 Ingrese un numero distinto a las opciones para salir\t🟥" << std::endl;
    std::cout << "⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜" << std::endl;

    std::cout << "Ingrese una opción: ";
    std::cin >> n;
    std::cout << std::endl;
}

bool is_perfect(int n)
{
    return is_amicable(n, n);
}

bool is_amicable(int x, int y)
{
    int divx = 0, divy = 0;

    for (int i = 1; i <= x / 2; i++)
    {
        if (x % i == 0)
            divx = divx + i;
    }

    for (int i = 1; i <= y / 2; i++)
    {
        if (y % i == 0)
            divy = divy + i;
    }

    if (divx == y && divy == x)
        return true;
    return false;
}