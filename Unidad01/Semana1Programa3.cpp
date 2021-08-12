#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	
	// Configuración
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int x, y;
	double z;
	
	// Lectura de datos
	cout << "LECTURA DE DATOS" << endl;
	cout << "===================================================" << endl;
	cout << "Ingrese x: "; cin >> x;
	cout << "Ingrese y: "; cin >> y;
	
	// Proceso
	z = sqrt( x + pow(y,3) );
	
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "===================================================" << endl;	
	cout << "El resultado de la ecuación es: " << z << endl;
	cout << endl;
	
	system("pause");
	return 0;
}



