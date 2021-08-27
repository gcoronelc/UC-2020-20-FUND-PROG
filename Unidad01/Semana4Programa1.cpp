/*
 * APLICACIÓN DE MENU Y ESTRUCTURAS ANIDADAS
 * Calcular el monto total de una venta.
 * Se aplica un bono en función al genero de la persona.
 * También se aplica un descuento en función del genero y la cantidad.
*/

#include<iostream>
using namespace std;

int main()
{ 	
	// Configurar
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int op, cantProd, precioProd;
	float bono, dcto, MBruto, Mbono, MDcto, Mtotal;
	string nombreClie;
	char genero;
	

	cout<<"-------- MENÚ DE OPCIOPNES --------\n\n";
	cout<<"1. Procesar."<<"\n";
	cout<<"2. Salir."<<"\n";
	
	cout<<"Ingrese opción (1 o 2):\t\t";
	cin>>op;
	
	if(op==1 || op==2) //VALIDAR
	{
		switch(op)
		{  
			case 1: {
				//PROCESAR: Ingresar, validar, calcular, mostrar
				cout<<"----------------------\n";
				cout<<"Ingrese Nombre Cliente: ";
				cin>>nombreClie;

				cout<<"Ingrese cantidad: ";
				cin >> cantProd;

				if(cantProd > 0)
				{
					cout<<"Ingrese precio: ";
					cin>>precioProd;

					if(precioProd > 0)
					{
						cout<<"Ingrese inicial genero: ";
						cin>>genero;
	
						if(genero == 'F' || genero == 'f' || genero == 'M' || genero == 'm')
						{
	
							switch(genero)
							{
								case 'F':
								case 'f': 	{	
												bono = 0.2; 
								
												if(cantProd <= 10)
													dcto = 0.3;
												else
													if(cantProd > 10)
														dcto = 0.4;
											} break;
			
								case 'M':
								case 'm': 	{	
												bono = 0.18; 
							
												if(cantProd <= 10)
													dcto = 0.2;
												else
													if(cantProd > 10)
														dcto = 0.5;	
											} break;
							}	
		
							MBruto = cantProd * precioProd;               
							Mbono = MBruto * bono;
							MDcto = MBruto * dcto;
							Mtotal = MBruto - Mbono - MDcto;
		
							cout<<"El monto bruto es: "<< MBruto <<endl;
							cout<<"El monto de bono es: "<< Mbono <<endl;
							cout<<"El monto de descuento es: "<< MDcto <<endl;
							cout<<"El monto total es: "<< Mtotal <<endl;
						}
						else
							cout<<"ERROR en genero. Debe ser F o f o M o m.";		
					}
					else
						cout<<endl<<"ERROR en precio. Precio debe ser >0."<<endl;
				}
				else
					cout<<endl<<"ERROR en cantidad. Cantidad debe ser >0."<<endl;
		     
			  	
			}break;
			
			case 2: {
						//SALIR
				       cout<<"Gracias..!. Vuelva pronto."<<endl;   	
					}break;
		}
	}
	else
		cout<<"\nERROR. Debe ser 1 o 2.\n";
	
	cout<<"\n";
	
	return 0;
}

