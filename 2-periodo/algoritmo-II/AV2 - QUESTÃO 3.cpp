#include <stdio.h>
#include <stdlib.h>
int buscaNumero(int *vetor,int numero){
		for (int i=0;i<10;i++){
			if (vetor[i] == numero){
				return (i);
			}		
		}
	return (-1);
}
int main(){
	int vet[10],num;
	printf("Digite os 10 elementos do vetor: ");
	for (int i=0;i<10;i++){
		scanf("%d",&vet[i]);
	}
		
	printf("Digite o valor que deseja buscar:");
	scanf("%d",&num);

	int pos=buscaNumero(vet,num);
	
	if(pos>=0){
		printf("O valor %d foi encontrado na posicao %d do vetor!",num,pos+1);
	}else{
		printf("Nao foi possivel encontrar o valor %d no vetor.",num);
	}
	return 0;
}

