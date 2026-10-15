#include <iostream>

using namespace std;

int main() {
    float numeros[5];
    float* ptr = numeros;
    float suma = 0;
    float maximo, minimo;

    for (int i = 0; i < 5; ++i) {
        cout << "Ingresa el numero " << i + 1 << ": ";
        cin >> *(ptr + i);
        
        suma += *(ptr + i);

        if (i == 0) {
            maximo = *(ptr + i);
            minimo = *(ptr + i);
        } else {
            if (*(ptr + i) > maximo) {
                maximo = *(ptr + i);
            }
            if (*(ptr + i) < minimo) {
                minimo = *(ptr + i);
            }
        }
    }

    float promedio = suma / 5.0;

    cout << "Suma: " << suma << endl;
    cout << "Promedio (Media): " << promedio << endl;
    cout << "Maximo: " << maximo << endl;
    cout << "Minimo: " << minimo << endl;

    return 0;
}
	