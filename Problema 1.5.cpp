#include <iostream>

using namespace std;

int main() {
    float radio, altura;

    // Pedir al usuario que introduzca el radio y la altura
    cout << "Introduce el radio del cilindro: ";
    cin >> radio;
    cout << "Introduce la altura del cilindro: ";
    cin >> altura;

    // Calcular el área y el volumen directamente en el main
    float area = 2 * 3.141592 * radio * altura;
    float volumen = 3.141592 * (radio * radio) * altura;

    // Mostrar los resultados
      cout << "El volumen del cilindro es: " << volumen << endl;
    cout << "El área superficial del cilindro es: " << area << endl;
  

    return 0;
}
