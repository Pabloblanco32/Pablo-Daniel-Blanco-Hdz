#include <iostream>

using namespace std;

int main() {
    int Dias;
    long Segundos;

    // Pedir al usuario que introduzca el número de días
    cout << "Introduce el numero de dias: ";
    cin >> Dias;

    // Calcular los segundos en los días ingresados
    Segundos = Dias * 24 * 60 * 60;

    // Mostrar el resultado
    cout << "El numero de segundos en " << Dias << " dias es: " << Segundos << endl;

    return 0;
}
