 #include "iostream"
 #include <stdio.h>
 using namespace std;
 
 int main()
 {
 	float Altura, Base;
 	float SUPERFICIE, PERIMETRO;
 	
 	cout << "Hola! Este programa 1.10 Calcula la superficie y el perimetro de un rectangulo" << "\n";
 	
 	cout << "Por ingrese el valor de la Base: " << "\n";
	 
	 cin >> Base;
 	
 	cout << "Por ingrese el valor de la Altura: " << "\n";
 	
 	cin>> Altura;
 	
 	SUPERFICIE= Base*Altura;
 	PERIMETRO= 2*(Base+Altura);
 	
 	//se muestra el resultado
 	printf("\n La superficie del rectangulo es %5.2f \n", SUPERFICIE);
 	printf("\n El perimetro del rectangulo es %5.2f \n", PERIMETRO);
 	
 	return 0;
 	
 }
 	
