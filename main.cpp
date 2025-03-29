// Definición de librerías
#include <iostream>
using namespace std;

// Función para intercambiar dos valores usando punteros
void intercambiar(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Método principal
int main() {
    // Declaración de variables
    int num1 = 42, num2 = 100;

    // Muestra los valores originales
    cout << "Antes del intercambio:" << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

    // Llamada a la función de intercambio
    intercambiar(&num1, &num2);

    // Muestra los valores después del intercambio
    cout << "Después del intercambio:" << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}

