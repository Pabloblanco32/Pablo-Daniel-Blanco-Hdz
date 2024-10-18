#include "iostream"

using namespace std;

int main()
{
	//declaracion de variables
	float PRECIOPRODUCTO, DEVOLUCION;
	float PAGO;
	
	//entrada de datos
	cout<< "Escribe el costo del articulo" << "\n";
	cin>> PRECIOPRODUCTO;
	
	cout<< "Escribe cuanto fue el pago del articulo" << "\n";
	cin>> PAGO;
	
	//calculo de devolucion
	
	DEVOLUCION= PAGO-PRECIOPRODUCTO;
	
	//se imprime resultado
	cout<< "El cambio del cliente es " << DEVOLUCION;
	
	return 0;
}
