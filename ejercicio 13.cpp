#include <iostream>
#include <string>
using namespace std;

struct Persona {
    string nombre;
    int edad;
};

int main() {
    Persona personas[3] = {
        {"Ana", 25},
        {"Luis", 30},
        {"Carlos", 28}
    };
    
    Persona *ptr = personas; // Puntero al inicio del arreglo
    
    cout << "--- Acceso indirecto a Personas ---" << endl;
    for (int i = 0; i < 3; i++) {
        // Acceso indirecto con puntero
        cout << (ptr + i)->nombre << ", " << (ptr + i)->edad << " años" << endl;
    }
    
    // También se puede usar notación de arreglo con puntero
    cout << "\n--- Usando ptr[i] ---" << endl;
    for (int i = 0; i < 3; i++) {
        cout << ptr[i].nombre << ", " << ptr[i].edad << " años" << endl;
    }
    
    return 0;
}