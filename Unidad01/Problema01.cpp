#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int numero1, numero2;
	int suma, resta, producto, division, resto;
	
	// Lectura de datos
	cout << "LECTURA DE DATOS" << endl;
	cout << "===========================================" << endl;
	cout << "Número 1: "; cin >> numero1;
	cout << "Número 2: "; cin >> numero2;
	
	// Proceso
	suma = numero1 + numero2;
	resta = numero1 - numero2;
	producto = numero1 * numero2;
	division = numero1 / numero2;
	resto = numero1 % numero2;
	
	// Reporte
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "===========================================" << endl;	
	cout << "La suma es: " << suma << endl;
	cout << "La resta es: " << resta << endl;
	cout << "El producto es: " << producto << endl;
	cout << "La división es: " << division << endl;
	cout << "El resto es: " << resto << endl;
	cout << endl;
	
	// Fin
	system("pause");
	return 0;
}
