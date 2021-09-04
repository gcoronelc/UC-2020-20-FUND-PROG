#include<iostream>
using namespace std;

int main( )
{ 
	// Configuración
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int a;
		
	// Lectura de datos
	cout<<"Ingrese valor del número:\t\t";
	cin>>a;
	cout<<"\n";	
	
	// Proceso y Reporte
	if( a>0 )
	{
		if(a>=1 && a<=10)
			cout<<"Está entre los primeros diez número." << "\n";
		else
			cout<<"Está en mas de los primeros diez números." << "\n";
	}
	else
	{
		cout<<"No es un número mayor a cero." << "\n";
	}
	
	// Fin
	return 0;
}


