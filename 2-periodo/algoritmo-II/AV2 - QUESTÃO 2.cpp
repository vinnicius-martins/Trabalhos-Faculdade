#include <stdio.h>
#include <stdlib.h>
int main(){
	int m[3][3],soma[3]={0,0,0};
	printf("Digite o elemento:\n");
	for (int i=0; i<3; i++ ){
		for (int j=0; j<3; j++ ){
  			printf("Linha %d, Coluna %d: ",i+1,j+1);
     		scanf ("%d", &m[i][j]);
     		soma[j]+=m[i][j];
  		}
	}
	printf("\nMatriz Gerada:\n");
	for (int i=0; i<3; i++ ){
		for (int j=0; j<3; j++ ){
  			printf("| ");
			printf("%d",m[i][j]);
			printf("| ");
  		}
  		printf("\n");
	}
	printf("\nMatriz Soma das Colunas:\n");
	printf("[");
	for (int i=0; i<3; i++ )printf("%d ",soma[i]);
	printf("]");
	
}
