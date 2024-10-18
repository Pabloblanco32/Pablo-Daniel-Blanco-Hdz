#include "iostream"
#include <stdio.h>
using namespace std;

int main()
{
	int NUMERO, CUADRADO, CUBO;
	
	cout << "Hola Este programa 1.9 Calcular el cuadrado y el cubo de un numero entero positivo" << "\n";
	
	cout << "Por favor ingrese el valor de NUMERO: " << "\n";
	
	cin >> NUMERO;
	
	CUADRADO=NUMERO*NUMERO;
	CUBO=NUMERO*CUADRADO;
	
	cout << "El cuadrado de " << NUMERO << " es: " << CUADRADO << " y el cubo es: " << CUBO;
	
	return 0;
	
}
