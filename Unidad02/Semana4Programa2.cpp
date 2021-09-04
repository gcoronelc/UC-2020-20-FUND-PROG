/*
 * Ejemplo de menu y submenu.
*/ 

#include<iostream>
using namespace std;

int main( )
{ 	
	// Configurar
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int op, opc;
	float mdp, mrt, msd = 0;

	// Menu
	cout<<"-------- MENÚ DE OPCIOPNES --------\n\n";
	cout<<"1. Procesar."<<"\n";
	cout<<"2. Salir."<<"\n";
	
	cout<<"Ingrese opción (1 o 2):\t\t";
	cin>>op;
	
	if(op==1 || op==2) //VALIDAR
	{
		switch(op)
		{  
			case 1: {	//PROCESAR: Ingresar, validar, calcular, mostrar
					cout << "\n";
					cout << "==== SUB MENÚ CAJERO ====\n";
					cout << "1. Depositar" << endl;
					cout << "2. Retirar" << endl;
					cout << "3. Saldo" << endl;
					cout << "4. Salir" << endl;
			
					cout << "\nSeleccione Opcion:\t\t";
					cin >> opc;
						
					if(opc>1 || opc<4) //VALIDAR
					{
						switch (opc)
						{
							case 1: {   
									cout << "Ingrese monto a depositar:\t";
									cin >> mdp;
									if (mdp > 0)
										msd = msd + mdp;	
									else
										cout << "Error. Vuelva a ingresar." << endl;
								}break;
				
							case 2: {  	
									cout << "Ingrese monto a retirar:\t";
									cin >> mrt;
									if (mrt > 0)
										if (mrt <= msd)
											msd = msd - mrt;
										else
											cout << "no tiene saldo suficinte." << endl;
									else
										cout << "Error. Vuelva a ingresar." << endl;
								}break;
				
							case 3: { 
									cout << "Su saldo es:\t\t\t" << msd << endl;
								}break;
				
							case 4: { 
									cout << "\t\t\t Gracias..!! \n" << endl;
								}break;
					   }
					}
					else
						cout<<"\nERROR. Debe ser 1 o 2.\n";
 				}break;
			
			case 2: { //SALIR
				  cout<<"Gracias..!. Vuelva pronto."<<endl;   	
				}break;
		}
	}
	else
		cout<<"\nERROR. Debe ser 1 o 2.\n";
	
	cout<<"\n";
	
	return 0;
}



