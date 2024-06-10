#include <iostream>
using namespace std;

int main() {
    float radio, circunferencia;

    cout << "Ingrese el radio del circulo: ";
    cin >> radio;

    circunferencia = 2 * 3.14159 * radio;

    cout << "La circunferencia del circulo es: " << circunferencia << endl;

    return 0;
}