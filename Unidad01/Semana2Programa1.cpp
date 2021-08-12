#include<iostream>
using namespace std;

int main( )
{
	
	// Configuración
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	float base, altura, Area;
	
	// Lectura de Datos
	cout << "LECTURA DE DATOS" << endl;
	cout << "==========================================" << endl;
	cout << "Ingrese valor de la base:\t";   cin >> base;
	cout << "Ingrese valor de la altura:\t"; cin >> altura;
	
	// Proceso	
	Area = (base * altura) / 2;
	
	// Reporte
	cout << endl;
	cout << "LECTURA DE DATOS" << endl;
	cout << "==========================================" << endl;	
	cout << "El área del triángulo es:\t" << Area << endl;
	cout << endl;
	
	// Fin
	system("pause");
	return 0;
}


