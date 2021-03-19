#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std; 

typedef struct produto{
int cod, qtde;
char nome[50];
float preco;
}produto;

main() {
	int posicao;
	float maior=0;
	produto prod[50];
	for(int i=0;i<50;i++){
		cout<<"Informe os dados do produto "<<i+1<<": "<<endl;
		cout<<"Codigo: ";
		cin>>prod[i].cod;
		cout<<"Nome: ";
		cin>>prod[i].nome;
		cout<<"Preco: ";
		cin>>prod[i].preco;
		if(prod[i].preco > maior){
			posicao=i;
			maior=prod[i].preco;
		}
		cout<<"Quantidade em Estoque: ";
		cin>>prod[i].qtde;
		cout<<endl;
	}
	cout<<endl<<"Dados do Item Mais Caro: "<<endl;
	cout<<"Codigo: "<<prod[posicao].cod<<endl;
	cout<<"Nome: "<<prod[posicao].nome<<endl;
	cout<<"Preco: "<<prod[posicao].preco<<endl;
	cout<<"Quantidade em Estoque: "<<prod[posicao].qtde<<endl;
	

}

 
 

