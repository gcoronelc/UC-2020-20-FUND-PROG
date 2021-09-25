#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int op;
	
	// Control del menú
	do{
		// Mostrar el menú
		system("cls");
		cout << "MENU" << endl;
		cout << "========================" << endl;
		cout << "1.- Abc" << endl;
		cout << "2.- Abc" << endl;
		cout << "3.- Abc" << endl;
		cout << "4.- Abc" << endl;
		cout << "5.- Salir" << endl;
		
		do{
			cout << endl;
			cout << "Opción? "; cin >> op;
			if(op<1 || op>5){
				cout << "Opción incorrecta." << endl;
			}
		} while(op<1 || op>5);
		
		system("cls");
		switch(op){
			case 1:
				cout << "Opcion 1" << endl;
				break;
			case 2:
				cout << "Opcion 2" << endl;
				break;
			case 3:
				cout << "Opcion 3" << endl;
				break;
			case 4:
				cout << "Opcion 4" << endl;
				break;
			case 5:
				cout << "Opcion 5" << endl;
				break;															
		}
		
		cout << endl;
		system("pause");
	} while(op != 5);
	cout << endl;
	cout << "Fin del programa, chau." << endl;
	cout << endl;
	
	// Fin
	system("pause");
	return 0;
}
