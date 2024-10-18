#include "iostream"
#include <stdio.h>
using namespace std;

int main()
{
	int A,B;
	float RES;
	
	//MENSAJE DE BIENVENIDA
	cout << "Hola Este programa 1.7 Escribir el resultado de la expresion" << "\n";
	
	//SE DECLARAN LOS NUMEROS QUE SE SUMARAN (PUEDEN SER DECIMALES)
	
	//SE PIDE EL PRIMER NUMERO
	cout << "Por favot ingrese el valor de A: " << "\n";
	//SE ASIGNA EL PRIMER VALOR a A
	cin >> A;
	
	//SE PIDE EL SEGUNDO NUMERO
	cout << "Por favot ingrese el valor de B: " << "\n";
	//SE ASIGNA EL SEGUNDO VALOR A B
	cin >> B;
	
	RES= ((A+B)*(A+B))/3.0;
	
	//SE MUESTRA EL RESULTADO
	printf ("\n El resultado de la expresion es %5.4f \n", RES);
	cout << "EL RESULTADO DE LA EXPRESION ES " << RES << "\n";
	
	return 0;
}
