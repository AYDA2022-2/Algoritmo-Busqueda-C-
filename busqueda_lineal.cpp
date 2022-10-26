#include <iostream>
using std::cin;
using std::cout;
using std::endl;
void mostrarArreglo(const int[], int);     
int busquedaLineal(const int[], int, int); 
int main()
{
    int clave = 0;
    const int tamano = 15;
    int arreglo[tamano] = {25, 17, 13, 16, 41, 32, 12, 115, 95, 84, 54, 63, 78, 21, 10};
    cout << "Elementos del arreglo: " << endl;
    mostrarArreglo(arreglo, tamano);
    cout << "Indique un valor a buscar y se le devolvera el indice: " << endl;
    cin >> clave;
    cout << "Su valor se encuentra en arreglo[" << busquedaLineal(arreglo, tamano, clave) << "]" << endl;
    return 0;
}
void mostrarArreglo(const int arreglo[], int tamano)
{
    for (int i = 0; i < tamano; i++)
        cout << "arreglo[" << i << "]=" << arreglo[i] << endl;
}
int busquedaLineal(const int arreglo[], int tamano, int clave)
{
    for (int i = 0; i < tamano; i++)
        if (arreglo[i] == clave)
            return i;
    return -1;
}