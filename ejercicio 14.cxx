#include <iostream>

using namespace std;

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int multiplicar(int a, int b) {
    if (b == 0) return 0;
    if (b > 0) return a + multiplicar(a, b - 1);
    return -multiplicar(a, -b);
}

int potencia(int base, int exponente) {
    if (exponente == 0) return 1;
    return base * potencia(base, exponente - 1);
}

int dividir(int dividendo, int divisor) {
    if (divisor == 0) return 0; 
    if (dividendo < divisor) return 0;
    return 1 + dividir(dividendo - divisor, divisor);
}

int main() {
    int opcion, n, a, b;

    cout << "Ejercicio 14: Recursividad" << endl;
    cout << "1. Fibonacci" << endl;
    cout << "2. Factorial" << endl;
    cout << "3. Multiplicacion recursiva" << endl;
    cout << "4. Potencia recursiva" << endl;
    cout << "5. Division recursiva" << endl;
    cout << "Elige una opcion: ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "Ingresa la cantidad de terminos: ";
            cin >> n;
            for (int i = 0; i < n; i++) {
                cout << fibonacci(i) << " ";
            }
            cout << endl;
            break;
        case 2:
            cout << "Ingresa un numero: ";
            cin >> n;
            cout << "Resultado: " << factorial(n) << endl;
            break;
        case 3:
            cout << "Ingresa a y b: ";
            cin >> a >> b;
            cout << "Resultado: " << multiplicar(a, b) << endl;
            break;
        case 4:
            cout << "Ingresa base y exponente: ";
            cin >> a >> b;
            cout << "Resultado: " << potencia(a, b) << endl;
            break;
        case 5:
            cout << "Ingresa dividendo y divisor: ";
            cin >> a >> b;
            if (b != 0) {
                cout << "Resultado: " << dividir(a, b) << endl;
            } else {
                cout << "Error: Division por cero" << endl;
            }
            break;
        default:
            cout << "Opcion no valida" << endl;
            break;
    }

    return 0;
}
