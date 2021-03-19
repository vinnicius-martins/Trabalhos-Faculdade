#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
using namespace std;

typedef struct{
	char nome[50],end[100],tel[10];
	int idade;
}Contato;
Contato cadastro[100];
int i=0;

void Adicionar(){ //Adiciona uma entrada na agenda com o nome, idade, telefone e e-mail de uma pessoa
	system("cls");
	if(i<100){
		cout<<"NOME: ";cin>>cadastro[i].nome;
		cout<<"IDADE : ";cin>>cadastro[i].idade;
		cout<<"ENDERECO : ";cin>>cadastro[i].end;
		cout<<"TELEFONE: ";cin>>cadastro[i].tel;
		i++;
	}else{
		cout<<"SISTEMA CHEIO!";
		system("pause");
	}
}
void Pesquisar(){ //Pesquisar pelo nome de um usuário. Exiba todas as informações de pessoas com o nome pesquisado
	system("cls");
	char nome[50];
	int qntd=0;
	if(i>0){
		cout<<"NOME PARA PESQUISA: ";cin>>nome;
		for(int j=0;j<i;j++){
			if (strcmp(nome,cadastro[j].nome)==0){
				qntd++;
				cout<<"NOME: "<<cadastro[j].nome<<endl;
				cout<<"IDADE: "<<cadastro[j].idade<<endl;
				cout<<"ENDERECO: "<<cadastro[j].end<<endl;
				cout<<"TELEFONE: "<<cadastro[j].tel<<endl;
				cout<<"--------------------------------"<<endl;
			}	
		}
		if(qntd==0)cout<<"O NOME NAO FOI ENCONTRADO NA AGENDA"<<endl;
		system("pause");
	}else{
		cout<<"SISTEMA VAZIO"<<endl;
		system("pause");
	}
}
void Exibir(){ //Exiba todas as informações de pessoas da agenda eletrônica.
	system("cls");
	if(i>0){
		for(int j=0;j<i;j++){
				cout<<"NOME: "<<cadastro[j].nome<<endl;
				cout<<"IDADE: "<<cadastro[j].idade<<endl;
				cout<<"ENDERECO: "<<cadastro[j].end<<endl;
				cout<<"TELEFONE: "<<cadastro[j].tel<<endl;
				cout<<"--------------------------------"<<endl;
		}	
		system("pause");
	}else{
		cout<<"SISTEMA VAZIO"<<endl;
		system("pause");
	}
}	
main () {
	int op;
	do{
		system("cls");
		cout<<"AGENDA ELETRONICA"<<endl<<"[1] ADICIONAR ENTRADA"<<endl<<"[2] PESQUISAR ENTRADA"<<endl<<"[3] EXIBIR"<<endl<<"[0] SAIR"<<endl<<"OPCAO: ";
		cin>>op;
		switch(op){
			case 1: Adicionar(); break;
			case 2: Pesquisar(); break;
			case 3: Exibir(); break;
			case 0: break;
			default: system("cls");cout<<"OPCAO INVALIDA"<<endl;system("pause");
		}
	}while(op!=0);
	system("cls");
	cout<<"AGENDA FINALIZADA COM SUCESSO";
}
