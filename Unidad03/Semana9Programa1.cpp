#include<iostream>
using namespace std;

void  modulo(int a, int &b)
{
   a++;
   
   b++;
   
   cout<<"\n";
   cout<<"El valor de a es: " << a;
   cout<<"\n";
   cout<<"El valor de b es: " << b;
   cout<<"\n";
}

int main()
{  
	int x, y;
     
    x=1; 
    
    y=1;
    
	modulo(x,y);
    
    cout<<"\n";
	cout<<"El valor de x es: "<<x;
	cout<<"\n";
    cout<<"El valor de y es: "<<y;
    cout<<"\n";

return 0;
} 



