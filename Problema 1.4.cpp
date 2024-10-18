#include "iostream"

using namespace std;

int main()
{
	float GAL;
	float TOTAL;
	
	cout << "Escribe la cantidad de galones " << "\n";
	
	cin >> GAL;
	
	TOTAL=GAL*3.785*8.20;
	
	cout << "El costo total es " << TOTAL << "\n";
	return 0;
}
