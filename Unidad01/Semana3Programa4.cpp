#include<iostream>
using namespace std;

int main( )
{ 	
	// Configuración
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int num;

	// Lectura de datos
	cout<<"Ingrese número:\t\t";
	cin>>num;
	cout<<"\n";

	// Proceso y reporte
	switch(num)
	{	
	    case 1: cout<<"Vocal A"; break;
	    case 2: cout<<"Vocal E"; break;
	    case 3: cout<<"Vocal I"; break;
	    case 4: cout<<"Vocal O"; break;
	    case 5: cout<<"Vocal U"; break;
	    default: cout<<"No es numero para vocal";
	}
	
	// Fin
	cout<<"\n";
	return 0;
}



