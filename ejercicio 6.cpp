#include <iostream>
using namespace std;

class CalculadoraBasica {
public:
    virtual float multiplicar(float a, float b) { return a * b; }
    virtual float dividir(float a, float b) { 
        if (b == 0) return 0;
        return a / b; 
    }
    virtual float potencia(float base, int exp) {
        float res = 1;
        for (int i = 0; i < exp; i++) res *= base;
        return res;
    }
};

class CalculadoraSobrescrita : public CalculadoraBasica {
public:
    // Multiplicación por sumas sucesivas
    float multiplicar(float a, float b) override {
        float resultado = 0;
        for (int i = 0; i < b; i++) {
            resultado += a;
        }
        return resultado;
    }

    // División por restas sucesivas
    float dividir(float a, float b) override {
        if (b == 0) return 0;
        float contador = 0;
        while (a >= b) {
            a -= b;
            contador++;
        }
        return contador;
    }

    // Potencia por multiplicaciones sucesivas
    float potencia(float base, int exp) override {
        float resultado = 1;
        for (int i = 0; i < exp; i++) {
            resultado = multiplicar(resultado, base); // Usa la multiplicación sobrescrita
        }
        return resultado;
    }
};

int main() {
    CalculadoraSobrescrita calc;
    
    cout << "Multiplicacion (4*3): " << calc.multiplicar(4, 3) << endl;
    cout << "Division (10/2): " << calc.dividir(10, 2) << endl;
    cout << "Potencia (2^3): " << calc.potencia(2, 3) << endl;
    
    return 0;
}