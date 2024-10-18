#include "iostream"
#include <stdio.h>
using namespace std;

int main()
{
	int MAT;
	float PRO, CAL1, CAL2, CAL3, CAL4, CAL5;
	
	cout << "Hola Este programa 1.8 Promedio de calificaciones" << "\n";
	//se pide la matricula del alumno
	cout << "Por favor ingrese la primera calificacion: " << "\n";
	//se asigna el primer valor a MAT
	cin >> MAT;

	//se pide la primera calificacion
	cout << "Por favor ingrese la primera calificacion: " << "\n";
	//se asigna el primer valor a CAL1
	cin >> CAL1;
	
	//se pide la segunda calificacion
	cout << "Por favor ingrese la segunda calificacion: " << "\n";
	//se asigna el segundo valor a CAL2
	cin >> CAL2;
	
	//se pide la tercer calificacion
	cout << "Por favor ingrese la tercer calificacion: " << "\n";
	//se asigna el tercer valor a CAL3
	cin >> CAL3;
	
	//se pide la cuarta calificacion
	cout << "Por favor ingrese la cuarta calificacion: " << "\n";
	//se asigna el cuarto valor a CAL4
	cin >> CAL4;
	
	//se pide la quinta calificacion
	cout << "Por favor ingrese la quinta calificacion: " << "\n";
	//se asigna el quinto valor a CAL5
	cin >> CAL5;
	
	PRO=(CAL1+CAL2+CAL3+CAL4+CAL5)/5.0;
	
	//se muestra el resultado
	printf ("\n El promedio del alumno con matricula %d es %5.2f \n", MAT,PRO);
	cout << "\n El promedio del alumno con matricula "<< MAT << " es " << PRO << "\n";
	
	return 0;
}
