#include <iostream>
using namespace std;

float leedatof()
{
	float dato;
	cin >> dato;
	return dato;	
}

int leedatoe()
{
	int dato;
	cin>>dato;
	return dato;	
}

void herencia()
{
	float her, may;
	int cant;

	do{
		cout << "Ingresar importe de herencia:\t";
		her = leedatof();
		if (her <=0)
			cout << "ERROR.La herencia debe ser mayor a 0";
	} while (her <=0);

	do{
		cout << "Ingresar cantidad de hijos:\t";
		cant = leedatoe();
		if (cant <= 0)
			cout << "ERROR.La cantidad debe ser mayor a 0";
	} while (cant <= 0);

	if (cant < 4)
	{	
		her = her / cant;
		cout << "La herencia a cada hijo es:\t" << her << endl;

	}
	else
		{
		may = her / 2;
		her = may / (cant - 1);
		cout << "\nLa herencia del hermano mayor es: " << may;
		cout << "\nLa herencia de los demas hijos es: " << her;
		}
}

int main()
{
	herencia();

	return 0;
}




