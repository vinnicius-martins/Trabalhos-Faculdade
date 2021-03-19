#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int Recursiva(int n){
	if(n==0)
		return 1;
	else
		return n*Recursiva(n-1);
	
}

main(){
	int x;
	cout<<"Numero: "; cin>>x;
	cout<<"Fatorial: "<< Recursiva(x);
	
}
