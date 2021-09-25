#include <iostream>
#include <sstream> 
#include "LecturaDatosV2.h"
using namespace std;

// Variables Globales

// Los stocks
int stockHP = 100;
int stockAsus = 150;
int stockLenovo = 145;
int stockDell = 180;
// Otras variables
stringstream bufferVentas; 

// FUNCIONES DE CONTROL

int validarStock(int producto, int cantidad){
	int stock = 0;
	switch(producto){
		case 1:
			stock = stockHP;
			break;
		case 2:
			stock = stockAsus;
			break;
		case 3:
			stock = stockLenovo;
			break;
		case 4:
			stock = stockDell;
			break;									
	}
	int rpta = (cantidad<=stock)?1:0;
	return rpta;
}

int obtenerPrecio(int producto){
	double precio = 0;
	switch(producto){
		case 1:
			precio = 4500.00;
			break;
		case 2:
			precio = 4800.00;
			break;
		case 3:
			precio = 4900.00;
			break;
		case 4:
			precio = 5200.00;
			break;									
	}
	return precio;
}

double obtenerPorcDescuento(int producto){
	double porcentaje = 0.50;
	switch(producto){
		case 1:
			porcentaje = 0.10;
			break;
		case 2:
			porcentaje = 0.20;
			break;
		case 3:
			porcentaje = 0.25;
			break;
		case 4:
			porcentaje = 0.30;
			break;									
	}
	return porcentaje;
}

void actualizarStock(int producto, int cantidad){
	switch(producto){
		case 1:
			stockHP -= cantidad;
			break;
		case 2:
			stockAsus -= cantidad;
			break;
		case 3:
			stockLenovo -= cantidad;
			break;
		case 4:
			stockDell -= cantidad;
			break;									
	}	
}

void actualizarListado(int producto, int cantidad, double precio, double importe, double descuento, double total){
	string nombreProducto = "None";
	nombreProducto = (producto==1)?"HP":nombreProducto;
	nombreProducto = (producto==2)?"ASUS":nombreProducto;
	nombreProducto = (producto==3)?"lenovo":nombreProducto;
	nombreProducto = (producto==4)?"DELL":nombreProducto;
	bufferVentas << nombreProducto << "\t";
	bufferVentas << cantidad << "\t";
	bufferVentas << precio << "\t";
	bufferVentas << importe << "\t";
	bufferVentas << descuento << "\t";
	bufferVentas << total << endl;
}


// MENU PRINCIPAL DEL PROGRAMA
int menuPrincipal(){
	// Mostrar el menú
	system("cls");
	cout << "PROGRAMA DE VENTAS" << endl;
	cout << "========================" << endl;
	cout << "1.- Procesar venta" << endl;
	cout << "2.- Listado de ventas" << endl;
	cout << "3.- Resumen de ventas" << endl;
	cout << "4.- Finalizar ventas" << endl;
	// Leer opcion
	int op = leerOpMenu("Ingrese opción? ", "Opción incorrecta, intentar nuevamente.", 4);
	return op;
}

// REGISTRAR VENTA
void registrarVenta(){
	int producto, cantidad;
	cout << "REGISTRAR UNA VENTA" << endl;
	cout << "===========================================" << endl;
	// Lectura de datos
	cout << endl;
	cout << "PRODUCTO" << endl;
	cout << "1.- HP" << endl;
	cout << "2.- ASUS" << endl;
	cout << "3.- LENOVO" << endl;
	cout << "4.- DELL" << endl;
	producto = leerOpMenu("Seleccione el producto? ", "Opción incorrecta, intentar nuevamente.", 4);
	cout << endl;
	cantidad = leeDatoEnteroPositivo("Ingrese la cantidad? ", "Cantidad debe ser positiva.");
	// Validar
	if(validarStock(producto, cantidad) == 0){
		cout << endl;
		cout << "No hay stock suficiente." << endl;
		return;
	}
	// Proceso
	double precio = obtenerPrecio(producto);
	double porcDescuento = obtenerPorcDescuento(producto);
	double importe = precio * cantidad;
	double descuento = importe * porcDescuento;
	double total = importe - descuento;
	
	// Actualizar variables globales
	actualizarStock(producto, cantidad);
	actualizarListado(producto, cantidad, precio, importe, descuento, total);
	
	// Reporte
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "=====================================" << endl;
	cout << "Importe: " << importe << endl;
	cout << "% Descuento: " << porcDescuento * 100 << "%" << endl;
	cout << "Descuento: " << descuento << endl;
	cout << "Total: " << total << endl;
	
}

// LISTADO DE VENTAS
void listadoVentas(){
	cout << "Listado de ventas" << endl;
	cout << bufferVentas.str() << endl;
	cout << endl;
}

// RESUMEN DE VENTAS
void resumenVentas(){
	cout << "Resumen de ventas" << endl;
	cout << "Stock de HP: " << stockHP << endl;
	cout << "Stock de ASUS: " << stockAsus << endl;
	cout << "Stock de LENOVO: " << stockLenovo << endl;
	cout << "Stock de DELL: " << stockDell << endl;
	cout << endl;
}

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int op;
	
	// Bucle principal del programa
	do{
		
		op = menuPrincipal();
	
		system("cls");
		switch(op){
			case 1:
				registrarVenta();
				break;
			case 2:
				listadoVentas();
				break;
			case 3:
				resumenVentas();
				break;				
			case 4:
				cout << "Fin del programa, chau." << endl;
				break;															
		}
		
		cout << endl;
		system("pause");
	} while(op != 4);

	
	// Fin
	system("pause");
	return 0;
}
