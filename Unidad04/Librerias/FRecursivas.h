#include<iostream>
using namespace std;

int factorial(int n)
{
	if(n==0)
		return 1;
	else 
		return n*factorial(n - 1);	
}

int potencia(int b, int e)
{
	if(e==0)
		return 1;
	else 
		return b* potencia(b, e - 1);
	
}

int multiplica(int a, int b)
{
	if(a == 0 || b == 0)
		return 0;
	else 
		if(b == 1)
			return a;
		else
			return a + multiplica(a, b - 1);
	
}

int fibonaci(int n)
{
	if(n==1 || n==2)
	{
		return 1;
	}
	else
	{
		return fibonaci(n-1)+fibonaci(n-2);
	}	
}

int division(int a, int b)
{
	if(b>a)
		return 0;
	
	else
		return division(a-b,b)+1;
}

int suma(int a, int b)
{
 if(b==0)
   return a;
 else 
 	if(a==0)
         return b;
    else
        return 1+suma(a,b-1);
    
}

int resta(int a, int b)
{
    if(a>b)
        return 1+resta(a,b+1);
    else
        if(b>a)
            return -1+resta(a+1,b);
        else
            return 0;
         
}
