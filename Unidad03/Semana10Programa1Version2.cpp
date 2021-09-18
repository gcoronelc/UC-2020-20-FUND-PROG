#include <iostream>
#include <sstream>
using namespace std;

float leeFloatPositivo(string etiqueta){
	float dato;
	do{
		cout << etiqueta; cin >> dato;
		if(dato<=0){
			cout << "ERROR: el valor ingresado debe ser positivo." << endl;
		}
	}while(dato<=0);
	return dato;	
}

int leeEnteroPositivo(string etiqueta){
	int dato;
	do{
		cout << etiqueta; cin >> dato;
		if(dato<=0){
			cout << "ERROR: el valor ingresado debe ser positivo." << endl;
		}
	}while(dato<=0);
	return dato;	
}

string procHerencia(float herencia, int cantHijos)
{
	stringstream reporte;
	float herenciaMayor, herenciaHermanos;
	if(cantHijos < 4){	
		herenciaHermanos = herencia / cantHijos;
		reporte << "La herencia a cada hijo es: " << herenciaHermanos << endl;
	} else {
		herenciaMayor = herencia / 2;
		herenciaHermanos = herenciaMayor / (cantHijos - 1);
		reporte << "La herencia del hermano mayor es: " << herenciaMayor << endl;
		reporte << "La herencia de los demas hijos es: " << herenciaHermanos << endl;
	}
	return reporte.str();
}

int main(){
	// Variables
	float herencia;
	int cantHijos;
	string reporte;
	// Lectura de Datos
	cout << "LECTURA DE DATOS" << endl;
	cout << "================================================" << endl;
	herencia = leeFloatPositivo("Ingrese el importe de la herencia: ");
	cantHijos = leeEnteroPositivo("Ingrese la cantidad de hijos: ");
	// Proceso
	reporte = procHerencia(herencia, cantHijos);
	// Reporte
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "================================================" << endl;
	cout << reporte << endl;
	return 0;
}




