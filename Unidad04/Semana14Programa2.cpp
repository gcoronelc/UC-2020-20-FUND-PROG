void hanoi(int n,char org,char aux,char des)
{ 
  if(n == 1)
	
	cout<< org << " -> " << des;
  
  else
      {
         hanoi(n-1,org,des,aux);
         
		 cout<< org << " -> " << des;	
         
		 hanoi(n-1,aux,org,des);
      }
}

int main ()
{
	int n;
	
	do{		
		cout<<"Ingrese cantidad de discos: ";
		cin>>n;
		if(n<=0)
			cout<<"ERROR. Vuelva a ingresar >=0.";
	}while(n<=0);
	
	hanoi(n, 'A', 'B', 'C');	
}




