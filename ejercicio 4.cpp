#include <iostream>
using namespace std;

// Función sobrecargada: 0 parámetros (pide datos al usuario)
void sumar() {
    float a, b;
    cout << "Ingrese dos numeros para sumar: ";
    cin >> a >> b;
    cout << "Resultado (0 parametros): " << a + b << endl;
}

// Función sobrecargada: 2 parámetros
float sumar(float a, float b) {
    return a + b;
}

// Función sobrecargada: 3 parámetros
float sumar(float a, float b, float c) {
    return a + b + c;
}

int main() {
    // Llamada a la función sin parámetros
    sumar();
    
    // Llamada a la función con 2 parámetros
    cout << "Resultado (2 parametros): " << sumar(5.5, 3.2) << endl;
    
    // Llamada a la función con 3 parámetros
    cout << "Resultado (3 parametros): " << sumar(1.0, 2.0, 3.0) << endl;
    
    return 0;
}