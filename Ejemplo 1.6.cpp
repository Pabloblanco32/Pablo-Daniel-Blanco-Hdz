#include "iostream"
#include "string"
using namespace std;

int main()
{
	//mensaje de bienvenida
	cout << "Hola este programa 1.6 Escribe los datos en orden inverso" << "\n";
	
	//se declaran los numeros que se sumaran(pueden ser decimales)
	int A,B,C,D;
	
	//se pide el primer numero
	cout << "Por favor ingrese el primer valor de A: " << "\n";
	//se asigna el primer valor a A
	cin >> A;
	
	//se pide el segundo numero
	cout << "Por favor ingrese el segundo valor de B: " << "\n";
	//se asigna el segundo valor a B
	cin >> B;
	
	//se pide el tercer numero
	cout << "Por favor ingrese el tercer valor de C: " << "\n";
	//se asigna el tercer valor a C
	cin >> C;
	
	//se pide el cuarto numero
	cout << "Por favor ingrese el cuarto valor de D: " << "\n";
	//se asigna el cuarto valor a D
	cin >> D;
	
	//se muestra el resultado
	cout << D << " , " << C << " , " << B << " , " << A;
	
	return 0;
	
}


