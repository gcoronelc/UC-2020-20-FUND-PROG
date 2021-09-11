#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	string a, b;
	
	a = "abc";
	b = "abc";
	
	cin >> b;
	cout << endl;
	
	if( a == b ){
		cout << "Iguales" << endl;
	} else {
		cout << "Diferentes" << endl;
	}
	
	cout << stoi( "123" ) << endl;
	
	//cout << "Resto: " << 20%3 << endl;
	
	
	/*
	for(;;){
		cout << "Que tal for!!!" << endl;
	}
	*/
	
	// Fin
	system("pause");
	return 0;
}
