/*
 * Desarrollar un programa que lea 3 n�meros.
 * El programa debe encontrar el mayor, el menor y el intermedio.
*/
#include<iostream>
using namespace std;
int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variable
	int num1, num2, num3, mayor, menor, intermedio ;

	// Lectura
	// =====================================
	cout << "LECTURA" << endl;
	cout << "=============================" << endl;
	cout << "N�mero 1: ";	cin >> num1;
	cout << "N�mero 2: ";	cin >> num2;
	cout << "N�mero 3: ";	cin >> num3;
	
	// Proceso

	
	// Reporte
	// =====================================
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "=============================" << endl;
	cout << "Mayor: " << mayor << endl;
	cout << "Intermedio: " << intermedio << endl;
	cout << "Menor: " << menor << endl;
	return 0;
}	
	
	
