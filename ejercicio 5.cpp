#include <iostream>
using namespace std;

// Clase Padre
class CalculadoraBasica {
public:
    float sumar(float a, float b) { return a + b; }
    float restar(float a, float b) { return a - b; }
    float multiplicar(float a, float b) { return a * b; }
    float dividir(float a, float b) { 
        if (b == 0) return 0;
        return a / b; 
    }
};

// Clase Hija que hereda de CalculadoraBasica
class CalculadoraAvanzada : public CalculadoraBasica {
public:
    // Método propio de la clase hija
    float potencia(float base, int exp) {
        float resultado = 1;
        for (int i = 0; i < exp; i++) {
            resultado *= base;
        }
        return resultado;
    }
};

int main() {
    CalculadoraAvanzada calc;
    
    // Usando métodos heredados
    cout << "Suma heredada: " << calc.sumar(5, 3) << endl;
    cout << "Resta heredada: " << calc.restar(5, 3) << endl;
    cout << "Multipliacion heredada: " << calc.multiplicar(5, 3) << endl;
    cout << "Division heredada: " << calc.dividir(5, 3) << endl;
    
    // Usando método propio
    cout << "Potencia (2^3): " << calc.potencia(2, 3) << endl;
    
    return 0;
}