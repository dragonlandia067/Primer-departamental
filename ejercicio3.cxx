#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    char operacion;

    cout << "Ingresa el primer numero: ";
    cin >> num1;

    cout << "Ingresa el segundo numero: ";
    cin >> num2;

    cout << "Ingresa la operacion (+, -, *, /): ";
    cin >> operacion;

    switch (operacion) {
        case '+':
            cout << "Resultado: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Resultado: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Resultado: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Resultado: " << (float)num1 / num2 << endl;
            } else {
                cout << "Error: Division por cero" << endl;
            }
            break;
        default:
            cout << "Operacion no valida" << endl;
    }

    return 0;
}
	