// Definicion de librerias
#include <iostream>
using namespace std;

int main() {
    // Declaracion de una variable entera
    int numero = 10;

    // Declaracion de un puntero y asignacion de la direccion de la variable
    int* ptr = &numero;

    // Muestra el valor original de la variable
    cout << "Valor original de numero: " << numero << endl;

    // Modificacion del valor de la variable a traves del puntero
    *ptr = 20;

    // Muestra el nuevo valor de la variable
    cout << "Nuevo valor de numero a través del puntero: " << numero << endl;

    return 0;
}