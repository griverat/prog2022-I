/*
 * Created on Tue Aug 23 15:09:34 2022

 * @author: Gerardo A. Rivera Tello
 * @handle: DangoMelon
 */

#include <iostream>
#include <iomanip>

#define N 1000

void rotate_array(int array[][N], int n, int rot, int depth, int output[][N]);
void populate_array(int array[][N], int n);
void print_array(int arr[][N], int n);

int main()
{
    int n, rot, depth;
    int continue_program = 1;
    int array[N][N], output[N][N];

    std::cout << "Ingrese el tamaño de la matriz: ";
    std::cin >> n;
    populate_array(array, n);

    std::cout << "La matriz generada es: " << std::endl;
    print_array(array, n);

    std::cout << std::endl;

    while (continue_program != 0)
    {
        std::cout << "Ingrese el angulo de rotación (multiplo de 90°): ";
        std::cin >> rot;

        if (rot % 90 != 0)
        {
            std::cout << "El angulo de rotación debe ser multiplo de 90°" << std::endl
                      << std::endl;
            continue;
        }

        std::cout << "Ingrese la profundidad sobre la que se aplicará la rotación: ";
        std::cin >> depth;

        if (depth >= n / 2)
        {
            std::cout << "La profundidad de rotación es mayor o igual a la mitad de la matriz, no se puede rotar" << std::endl
                      << std::endl;
            continue;
        }

        // Rotamos el arreglo en 90 grados n veces, dependiendo del
        // multiplo ingresado. La funcion incorpora el bucle para
        // rotar n veces por 90 grados.
        rotate_array(array, n, rot, depth, output);
        rotate_array(output, n, abs(360 - rot), depth + 1, output);

        std::cout << std::endl
                  << "Matriz rotada " << rot << "°" << std::endl;
        print_array(output, n);
        std::cout << std::endl;

        std::cout << "Desea continuar? (1 = si, 0 = no): ";
        std::cin >> continue_program;
    }
}

void rotate_array(int array[][N], int n, int rot, int depth, int output[][N])
{
    // Copiamos el arreglo original en el arreglo de salida
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            output[i][j] = array[i][j];
        }
    }

    for (int nrot = 0; nrot < rot / 90; nrot++)
    {
        // Hacemos la transpuesta de la matriz.
        // Esto va a invertir las filas por columnas
        // lo que equivale a una rotación de 90° hacia
        // la izquierda.
        for (int i = depth; i < n - depth; i++)
        {
            for (int j = i; j < n - depth; j++)
            {
                int temp = output[i][j];
                output[i][j] = output[j][i];
                output[j][i] = temp;
            }
        }

        // Para que la rotacion quede hacia la derecha
        // solo basta con invertir el orden de los
        // elementos en cada fila.
        for (int i = depth; i < n - depth; i++)
        {
            for (int j = depth; j < n / 2; j++)
            {
                int temp = output[i][j];
                output[i][j] = output[i][n - j - 1];
                output[i][n - j - 1] = temp;
            }
        }

        // el resultado sera un arreglo rotado hacia
        // la derecha, haciendo uso del concepto de
        // transpuesta.
    }
}

// funcion para llenar el arreglo
void populate_array(int arr[][N], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = n * i + j;
        }
    }
}

// funcion para imprimir el arreglo
void print_array(int arr[][N], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << std::setw(5);
            std::cout << arr[i][j];
        }
        std::cout << std::endl;
    }
}
