#include <iostream>
using namespace std;

// PE: struct
struct ProductoPE {
    float precio;
    float peso;
};

int main() {
    ProductoPE prod;
    prod.precio = 10.5;
    prod.peso = 2.3;
    
    cout << "PE -> Precio: " << prod.precio << ", Peso: " << prod.peso << endl;
    return 0;
}