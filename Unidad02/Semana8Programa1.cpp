/*
Se tiene un inventario inicial, y se debe ingresar datos de cliente y datos de
producto, ademas de la cantidad pedida.

Reportar:
- La cantidad de hombres y la cantidad de mujeres con o sin atencion de pedido completo.
- La cantidad total de clientes atendidos (solo si se completo todo el pedido)
- La cantidad total de clientes no atendidos (no se completo pedido).
- El stock de unidades que queda del producto.
- El total acumulado vendido del producto.
- El total acumulado vendido para cliente de genero mujer.
- El total acumulado vendido para cliente de genero hombre.

*/

#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE,"Spanish");
	
	int op, opc;
	string NombreClie, NombProd;
	char Genero;
	int CantVent, stock;
	int contadorPedComp=0, contadorPedIncomp=0, contadorFem=0, contadorMasc=0, acumuVentas=0, acumVentasMasc=0, acumVentasFem=0;
	
	do{
		cout<<"\n\n"<<"------- MENU --------"<<endl;
		cout<<"1. Ingrese Inventario Inicial."<<endl;
		cout<<"2. Salir"<<"\n";
		
		do{
			cout<<"Ingrese opcion:\t\t";
			cin>>op;
			
			if(op<1 || op>2)
				cout<<"\nERROR, debe 1 o 2. Vuelve a Ingresar."<<"\n\n";

		}while(op<1 || op>2);  // Es para Validar el ingreso de op
				
		switch(op)
		{  
			case 1: {	//PROCESAR: Ingresar, validar, calcular, mostrar
						
						do{
							cout<<"\nIngrese stock inicial:\t\t\t\t";
							cin>>stock;
							
							if(stock<=0)
								cout<<"\nERROR, debe ser >00. Vuelve a Ingresar."<<"\n\n";
				
						}while(stock<=0); 
						
						do{
								cout<<"\n-------- SUB MENÚ --------\n\n";
								cout<<"1. VENTAS."<<"\n";
								cout<<"2. REPORTE."<<"\n";
								cout<<"3. Volver."<<"\n";
							
								do{
									cout<<"Ingrese opcion:\t\t";
									cin>>opc;
									
									if(opc<1 || opc>3)
										cout<<"\nERROR, debe 1 o 2. Vuelve a Ingresar."<<"\n\n";
						
								}while(opc<1 || opc>3);  // Es para Validar el ingreso de opc
								
								switch(opc)
								{  
									case 1: {	//PROCESAR: Ingresar, validar, calcular, mostrar
													
												cout<<"\nIngrese Nombre de Cliente:\t\t\t";
												cin>>NombreClie;
												
												do{
													cout<<"Ingrese Genero cliente (F f - M n):\t\t";
													cin>>Genero;
													
													if(Genero != 'F' && Genero != 'f' && Genero != 'M' && Genero != 'm')
														cout<<"\nERROR, debe ser F f - M n. Vuelve a Ingresar."<<"\n\n";
										
												}while(Genero != 'F' && Genero != 'f' && Genero != 'M' && Genero != 'm'); 
												
												cout<<"Ingrese Nombre de producto:\t\t\t";
												cin>>NombProd;
																								
												do{
													cout<<"Ingrese cantidad a vender (pedido):\t\t";
													cin>>CantVent;
													
													if(CantVent<=0)
														cout<<"\nERROR, debe ser >00. Vuelve a Ingresar."<<"\n\n";
										
												}while(CantVent<=0); 
												
												if(CantVent<=stock)
												{
													cout<<"\n\t\t\t\t\tPEDIDO COMPLETO\n";
													contadorPedComp++;            // Contador clientes atendidos
													
													stock = stock - CantVent;     // va quedando en stock
													acumuVentas = acumuVentas + CantVent;  //acumualo de ventas
													
													switch(Genero)
													{
														case 'F':
														case 'f':{
																	contadorFem++;
																	acumVentasFem = acumVentasFem + CantVent;
																}break;	
														
														case 'M':
														case 'm':{
																	contadorMasc++;
																	acumVentasMasc = acumVentasMasc + CantVent;
																}break;	
													}
												}
												else
													{
														cout<<"\n\t\t\t\t\tPEDIDO INCOMPLETO\n";
														contadorPedIncomp++;    // Contador clientes no atendidos     
													}
		 									}break;
									
									case 2: {	//VOLVER
										       	cout<<"-------------------- REPORTE TOTAL -----------------"<<endl; 
										       	cout<<"\nLa cantidad de hombres es:\t\t\t"<<contadorMasc<<"\n";
										       	cout<<"\nLa cantidad de mujeres es:\t\t\t"<<contadorFem<<"\n";
										       	cout<<"\nLa cantidad de clientes atendidos es:\t\t"<<contadorPedComp<<"\n";
										       	cout<<"\nLa cantidad de clientes no atendidos es:\t"<<contadorPedIncomp<<"\n";
										       	cout<<"\nLa cantidad que queda en stock:\t\t\t"<<stock<<"\n";
										       	cout<<"\nEl total acumulado vendido:\t\t\t"<<acumuVentas<<"\n";
										       	cout<<"\nEl total acumulado vendido para mujeres:\t"<<acumVentasFem<<"\n";
										       	cout<<"\nEl total acumulado vendido para hombres:\t"<<acumVentasMasc<<"\n";
													     	
											}break;									
									
									case 3: {	//VOLVER
										       	cout<<"Gracias..!. Regresa a Menú Principal."<<endl; 
													     	
											}break;
								}
								
						}while(opc != 3);
				  	
					}break;
					
			case 2: {	//SALIR
					    cout<<"Adios..!. Vuelva pronto."<<"\n\n";   	
					}break;
		}
		
		system("pause");
		system("cls");	// clear screen
			
	}while(op != 2);  // Es para repetir el menú (repetir el proceso)
	
	cout<<"\n";
	return 0;
}


