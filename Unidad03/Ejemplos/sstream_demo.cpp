#include <iostream>
#include <sstream> 
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	stringstream reporte; // Buffer
	
	reporte << "Hola." << endl << "Soy Gustavo." << endl;
	
	reporte.str(""); // Limpia el buffer
	
	reporte << "En que te puedo ayudar?" << endl;
	
	cout << reporte.str() << endl;
	
	
	// Fin
	system("pause");
	return 0;
}
