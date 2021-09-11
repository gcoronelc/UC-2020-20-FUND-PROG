#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	int nota;
	string estado;
	
	do{
		cout << "Nota: "; cin >> nota;
		if(nota<0 || nota>20){
			cout << "ERROR: Nota fuera de rango." << endl;
		}
	}while( nota<0 || nota>20 );
	
	
	if( nota < 11 ){
		estado = "Desaprobado";
	} else if( nota < 14 ){
		estado = "Regular";
	} else if( nota < 18 ){
		estado = "Bueno";
	} else {
		estado = "Excelente";
	}
	
	cout << estado << endl;
	
	
	// Fin
	system("pause");
	return 0;
}
