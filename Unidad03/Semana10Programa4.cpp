#include <iostream>
using namespace std;

int creditos, contEstud, cont = 0, cantFem=0, cantMasc=0, acumCreditos=0;
int contFemPrimer=0, contFemSegund=0, contFemTercer=0, contFemCuart=0, contFemQuint=0;   
int contMascPrimer=0, contMascSegund=0, contMascTercer=0, contMascCuart=0, contMascQuint=0;  
int acumFemPrimer=0, acumFemSegund=0, acumFemTercer=0, acumFemCuart=0, acumFemQuint=0;
int acumMascPrimer=0, acumMascSegund=0, acumMascTercer=0, acumMascCuart=0, acumMascQuint=0;
char rpta, genero;
string mensaje;

int leedatoe()
{
	int dato;
	cin>>dato;
	return dato;	
}

char leedatoc()
{
	char dato;
	cin>>dato;
	return dato;	
}

void Mostrar()
{
	cout<<"\nLa cantidad de estudiantes es:\t" << contEstud <<"\n";
	cout<<"\nEl total acumulado de creditos es:\t" << acumCreditos <<"\n";
	cout<<"\nLa cantidad de estudiantes femenino en primero es:\t" << contFemPrimer <<"\n";
	cout<<"\nLa cantidad de estudiantes femenino en segundo es:\t" << contFemSegund <<"\n";
	cout<<"\nLa cantidad de estudiantes femenino en tercero es:\t" << contFemTercer <<"\n";
	cout<<"\nLa cantidad de estudiantes femenino en cuarto es:\t" << contFemCuart <<"\n";
	cout<<"\nLa cantidad de estudiantes femenino en quinto es:\t" << contFemQuint <<"\n";
	cout<<"\nLa cantidad de estudiantes masculino en primero es:\t" << contMascPrimer <<"\n";
	cout<<"\nLa cantidad de estudiantes masculino en segundo es:\t" << contMascSegund <<"\n";
	cout<<"\nLa cantidad de estudiantes masculino en tercero es:\t" << contMascTercer <<"\n";
	cout<<"\nLa cantidad de estudiantes masculino en cuarto es:\t" << contMascCuart <<"\n";
	cout<<"\nLa cantidad de estudiantes masculino en quinto es:\t" << contMascQuint <<"\n";
	cout<<"\nEl acumulado de creditos femenino en primero es:\t" << acumFemPrimer <<"\n";
	cout<<"\nEl acumulado de creditos femenino en segundo es:\t" << acumFemSegund <<"\n";
	cout<<"\nEl acumulado de creditos femenino en tercero es:\t" << acumFemTercer <<"\n";
	cout<<"\nEl acumulado de creditos femenino en cuarto es:\t" << acumFemCuart <<"\n";
	cout<<"\nEl acumulado de creditos femenino en quinto es:\t" << acumFemQuint <<"\n";
	cout<<"\nEl acumulado de creditos masculino en primero es:\t" << acumMascPrimer <<"\n";
	cout<<"\nEl acumulado de creditos masculino en segundo es:\t" << acumMascSegund <<"\n";
	cout<<"\nEl acumulado de creditos masculino en tercero es:\t" << acumMascTercer <<"\n";
	cout<<"\nEl acumulado de creditos masculino en cuarto es:\t" << acumMascCuart <<"\n";
	cout<<"\nEl acumulado de creditos masculino en quinto es:\t" << acumMascQuint <<"\n";
}

void ProcesaCreditos()
{
	do{
		cout << "\n\n\t\t ----- CALCULAR POR ESTUDIANTE -----\n\n";
	
		do{
			cout << "\t\t Ingrese creditos:\t\t";
			creditos = leedatoe();
			if (creditos <= 0)
				cout<<  "\t\tERROR. Debe ser > 0. Vuelva a Ingresar.";
		} while (creditos <= 0 && creditos>160);
	
		do{
			cout << "\t\t Ingrese genero:\t\t";
			genero = leedatoc();
			if(genero != 'M' && genero!='m' && genero != 'F' && genero!='f')
				cout<<"ERROR. vuelva a Ingresar."<<endl;
		}while(genero != 'M' && genero!='m' && genero != 'F' && genero!='f');  
				
		switch(genero)
		{
			case 'f':
			case 'F':{	cantFem++;
						
						if (creditos < 32)
						{	mensaje = "Primero";
							contFemPrimer++;
							acumFemPrimer = acumFemPrimer + creditos;
						}
						else
							if (creditos >=32 && creditos <= 63)
							{	mensaje = "Segundo";
								contFemSegund++;
								acumFemSegund = acumFemSegund + creditos;
							}
							else
								if (creditos >=64 && creditos <= 95)
								{	mensaje = "Tercero";
									contFemTercer++;
									acumFemTercer = acumFemTercer + creditos;
								}
								else
									if (creditos >=96 && creditos <= 127)
									{	mensaje = "Cuarto";
										contFemCuart++;
										acumFemCuart = acumFemCuart + creditos;
									}
									else
										if (creditos >=128)
										{	mensaje = "Quinto";
											contFemQuint++;
											acumFemQuint = acumFemQuint + creditos;
										}
					}break;
				
				case 'm':
				case 'M':{	cantMasc++;
						
							if (creditos < 32)
							{	mensaje = "Primero";
								contMascPrimer++;
								acumMascPrimer = acumMascPrimer + creditos;
							}
							else
								if (creditos >=32 && creditos <= 63)
								{	mensaje = "Segundo";
									contMascSegund++;
									acumMascSegund = acumMascSegund + creditos;
								}
								else
									if (creditos >=64 && creditos <= 95)
									{	mensaje = "Tercero";
										contMascTercer++;
										acumMascTercer = acumMascTercer + creditos;
									}
									else
										if (creditos >=96 && creditos <= 127)
										{	mensaje = "Cuarto";
											contMascCuart++;
											acumMascCuart = acumMascCuart + creditos;
										}
										else
											if (creditos >=128 )
											{	mensaje = "Quinto";
												contMascQuint++;
												acumMascQuint = acumMascQuint + creditos;
											}
						}break;
		}
		
		cout<<"\nEl estudiante es de:\t" << mensaje <<"\n";
		
		contEstud++;   // contador general 
		acumCreditos = acumCreditos + creditos;	// acumulador general
		
		do{
			cout<<"\nDesea ingresar otro estudiante? (Ss - Nn):\t";
			rpta = leedatoc();
			if(rpta != 'S' && rpta != 's' && rpta != 'N' && rpta != 'n')
				cout<<"\nERROR. Vuelva a ingresar S o s o N o n.\n";
		}while(rpta != 'S' && rpta != 's' && rpta != 'N' && rpta != 'n' );
			
	}while(rpta == 'S' || rpta == 's');
		
	Mostrar();
}

int main()
{
	ProcesaCreditos();
	
	return 0;	
}


