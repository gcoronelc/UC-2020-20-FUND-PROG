#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	double precio, cantidad, importe, bono, descuento, totalPagar;
	double porcBono, porcDescuento;
	char genero;
	
	// Lectura de datos
	cout << "LECTURA DE DATOS" << endl;
	cout << "=======================================" << endl;
	cout << "Genero  (M/F): "; cin >> genero;
	cout << "Precio: "; cin >> precio;
	cout << "Cantidad: "; cin >> cantidad;
	
	// Validación
	if( !(genero == 'M' || genero == 'm' || genero == 'F' || genero == 'f') ){
		cout << endl;
		cout << "El genero del cliente es incorrecto." << endl;
		cout << endl;
		return 0;
	}
	if( precio <= 0.0 ){
		cout << endl;
		cout << "El precio debe ser un valor positivo." << endl;
		cout << endl;
		return 0;
	}	
	if( cantidad <= 0 ){
		cout << endl;
		cout << "La cantidad debe ser un valor positivo." << endl;
		cout << endl;
		return 0;
	}

	// Proceso
	// porcBono
	switch( genero ){
		case 'M': case 'm':
			porcBono = 0.18;
			break;
		case 'F': case 'f':
			porcBono = 0.25;
			break;			
	}
	// porcDcto
	switch( genero ){
		case 'M': case 'm':
			porcDescuento = (cantidad<=10)?0.20:0.50;
			break;
		case 'F': case 'f':
			porcDescuento = (cantidad<=10)?0.30:0.40;
			break;			
	}	
	// Otros calculos
	importe = precio * cantidad;
	bono = importe * porcBono;
	descuento = importe * porcDescuento;
	totalPagar = importe - bono - descuento;

	// Reporte
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "=======================================" << endl;	
	cout << "Importe: " << importe << endl;
	cout << "Bono: " << bono << endl;
	cout << "Descuento: " << descuento << endl;
	cout << "Total: " << totalPagar << endl;
	cout << endl;
	
	// Fin
	system("pause");
	return 0;
}
