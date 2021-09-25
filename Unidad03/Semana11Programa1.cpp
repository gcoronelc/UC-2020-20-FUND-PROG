#include<iostream>
#include "LecturaDatos.h"
using namespace std;

double saldo = 0, depos, retir;  
int rpta, op, opc;

int leedatoe()
{	int dato;
	cin >> dato;
	return dato;
}

double leedatod()
{	double dato;
	cin >> dato;
	return dato;
}

void Depositar()
{
	do{
		cout << "\n\t\tIngrese monto a depositar:\t";
		depos = leedatod();
		if (depos <= 0)
			cout << "\t\t ERROR.Vuelva a ingresar " << endl;
	}while (depos <= 0);

	saldo = saldo + depos;
}

void Retirar()
{
	do{
		cout << "\n\t\tIngrese monto a retirar:\t";
		retir = leedatod();
		if (retir <= 0)
			cout << "\t\t ERROR.Vuelva a ingresar " << endl;
	}while (retir <= 0);

	if (retir <= saldo)
		saldo = saldo - retir;
	else
		cout << "\t\tNo se puede. No tiene saldo."<< endl;
}

void VerSaldo()
{
	cout << endl;
	cout << "\t\tSu saldo es:\t\t\t" << saldo << endl;
}

void Salida()
{
	cout << "\n\t\t GRACIAS. Vuelva pronto..!!\n";
}

void Procesar()  // Sub Men� 
{
	
		cout << endl << endl;
		cout << "\t\t\t----------CAJERO---------\t\t" << endl;
		cout << endl;
		cout << "\t\t1.Depositar." << endl;
		cout << "\t\t2.Retirar." << endl;
		cout << "\t\t3.Saldo." << endl;
		cout << "\t\t4.Salir." << endl;
		cout << endl;
		
		do {
			cout << "\t\t Ingrese opcion:\t";
			opc = leedatoe();
			if (opc < 1 || opc > 4)
				cout << "\t\t ERROR.Vuelva a Ingresar";
		} while (opc < 1 || opc > 4);

		switch (opc)
		{
			case 1: {
						Depositar();
						
						VerSaldo();   // para que vea la informaci�n sin entrar al submen� 
						cout << endl;
					}break;
	
			case 2: {
						Retirar();  
											
						VerSaldo();  // para que vea la informaci�n sin entrar al submen� 
						cout << endl;
					}break;
	
			case 3: {
						VerSaldo();
						cout << endl;
					}break;
	
			case 4: {
						Salida();  // Sale solo del submen�..pero volver� al men� principal 
					}break;
		}
}

int Menu()  // Men� principal
{
	do{
		cout << endl << endl;
		cout << "\t\t\t----------MENU---------\t\t" << endl;
		cout << endl;
		cout << "\t\t1.Procesar." << endl;
		cout << "\t\t2.Salir." << endl;
		cout << endl;

		cout << "\t\t Ingrese opcion:\t";
		op = leedatoe();
		
		if (op != 1 && op != 2)
			cout << "\t\t ERROR.Vuelva a Ingresar";
	
	}while (op != 1 && op != 2);

	switch (op)
	{
		case 1:{
					do{
						Procesar();
						cout << endl;
					} while (opc != 4);  // repite el submen�
				}break;
		
		case 2:{
					Salida();
				}break;
	}
	
	return op;
}


int main()
{
	do{
		rpta = Menu();

	}while (rpta != 2);

	return 0;
}
