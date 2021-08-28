Proceso Programa01
	// Variables
	Definir a, b como Entero;
	Definir mensaje Como Caracter;
	// Leer datos
	Escribir "Valor de A";
	Leer a;
	Escribir "Valor de B";
	Leer b;
	// Proceso 
	Si a=b Entonces
		mensaje <- "Son iguales";
	SiNo
		Si a > b Entonces
			mensaje <- Concatenar("El número mayor es: ", ConvertirATexto(a) );
		SiNo
			mensaje <- Concatenar("El número mayor es: ", ConvertirATexto(b) );
		Fin Si
	Fin Si
	// Reporte
	Escribir mensaje;
FinProceso
