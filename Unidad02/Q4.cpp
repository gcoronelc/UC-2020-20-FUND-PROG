#include <iostream>
using namespace std;

int main(){
	
	int n = 1;
	
	while(n<=10){
		cout << char(96+n) << ".- Bievenidos al mundo de los bucles!!!" << endl;
	  n++;
	}
	
	/*
	while(n>0)
		cout << n-- << ".- Bievenidos al mundo de los bucles!!!" << endl;
	*/
	
	// Fin
	system("pause");
	return 0;
}	
