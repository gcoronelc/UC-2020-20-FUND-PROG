/*
Este programa ilustra el uso de funciones y procedimientos.
*/
#include<iostream>
using namespace std;

// Procedimiento que permite leer un entero
void leerEntero(int &valor, string etiqueta){
	cout << etiqueta;
	cin  >> valor;
}

// Funcion para sumar dos numeros
int sumar(int a, int b){  
	int c;
	c = a + b;
	return c;
}

void mostrarDatoEntero(string etiqueta, int valor){
	cout << etiqueta << valor << endl;
}

int main()
{ 
	// Variables
	int num1, num2, suma;
	// Lectura de datos
	leerEntero(num1,"Ingrese valor de a: ");    
	leerEntero(num2,"Ingrese valor de b: ");    
  // Proceso
	suma = sumar(num1,num2);
	// Reporte
	mostrarDatoEntero("La suma es: ", suma);
	return 0;
}



