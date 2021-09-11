#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	char op;
	string nombre;
	
	cin >> op;
	
	if( op == 'A'){
		nombre = "Gustavo";
	} else if( op == 'B' ){
		nombre = "Karla";
	} else if( op == 'C' ){
		nombre == "Ricardo";
	} else {
		nombre = "Julio";
	}
	
	cout << nombre << endl;
	
	
	// Fin
	system("pause");
	return 0;
}
