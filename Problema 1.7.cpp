#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float L1, L2, L3, S, AREA;

    // Pedir al usuario que introduzca las medidas de los tres lados del triángulo
    cout << "Introduce el valor del lado L1: ";
    cin >> L1;
    cout << "Introduce el valor del lado L2: ";
    cin >> L2;
    cout << "Introduce el valor del lado L3: ";
    cin >> L3;

    // Calcular el semiperímetro
    S = (L1 + L2 + L3) / 2;

    // Calcular el área del triángulo usando la fórmula de Herón
    AREA = sqrt(S * (S - L1) * (S - L2) * (S - L3));

    // Mostrar el resultado
    cout << "El area del triangulo es: " << AREA << endl;

    return 0;
}
