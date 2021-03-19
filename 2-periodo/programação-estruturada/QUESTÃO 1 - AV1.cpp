#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
using namespace std;

char texto[25];
//a) Escreva uma função que conte o número de consoantes de uma string passada como parâmetro.
int Consoantes(char s[]){
	int tam=strlen(s),c=0;
	for(int i;i<tam;i++){
		if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u')c++;
	}
	return c;
}

main(){
	cin>>texto;
	cout<<"numero de consoantes: "<<Consoantes(texto);	
}
