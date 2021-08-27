#include<iostream>
using namespace std;
int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variable
	double precio, cantidad, porcDescuento, descuento, importe, total;
	int control;
	string reporte;
	
	// Lectura
	cout << "LECTURA" << endl;
	cout << "=============================" << endl;
	cout << "Precio: ";	cin >> precio;
	cout << "Cantidad: ";	cin >> cantidad;
	
	// Proceso
	if( precio <= 0 || cantidad <= 0 ){
		reporte = "Datos incorrectos";
		control = -1;
	} else {
		control = 1;
		porcDescuento = 0;
		if( cantidad > 10 ){
			porcDescuento = 20;
		} else if( cantidad > 5 ){
			porcDescuento = 15;
		} else if( cantidad > 2 ){
			porcDescuento = 10;
		}
		importe = precio * cantidad;
		descuento = importe * porcDescuento / 100;
		total = importe - descuento;
	}
	
	// Reporte
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "=============================" << endl;
	if( control == 1 ){
		cout << "Descuento: " << porcDescuento << "%" << endl;
		cout << "Importe: " << importe << endl;
		cout << "Descuento: " << descuento << endl;
		cout << "Total: " << total << endl;
	} else {
		cout << reporte << endl;
	}
	
	// Fin
	cout << endl;
	return 0;
}	
