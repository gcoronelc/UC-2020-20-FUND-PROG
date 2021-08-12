#include<iostream>
#include<math.h> 
using namespace std;

int main( )
{
	
	// Configuración
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int numero1, numero2;
	int Suma, Resta, Multiplica;
	double Division, RaizCuad, CuboPrimer; 
	
	// Lectura de Datos
	cout << "LECTURA DE DATOS" << endl;
	cout << "============================================" << endl;
	cout << "Ingrese valor de primer número:\t\t";  cin >> numero1;
	cout << "Ingrese valor de segundo número:\t"; cin >> numero2;
	
	// Proceso	
	Suma = numero1 + numero2;
	Resta = numero1 - numero2;
	Multiplica = numero1 * numero2;
	Division = numero1 / numero2;
	RaizCuad = sqrt(Suma);
	CuboPrimer = pow(numero1,3);
	
	// Reporte
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "============================================" << endl;	
	cout << "La suma es:\t\t\t\t" << Suma << "\n";
	cout << "La resta es:\t\t\t\t" << Resta << "\n";
	cout << "La multiplciaicón es:\t\t\t" << Multiplica << "\n";
	cout << "La divisón es:\t\t\t\t" << Division << "\n";
	cout << "La raiz cuadrada de la suma es:\t\t" << RaizCuad << "\n";
	cout << "El cubo del primer numero es:\t\t" << CuboPrimer << "\n";
	
	// Fin
	system("pause");
	return 0;
}


