#include<iostream>
#include "LecturaDatos.h"
using namespace std;

int num, cont=0, may, men, dig; 
int rpta, op, opc;

void Digitos()
{
	do{
		cout<<"\n\t\tIngrese numero:\t";
		num = leedatoe();
		if(num < 0)
			cout<<"\n\t\tNo se puede obtener digito. vuelva a ingresar."<<endl;
	}while(num < 0);

	if(num == 0)
		cout<<"\n\t\tEl digito es CERO.";
	else
	{
		while(num>0)
		{
			dig=num%10;
			
			cont = cont+1;
			
			if(cont ==1)
			{
				may= dig;
				men= dig;
			}
			else
			{
				if(dig>may)
					may=dig;
				else
					if(dig<men)
						men=dig;
			}
			
			num = num/10;
		}
	}
}

void Mostrar()
{	cout << endl << endl;
	cout<<"\t\tEl digito mayor es: "<<may<<"\n";
	cout<<"\t\tEl digito menor es: "<<men<<"\n";
}

void Salida()
{
	cout << "\n\t\t GRACIAS. Vuelva pronto..!!\n";
}

void Procesar()  // Sub Menú 
{
	
		cout << endl << endl;
		cout << "\t\t\t----------DETERMINA DIGITOS---------\t\t" << endl;
		cout << "\t\t1.Digitos." << endl;
		cout << "\t\t2.Mostrar." << endl;
		cout << "\t\t3.Salir." << endl;
		
		do {
			cout << "\t\t Ingrese opcion:\t";
			opc = leedatoe();
			if (opc < 1 || opc > 3)
				cout << "\t\t ERROR.Vuelva a Ingresar";
		} while (opc < 1 || opc > 3);

		switch (opc)
		{
			case 1: {	Digitos();
					}break;
	
			case 2: {	Mostrar();  
					}break;
	
			case 3: {	Salida();  
					}break;
		}
}

int Menu()  // Menú principal
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
		case 1:{	do{	Procesar();
						cout << endl;
					} while (opc != 3);  // repite el submenú
				}break;
		
		case 2:{	Salida();
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


