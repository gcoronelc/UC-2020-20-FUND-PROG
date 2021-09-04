#include<iostream>
using namespace std;

int main( )
{ 	
	// Configuración
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int a, b;
	int c; 
	
	// Lectura de datos
	cout<<"Ingrese valor de primer número:\t\t"; cin>>a;
	cout<<"Ingrese valor de segundo número:\t";  cin>>b;

	// Proceso y Reporte
	if( a>0 && b>0)
	{
		c = a + b;
		cout<<"La suma es:\t\t\t\t" << c << "\n";
	}
	else
	{
		c = a * b;
		cout<<"La multiplicación es:\t\t\t\t" << c << "\n";
	}
	
	// Fin
	return 0;
}



