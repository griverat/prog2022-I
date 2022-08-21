/*
 * Created on Sat Aug 20 11:42:03 2022

 * @author: Gerardo A. Rivera Tello
 * @handle: DangoMelon
 */

#include <iostream>
#include <vector>

void find_path(int origin_index, int destination_index, char cities[], std::vector<std::vector<int>> &routes);
void print_routes(std::vector<std::vector<int>> &routes, char cities[]);

int main()
{

    int ncities;
    std::cout << "Ingrese la cantidad de ciudades: ";
    std::cin >> ncities;

    char cities[ncities];
    for (int i = 0; i < ncities; i++)
    {
        cities[i] = 'A' + i;
    }

    std::vector<std::vector<int>> routes(ncities, std::vector<int>(ncities, 0));

    std::cout << "Escriba 1 si hay conexion o 0 si no hay conexion entre las ciudades" << std::endl;
    for (int i = 0; i < ncities; i++)
    {
        std::cout << std::endl
                  << "Ingrese las conexion de la ciudad " << cities[i] << std::endl;
        for (int j = 0; j < ncities; j++)
        {
            if (i == j)
            {
                std::cout << "La conexion de la ciudad " << cities[i] << " a si misma es 1" << std::endl;
                routes[i][j] = 1;
                continue;
            }
            std::cout << "Ingrese la conexion de la ciudad " << cities[i] << " a la ciudad " << cities[j] << ": ";
            std::cin >> routes[i][j];
        }
    }

    print_routes(routes, cities);

    char origin, destination;

    std::cout << "Ingrese la ciudad de origen: ";
    std::cin >> origin;

    std::cout << "Ingrese la ciudad de destino: ";
    std::cin >> destination;

    int origin_index = -1;
    int destination_index = -1;

    for (int i = 0; i < ncities; i++)
    {
        if (cities[i] == origin)
        {
            origin_index = i;
        }
        if (cities[i] == destination)
        {
            destination_index = i;
        }
    }

    if (origin_index == -1 || destination_index == -1)
    {
        std::cout << "Alguna de las ciudades no existe" << std::endl;
        return 0;
    }

    find_path(origin_index, destination_index, cities, routes);

    return 0;
}

void print_routes(std::vector<std::vector<int>> &routes, char cities[])
{
    std::cout << std::endl
              << "Matriz de rutas" << std::endl;
    for (int i = 0; i < routes.size(); i++)
    {
        std::cout << cities[i] << " ";
    }
    std::cout << std::endl;
    for (int i = 0; i < routes.size(); i++)
    {
        std::cout << "--";
    }
    std::cout << std::endl;
    for (int i = 0; i < routes.size(); i++)
    {
        for (int j = 0; j < routes[i].size(); j++)
        {
            std::cout << routes[i][j] << " ";
        }
        std::cout << "| " << cities[i] << std::endl;
    }
    std::cout << std::endl;
}

void find_path(int origin_index, int destination_index, char cities[], std::vector<std::vector<int>> &routes)
{
    // intento de implementar el algoritmo DFS (Depth First Search)
    // para encontrar el camino entre las ciudades

    // Necesito un vector para marcar las ciudades que ya visite
    bool visited[routes.size()] = {false};

    // Necesito un vector para guardar el camino que voy recorriendo
    int stack[routes.size()];

    // Necesito un contador que me diga en que posicion del vector stack estoy
    // y que me permita saber si el vector esta vacio
    int top = -1;

    // Le subo en uno al contador para que apunte a la primera posicion del vector
    // y le asigno el indice de la ciudad de origen ya que siempre voy a empezar
    // desde ahi
    stack[++top] = origin_index;

    // Pongo la ciudad de origen como visitada
    // esto hace que el algoritmo no se vuelva infinito
    // ya que si no se pone como visitada, el algoritmo
    // nunca va a terminar. Basicamente ignora la diagonal
    // de doble entrada de la matriz
    visited[origin_index] = true;

    // Mientras el vector stack no este vacio
    while (top != -1)
    {
        // Obtengo el indice de la ciudad que esta en la cima del vector stack
        int current = stack[top];

        // Si la ciudad que esta en la cima del vector stack es la ciudad de destino
        // entonces ya encontre el camino. easy peasy
        if (current == destination_index)
        {
            std::cout << "Ruta encontrada: ";

            for (int i = 0; i <= top; i++)
            {
                std::cout << cities[stack[i]] << ((i != top) ? " -> " : "");
            }
            std::cout << std::endl;
            break;
        }
        // Sino, entonces busco dentro de la matriz de rutas
        // si hay una ruta desde la ciudad que esta en la cima del vector stack
        // hacia alguna otra ciudad que no haya visitado
        else
        {
            bool found = false;
            for (int i = 0; i < routes.size() && !found; i++)
            {
                // Si la ciudad adyacente no ha sido visitada y existe una ruta entre
                // la ciudad que esta en la cima del vector stack y la ciudad adyacente
                // entonces la meto en el vector stack y la marco como visitada
                if (routes[current][i] == 1 && !visited[i])
                {
                    stack[++top] = i;
                    visited[i] = true;
                    found = true;
                }
            }
            if (!found)
            {
                top--;
            }
        }
    }
    if (top == -1)
    {
        // Si el vector stack esta vacio y no encontre el camino
        // entonces no existe un camino entre las ciudades
        std::cout << "No existe un camino entre las ciudades" << std::endl;
    }
}