#include <iostream>

using namespace std;

int main() {
    float numeros[5];
    float suma = 0;
    float maximo, minimo;

    for (int i = 0; i < 5; ++i) {
        cout << "Ingresa el numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    maximo = numeros[0];
    minimo = numeros[0];

    for (int i = 0; i < 5; ++i) {
        suma += numeros[i];
        
        if (numeros[i] > maximo) {
            maximo = numeros[i];
        }
        if (numeros[i] < minimo) {
            minimo = numeros[i];
        }
    }

    float promedio = suma / 5.0;

    cout << "Suma: " << suma << endl;
    cout << "Promedio (Media): " << promedio << endl;
    cout << "Maximo: " << maximo << endl;
    cout << "Minimo: " << minimo << endl;

    return 0;
}
