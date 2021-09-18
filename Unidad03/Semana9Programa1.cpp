/*
El objetivo de este programa es demostrar
como funciona un parámetro por valor y por referencia
*/

#include<iostream>
using namespace std;

void  modulo(int a, int &b)
{
	// Proceso
	a = 1000;
	b = 1000;
  // Reporte
	cout <<endl;
	cout << "Dentro del modulo" << endl;
	cout << "El valor de a es: " << a << endl;
	cout << "El valor de b es: " << b << endl;
}

int main()
{  
	int x, y;
     
  x=3; 
  y=5;
  
  cout << "Antes de la llamada al modulo." << endl;
  cout << "El valor de x es: " <<x << endl;
	cout << "El valor de y es: " <<y << endl;
  
	modulo(x,y);
  
	cout << endl;
	cout << "Despues de la llamada al modulo" << endl;
	cout << "El valor de x es: " <<x << endl;
	cout << "El valor de y es: " <<y << endl;
	cout << endl;
	
	return 0;
} 



