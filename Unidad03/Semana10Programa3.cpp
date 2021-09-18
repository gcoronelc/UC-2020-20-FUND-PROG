#include <iostream>
using namespace std;

int cont = 0, may, men, dato;   // declaracion global
char rpta;

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
	cout<<"\nEl mayor es:\t" << may <<"\n";
	cout<<"\nEl menor es:\t" << men <<"\n";
}

void MayorMenor()
{
	do{
		cout<<"\nIngrese valor:\t";
		dato = leedatoe();
		
		cont = cont + 1;  // cont++;
		
		if(cont == 1)
		{
			may = dato;
			men = dato;		
		}
		else
			if(dato > may)
				may = dato;
			else
				if(dato < men)
					men = dato;
	
		do{
			cout<<"\nDesea ingresar otros numero? (Ss - Nn):\t";
			rpta = leedatoc();
			
			if(rpta != 'S' && rpta != 's' && rpta != 'N' && rpta != 'n')
				cout<<"\nERROR. Vuelva a ingresar S o s o N o n.\n";
			
		}while(rpta != 'S' && rpta != 's' && rpta != 'N' && rpta != 'n' );
		
	}while(rpta == 'S' || rpta == 's');
	
	Mostrar();
}

int main()
{
	MayorMenor();
	
	return 0;	
}



