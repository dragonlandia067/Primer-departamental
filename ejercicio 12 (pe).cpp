#include <iostream>
#include <string>
using namespace std;

struct Persona {
    string nombre;
    int edad;
};

struct Coche {
    string marca;
    string modelo;
    float precio;
};

int main() {
    // Arreglo de personas
    Persona personas[3];
    personas[0] = {"Ana", 25};
    personas[1] = {"Luis", 30};
    personas[2] = {"Carlos", 28};
    
    // Arreglo de coches
    Coche coches[3];
    coches[0] = {"Toyota", "Corolla", 25000};
    coches[1] = {"Ford", "Mustang", 45000};
    coches[2] = {"Honda", "Civic", 22000};
    
    cout << "--- Personas ---" << endl;
    for (int i = 0; i < 3; i++) {
        cout << personas[i].nombre << ", " << personas[i].edad << " años" << endl;
    }
    
    cout << "\n--- Coches ---" << endl;
    for (int i = 0; i < 3; i++) {
        cout << coches[i].marca << " " << coches[i].modelo 
             << ", $" << coches[i].precio << endl;
    }
    
    return 0;
}