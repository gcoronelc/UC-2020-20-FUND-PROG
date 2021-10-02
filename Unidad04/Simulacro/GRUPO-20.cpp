/*
GRUPO: 20
INTEGRANTES:
- Gustavo Coronel Castillo
- Carolina Cindy Yanina Vilcas Mitma
- RENZO BJORN ARDILES CHAVEZ
- RONALD JORGE PILCO QUISPE
*/

#include <iostream>
#include "LecturaDatosV2.h"
#include "ConvierteDatos.h"
using namespace std;

// Variables globales
int contVentas=0;

int leerCategoria(){
	char categoria;
	do{
		cout << "Categoría del curso (A/B/C): "; cin >> categoria;
		categoria = toupper(categoria);
		if(categoria!='A' && categoria!='B' && categoria!='C'){
			cout << "Dato incorrecto, intentalo nuevamente." << endl;
		}
	}while(categoria!='A' && categoria!='B' && categoria!='C');
	return categoria;
}

void procPrecioComision(char categoria,int cantidad,double &precio,double &porcComision){
	switch(categoria){
		case 'A':
			precio = 55.0;
			porcComision = (cantidad>10)?0.06:0.04;
		case 'B':
			precio = 75.0;
			porcComision = (cantidad>10)?0.10:0.06;		
		case 'C':
			precio = 93.0;
			porcComision = (cantidad>10)?0.15:0.10;
	}
}

// MENU
int fnMenu(){
	system("cls");
	cout << "========================" << endl;
	cout << "SOBRE RUEDAS SAC" << endl;
	cout << "Menú de opciones" << endl;
	cout << "========================" << endl;
	cout << "1.- Procesar venta" << endl;
	cout << "2.- Listado de ventas" << endl;
	cout << "3.- Resumen de ventas" << endl;
	cout << "4.- Salir" << endl;
	cout << "========================" << endl;
	int op = leerOpMenu("Opción? ", "ERROR: Ingrese opción correcta.", 4);
	return op;
}

// Procesar venta
void procProcesarVenta(){
	// Variables
	double precio, porcComision;
	// Lectura
	cout << "SOBRE RUEDAS SAC" << endl;
	cout << "Venta Nro. " << (contVentas+1) << endl;
	cout << endl;
	cout << "LECTURA DE DATOS" << endl;
	cout << "========================" << endl;
	char categoria = leerCategoria();
	int cantidad = leeDatoEnteroPositivo("Cantidad de camionetas: ", "Ingrese un valor positivo.");
	// Precio y comision
	procPrecioComision(categoria,cantidad,precio,porcComision);
	// Calculos
	double importeVenta = precio * cantidad;
	double importeComision = importeVenta * porcComision;
	// Reporte
	cout << endl;
	cout << "RESULTADO DE LA VENTA" << endl;
	cout << "========================" << endl;
	cout << "Precio por camioneta: " << precio << endl;
	cout << "Importe de la venta: " << importeVenta << endl;
	cout << "Porcentaje de comisión: " << porcComision*100 << "%" << endl;
	cout << "Importe de comisión: " << importeComision << endl;
}

// Listado
void procListado(){
	cout << "Listado de ventas." << endl;
	cout << "Pronto..." << endl;
}

// Resumen
void procResumen(){
	cout << "Resumen de ventas." << endl;
	cout << "Pronto..." << endl;
}

// Salir
void procSalir(){
	cout << "Fin del programa." << endl;
	cout << "Nos vemos en el siguiente curso." << endl;
}

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int opMenu;
	
	// Control del menú
	do{
		opMenu = fnMenu();
		system("cls");
		switch(opMenu){
			case 1:
				procProcesarVenta();
				break;
			case 2:
				procListado();
				break;
			case 3:
				procResumen();
				break;
			case 4:
				procSalir();
				break;															
		}
		
		cout << endl;
		system("pause");
	} while(opMenu != 4);
	cout << endl;
	cout << "Fin del programa, chau." << endl;
	cout << endl;
	
	// Fin
	system("pause");
	return 0;
}
