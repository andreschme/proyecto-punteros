//Definicion de librerias
#include <iostream>
using namespace std;

//Metodo principal
int main() {
    //Declaracion de variables y punteros
    int numero = 42;
    int* ptr = &numero;

    // Se muestra la dirección de memoria y el valor mediante el puntero
    cout << "Direccion de memoria del puntero: " << ptr << endl;
    cout << "Valor de la variable en el puntero: " << *ptr << endl;

    //Finaliza programa
    return 0;
}
