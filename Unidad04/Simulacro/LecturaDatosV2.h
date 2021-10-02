/*
Librería de propósito general
*/

#include<iostream>
#include<string>
using namespace std;

// Función que permite leer una opción de un menú.
int leerOpMenu(string etiqueta, string mensaje, int limite){
	int op;
	do{
		cout << endl;
		cout << etiqueta; cin >> op;
		if(op<1 || op>limite){
			cout << mensaje << endl;
		}
	} while(op<1 || op>limite);
	return op;
}

int leeDatoEnteroPositivo(string etiqueta, string mensaje){
	int dato;
	do{
		cout << etiqueta; cin >> dato;
		if(dato <= 0){
			cout << mensaje << endl;
		}
	}while(dato<=0);
	return dato;
}

int leeDatoEntero(){
	int dato;
	cin>> dato;
	return dato;
}

float leeDatoFloat(){
	float dato;
	cin>> dato;
	return dato;
}

double leeDatoDouble(){
	double dato;
	cin>> dato;
	return dato;
}

char leeDatoChar(){
	char dato;
	cin>> dato;
	return dato;
}

string leeDatoString(){
	string dato;
	cin>> dato;
	return dato;
}

