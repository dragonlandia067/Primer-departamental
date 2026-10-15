#include <iostream>
using namespace std;

class CalculadoraRecursiva {
public:
    // Multiplicación recursiva (sumas sucesivas)
    float multiplicar(float a, float b) {
        if (b == 0) return 0;
        if (b < 0) return -multiplicar(a, -b);
        return a + multiplicar(a, b - 1);
    }
    
    // División recursiva (restas sucesivas)
    float dividir(float a, float b) {
        if (b == 0) return 0;
        if (a < b) return 0;
        return 1 + dividir(a - b, b);
    }
    
    // Potencia recursiva (multiplicaciones sucesivas)
    float potencia(float base, int exp) {
        if (exp == 0) return 1;
        return multiplicar(base, potencia(base, exp - 1));
    }
    
    // Suma recursiva (por si acaso)
    float sumar(float a, float b) {
        if (b == 0) return a;
        if (b < 0) return sumar(a - 1, b + 1);
        return sumar(a + 1, b - 1);
    }
    
    // Resta recursiva
    float restar(float a, float b) {
        if (b == 0) return a;
        if (b < 0) return restar(a + 1, b + 1);
        return restar(a - 1, b - 1);
    }
};

int main() {
    CalculadoraRecursiva calc;
    
    cout << "Multiplicacion recursiva (4*3): " << calc.multiplicar(4, 3) << endl;
    cout << "Division recursiva (10/2): " << calc.dividir(10, 2) << endl;
    cout << "Potencia recursiva (2^3): " << calc.potencia(2, 3) << endl;
    cout << "Suma recursiva (5+3): " << calc.sumar(5, 3) << endl;
    cout << "Resta recursiva (10-4): " << calc.restar(10, 4) << endl;
    
    return 0;
}