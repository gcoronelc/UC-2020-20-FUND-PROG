#include<iostream>
using namespace std;

int main( )
{ 
	// Configuraci�n
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int a;
		
	// Lectura de datos
	cout<<"Ingrese valor del n�mero:\t\t";
	cin>>a;
	cout<<"\n";	
	
	// Proceso y Reporte
	if( a>0 )
	{
		if(a>=1 && a<=10)
			cout<<"Est� entre los primeros diez n�mero." << "\n";
		else
			cout<<"Est� en mas de los primeros diez n�meros." << "\n";
	}
	else
	{
		cout<<"No es un n�mero mayor a cero." << "\n";
	}
	
	// Fin
	return 0;
}


