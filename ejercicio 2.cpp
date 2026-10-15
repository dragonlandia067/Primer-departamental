#include <iostream>
using namespace std;

// Función que recibe 2 parámetros y devuelve la suma
int sumar(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    
    int resultado = sumar(num1, num2);
    cout << "La suma es: " << resultado << endl;
    
    return 0;
}