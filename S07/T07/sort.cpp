/*
 * Created on Sat Aug 06 00:51:43 2022

 * @author: Gerardo A. Rivera Tello
 * @handle: DangoMelon
 */

#include <iostream>

void bubble_sort(int arr[], int size, bool ascending);
void selection_sort(int arr[], int size, bool ascending);
void print_array(int arr[], int size);
void menu(int &algorithm, bool &ascending);

int main()
{
    int amount, algorithm;
    bool ascending;

    menu(algorithm, ascending);

    auto algo = algorithm == 1 ? bubble_sort : selection_sort;

    std::cout << "Ingrese la cantidad de elementos del arreglo: ";
    std::cin >> amount;

    int arr[amount];
    for (int i = 0; i < amount; i++)
    {
        std::cout << "Ingrese el elemento " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    std::cout << "▶️  El arreglo ingresado es: ";
    print_array(arr, amount);
    std::cout << std::endl;

    std::cout << std::endl
              << "⌛ Comenzando el ordenamiento  ⌛" << std::endl;

    algo(arr, amount, ascending);

    std::cout << std::endl
              << "✅ El arreglo ordenado es: ";
    print_array(arr, amount);
    std::cout << std::endl;
}

void menu(int &algorithm, bool &ascending)
{
    int order_choice;
    std::cout << "▶️  Seleccione el algoritmo de ordenamiento: " << std::endl;
    std::cout << "1. Bubble Sort (default)" << std::endl;
    std::cout << "2. Selection Sort" << std::endl;
    std::cout << "Opcion: ";
    std::cin >> algorithm;
    std::cout << std::endl;

    std::cout << "▶️  Seleccione la forma de ordenamiento: " << std::endl;
    std::cout << "1. Ascendente (default)" << std::endl;
    std::cout << "2. Descendente" << std::endl;
    std::cout << "Opcion: ";
    std::cin >> order_choice;
    std::cout << std::endl;

    ascending = order_choice == 1 ? true : false;
}

void print_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void bubble_sort(int arr[], int size, bool ascending)
{
    int temp, counter = 1;
    bool changed = true;

    std::cout << "Original   : ";
    print_array(arr, size);
    std::cout << std::endl;

    for (int i = 1; i <= size; i++)
    {
        if (!changed)
        {
            std::cout << "No se realizaron cambios en el paso " << i - 1 << std::endl;
            break;
        }
        changed = false;

        std::cout << " ** Paso " << i << " **" << std::endl;

        for (int j = 0; j < size - i; j++)
        {
            if (ascending ? arr[j] > arr[j + 1] : arr[j] < arr[j + 1])
            {
                changed = true;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                std::cout << "Iteracion " << counter << ": ";
                print_array(arr, size);
            }
            counter++;
        }
    }
}

void selection_sort(int arr[], int size, bool ascending)
{
    int temp, idx, counter = 1;
    bool changed = true;

    std::cout << "Original   : ";
    print_array(arr, size);
    std::cout << std::endl;

    for (int i = 0; i < size - 1; i++)
    {

        std::cout << " ** Paso " << i + 1 << " **" << std::endl;
        idx = i;

        for (int j = i + 1; j < size; j++)
        {
            if (ascending ? arr[idx] > arr[j] : arr[i] < arr[j])
            {
                idx = j;
            }
            counter++;
        }
        temp = arr[i];
        arr[i] = arr[idx];
        arr[idx] = temp;
        std::cout << "Iteracion " << counter << ": ";
        print_array(arr, size);
    }
}