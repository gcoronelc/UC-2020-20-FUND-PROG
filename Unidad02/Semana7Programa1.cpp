/*
Se ingresan los siguientes datos de estudiantes: 
	- Genero (M o F)
	- Estado Civil (Casado: C, Soltero: S)
	- Nota (0 <= nota <= 20)
	
El programa debe generar un reporte con la siguiente información: 
	- La cantidad de hombres.
	- La cantidad de mujeres.
	- La cantidad de hombres casados aprobados.
	- La cantidad de mujeres solteras desaprobadas.
	- La sumatoria de todas las notas ingresadas.
*/
#include<iostream>
using namespace std;

int main()
{	

	setlocale(LC_CTYPE,"Spanish");
	
	int op, nota;
	char gen, estado;
	int cantMasc=0, cantMascCas=0, cantMascSolt=0, cantMascCasApr=0, cantMascCasDesap=0, cantMascSoltApr=0, cantMascSoltDesap=0;
	int cantFem=0, cantFemCas=0, cantFemSolt=0, cantFemCasApr=0, cantFemCasDesap=0, cantFemSoltApr=0, cantFemSoltDesap=0;
	int sumNotas=0;
	
	do{		
	
		cout << "------- MENU --------" << endl;
		cout << "1. Procesar." << endl;
		cout << "2. Reportar." << endl;
		cout << "3. Salir" << endl;
		
		cout << endl;
		do{		
			cout<<"Ingrese opcion: "; cin>>op;
			if(op<1 || op>3){
				cout << "ERROR, debe 1, 2 o 3. Vuelve a Ingresar." << endl;
			}		
		}while(op<1 || op>3);  
					
		system("cls");
		switch(op){ 
		 
			// LECTURA DE DATOS VALIDADOS Y PROCESO 
			case 1: 
				cout << "LECTURA DE DATOS" << endl;
				cout << "======================================" << endl;
				// Lectura de genero
				do{		
					cout << "Ingrese genero: "; cin >> gen;
					if(gen!='F' && gen!='f' && gen!='M' && gen!='m') {
						cout << "ERROR, debe ingresar F o f o M o m. Vuelve a Ingresar." << endl;
					}		
				}while(gen!='F' && gen!='f' && gen!='M' && gen!='m');  
				// Lectura de estado civil
				do{
					cout << "Ingrese estado civil: "; cin >> estado;
					if(estado!='C' && estado!='c' && estado!='S' && estado!='s'){
						cout<<"ERROR, debe ingresar C o c o  S o s. Vuelve a Ingresar." << endl;
					}
				}while(estado!='C' && estado!='c' && estado!='S' && estado!='s');  
				// Lectura de nota
				do{		
					cout << "Ingrese nota: "; cin >> nota;
					if(nota<0 && nota >20){
						cout<<"ERROR, la nota debe ser estar en el rango de 0 a 20. Vuelve a Ingresar." << endl;
					}	
				}while(nota<0 && nota >20); 
				// Procesando datos
				sumNotas = sumNotas + nota;
				switch(gen){  
					case 'm': case 'M': 
						cantMasc++;
						switch(estado){  
							case 'c': case 'C': 
								cantMascCas++;
								if(nota>=11)
									cantMascCasApr++;
								else
									cantMascCasDesap++;
		 						break;
							case 's': case 'S':
								cantMascSolt++;
								if(nota>=11)
									cantMascSoltApr++;
								else
									cantMascSoltDesap++;
	 							break;
						}
						break;
					case 'f': case 'F':
						cantFem++;
						switch(estado) {  
							case 'c': case 'C': 
								cantFemCas++;
								if(nota>=11)
										cantFemCasApr++;
								else
										cantFemCasDesap++;
								break;
							case 's': case 'S':
								cantFemSolt++;
								if(nota>=11)
									cantFemSoltApr++;
								else
									cantFemSoltDesap++;
								break;
						}
						break;
				}
				break;
				
			// REPORTE
			case 2:
				cout << "REPORTE" << endl;
				cout << "========================================================" << endl;
				cout << "La cantidad de hombres es: "<< cantMasc << endl;  
				cout << "La cantidad de mujeres es: "<< cantFem << endl; 
				cout << "La cantidad de hombres casados aprobadas es: " << cantMascCasApr << endl; 
				cout << "La cantidad de mujeres solteras desaprobadas es: " << cantFemSoltDesap << endl; 
				cout << "La sumatoria de notas ingresadas es: "<< sumNotas << endl; 	
				break;
				
			// SALIR
			case 3: 
				cout<<"Adios..!. Vuelva pronto."<<"\n\n";   	
				break;
	}
	
	// Fin	
	system("pause");
	system("cls");	
			
	}while(op != 3);  
	
	cout<<"\n";
	return 0;
}



