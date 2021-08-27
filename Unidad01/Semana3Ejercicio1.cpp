/*
 * Desarrollar un programa que lea 3 números.
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
	cout << "Número 1: ";	cin >> num1;
	cout << "Número 2: ";	cin >> num2;
	cout << "Número 3: ";	cin >> num3;
	
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
	
	
