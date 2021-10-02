/*
GRUPO: 20
INTEGRANTES:
- Gustavo Coronel Castillo
- Carolina Cindy Yanina Vilcas Mitma
- RENZO BJORN ARDILES CHAVEZ
- RONALD JORGE PILCO QUISPE
*/

#include <iostream>
#include <sstream> 
#include "LecturaDatosV2.h"
#include "ConvierteDatos.h"
using namespace std;

// Variables globales
int contVentas=0, contVentasCatA=0, contVentasCatB=0, contVentasCatC=0;
int cantTotal=0, cantTotalCatA=0, cantTotalCatB=0, cantTotalCatC=0;
double sumaImporte=0, sumaImporteCatA=0, sumaImporteCatB=0, sumaImporteCatC=0;
stringstream listado;

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
	// Contadores
	contVentasCatA += (categoria=='A')?1:0;
	contVentasCatB += (categoria=='B')?1:0;
	contVentasCatC += (categoria=='C')?1:0;
	contVentas++;
	// Sumatoria de cantidades
	cantTotalCatA += (categoria=='A')?cantidad:0;
	cantTotalCatB += (categoria=='B')?cantidad:0;
	cantTotalCatC += (categoria=='C')?cantidad:0;
	cantTotal += cantidad;
	// Sumatoria de importes
	sumaImporteCatA += (categoria=='A')?importeVenta:0;
	sumaImporteCatB += (categoria=='B')?importeVenta:0;
	sumaImporteCatC += (categoria=='C')?importeVenta:0;
	sumaImporte += importeVenta;
	// Agregando fila al listado
	listado << contVentas << "\t" << categoria;
	listado << "\t" << precio << "\t";
	listado << cantidad << "\t" << importeVenta;
	listado << "\t" << importeComision << endl;
}

// Listado
void procListado(){
	cout << "LISTADO" << endl;
	cout << "======================================================================" << endl;
	cout << "Nro.\tCate.\tPrecio\t" << endl;
	cout << "======================================================================" << endl;
	cout << listado.str();
	cout << "======================================================================" << endl;
}

// Resumen
void procResumen(){
	cout << "RESUMEN DE VENTAS" << endl;
	cout << "======================================================================" << endl;
	cout << "Cate.\tVentas\tCant.\tImporte" << endl;
	cout << "======================================================================" << endl;
	cout << " A\t" << contVentasCatA << "\t" << cantTotalCatA << "\t" << sumaImporteCatA << endl;
	cout << " B\t" << contVentasCatB << "\t" << cantTotalCatB << "\t" << sumaImporteCatB << endl;
	cout << " C\t" << contVentasCatC << "\t" << cantTotalCatC << "\t" << sumaImporteCatC << endl;
	cout << "======================================================================" << endl;
	cout << " Total\t" << contVentas << "\t" << cantTotal << "\t" << sumaImporte << endl;
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
