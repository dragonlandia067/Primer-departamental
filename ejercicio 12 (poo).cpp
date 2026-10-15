#include <iostream>
#include <string>
using namespace std;

class Persona {
public:
    string nombre;
    int edad;
    
    void mostrar() {
        cout << nombre << ", " << edad << " años" << endl;
    }
};

class Coche {
public:
    string marca;
    string modelo;
    float precio;
    
    void mostrar() {
        cout << marca << " " << modelo << ", $" << precio << endl;
    }
};

int main() {
    Persona personas[3];
    personas[0] = {"Ana", 25};
    personas[1] = {"Luis", 30};
    personas[2] = {"Carlos", 28};
    
    Coche coches[3];
    coches[0] = {"Toyota", "Corolla", 25000};
    coches[1] = {"Ford", "Mustang", 45000};
    coches[2] = {"Honda", "Civic", 22000};
    
    cout << "--- Personas ---" << endl;
    for (int i = 0; i < 3; i++) {
        personas[i].mostrar();
    }
    
    cout << "\n--- Coches ---" << endl;
    for (int i = 0; i < 3; i++) {
        coches[i].mostrar();
    }
    
    return 0;
}