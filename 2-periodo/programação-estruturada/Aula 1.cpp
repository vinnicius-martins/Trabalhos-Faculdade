#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>
using namespace std;

main(){
    char nome[25];
    cout<<"nome: ";cin>>nome;
    int tamanho=strlen(nome);
    cout<<"tamanho do nome: "<<tamanho<<endl;
    int letraa=0, letrai=0;
    for (int i=0; i<tamanho;i++){
        if (nome[i]=='a' || nome[i]=='A'){
			letraa++;
		}else
		if (nome[i]=='i' || nome[i]=='I'){
			letrai++;
		}
    }
    cout<<"quantidade de a: "<<letraa<<endl;
    cout<<"quantidade de i: "<<letrai;
    
    
    
    

}
