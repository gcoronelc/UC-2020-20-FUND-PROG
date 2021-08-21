#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	double soles, dolares;
	
	// Lectura de datos
	cout << "CASA DE CAMBIO \"EL AMIGO\"" << endl;
	cout << endl;
	cout << "LECTURA DE DATOS" << endl;
	cout << "=====================================" << endl;
	cout << "Ingrese el importe en soles: "; cin >> soles;
	
	// Proceso
	dolares = soles / 4.09;
	
	// Reporte
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "=====================================" << endl;
	cout << "Importe en dolares: " << dolares << endl;
	cout << endl;
	
	// Fin
	system("pause");
	return 0;
}
