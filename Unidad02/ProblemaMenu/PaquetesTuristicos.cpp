#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int op;
	int paquete, cantidad;
	double importe, precioUnitario, porcDescuento, descuento;
	double baseImponible, impuesto, total;
	
	// Control del menú
	do{
		// Mostrar el menú
		system("cls");
		cout << "MENU PRINCIPAL TURISMO BARATO" << endl;
		cout << "==================================" << endl;
		cout << "1.- Ventas" << endl;
		cout << "2.- Reporte" << endl;
		cout << "3.- Salir" << endl;
		
		do{
			cout << endl;
			cout << "Opción? "; cin >> op;
			if(op<1 || op>3){
				cout << "Opción incorrecta." << endl;
			}
		} while(op<1 || op>3);
		
		system("cls");
		switch(op){
			// Venta
			case 1:
				// Lectura de datos
				cout << "Paquetes Turisticos" << endl;
				cout << "---------------------------" << endl;
				cout << "1.- Punta Cana" << endl;
				cout << "2.- San Andrés" << endl;
				cout << "3.- Cancún" << endl;
				do{
					cout << "Opcion? "; cin >> paquete;
					if(paquete<1 || paquete>3){
						cout << "ERROR: Opción incorrecta." << endl;
					}
				}while(paquete<1 || paquete>3);
				do{
					cout << "Cantidad: "; cin >> cantidad;
					if(cantidad<0){
						cout << "ERROR: Cantidad debe ser positiva." << endl;
					}
				}while(cantidad<=0);
				// Proceso
				switch(paquete){
					case 1:
						precioUnitario = 780;
						porcDescuento = 0.035;
						break;
					case 2:
						precioUnitario = 1350;
						porcDescuento = 0.04;
						break;
					case 3:
						precioUnitario = 2550;
						porcDescuento = 0.045;
						break;												
				}
				importe = precioUnitario * cantidad;
				descuento = importe * porcDescuento;
				total = importe - descuento;
				baseImponible = total / 1.18;
				impuesto = total - baseImponible;
				// Reporte Venta
				cout << endl;
				cout << "REPORTE DE VENTA" << endl;
				cout << "-------------------------------" << endl;
				cout << "Importe: " << importe << endl;
				cout << "Descuento: " << descuento << endl;
				cout << "Base imponible: " << baseImponible << endl;
				cout << "Impuesto: " << impuesto << endl;
				cout << "Total: " << total << endl;			
				break;
			case 2:
				cout << "Opcion 2" << endl;
				break;
			case 3:
				cout << "Opcion 3" << endl;
				break;														
		}
		
		cout << endl;
		system("pause");
	} while(op != 3);
	cout << endl;
	cout << "Fin del programa, chau." << endl;
	cout << endl;
	
	// Fin
	system("pause");
	return 0;
}
