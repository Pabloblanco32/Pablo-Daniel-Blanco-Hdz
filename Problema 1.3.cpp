#include "iostream"

using namespace std;

int main()
{
	string NOMBRE;
	float PESOENLIBRAS, LONGITUDENPIES;
	float PESOENKILOS, LONGITUDENMETROS;
	
	cout << "Escribre el nombre del dinosaurio " << "\n";
	cin >> NOMBRE;
	
	cout << "Escribre el peso del dinosaurio en libras " << "\n";
	cin >> PESOENLIBRAS;
	
	cout << "Escribe la longitud del dinosaurio en pies " << "\n";
	cin >> LONGITUDENPIES;
	
	PESOENKILOS=PESOENLIBRAS*1000;
	LONGITUDENMETROS=LONGITUDENPIES*0.3047;
	
	cout << "El peso en kilos del dinosaurio " << NOMBRE << " es " << PESOENKILOS << " y la longitud en metros es " << LONGITUDENMETROS << "\n";
	return 0;
}
