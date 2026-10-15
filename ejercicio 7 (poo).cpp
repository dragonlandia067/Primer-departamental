#include <iostream>
using namespace std;

// POO: class
class ProductoPOO {
public:
    float precio;
    float peso;
    
    void mostrar() {
        cout << "POO -> Precio: " << precio << ", Peso: " << peso << endl;
    }
};

int main() {
    ProductoPOO prod;
    prod.precio = 15.75;
    prod.peso = 3.1;
    prod.mostrar();
    
    return 0;
}