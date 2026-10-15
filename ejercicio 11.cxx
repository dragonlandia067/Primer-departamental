#include <iostream>

using namespace std;

int main() {
    int filasA, columnasA, filasB, columnasB;

    cout << "Ingresa las filas de la matriz A: ";
    cin >> filasA;
    cout << "Ingresa las columnas de la matriz A: ";
    cin >> columnasA;

    cout << "Ingresa las filas de la matriz B: ";
    cin >> filasB;
    cout << "Ingresa las columnas de la matriz B: ";
    cin >> columnasB;

    if (columnasA != filasB) {
        cout << "Error: Las columnas de A deben ser iguales a las filas de B para multiplicar." << endl;
        return 1;
    }

    int A[10][10], B[10][10], C[10][10] = {0};

    cout << "Ingresa los elementos de la matriz A:" << endl;
    for (int i = 0; i < filasA; ++i) {
        for (int j = 0; j < columnasA; ++j) {
            cin >> A[i][j];
        }
    }

    cout << "Ingresa los elementos de la matriz B:" << endl;
    for (int i = 0; i < filasB; ++i) {
        for (int j = 0; j < columnasB; ++j) {
            cin >> B[i][j];
        }
    }

    for (int i = 0; i < filasA; ++i) {
        for (int j = 0; j < columnasB; ++j) {
            for (int k = 0; k < columnasA; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "Resultado de la matriz A x B:" << endl;
    for (int i = 0; i < filasA; ++i) {
        for (int j = 0; j < columnasB; ++j) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
