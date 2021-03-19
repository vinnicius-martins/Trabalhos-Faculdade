#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,escolha;
    printf("1 Somar dois numeros\n");
    printf("2 Multiplicar dois numeros\n");
    printf("3 Subtrair dois numeros\n");
    printf("4 Dividir dois numeros\n");
    scanf("%d",&escolha);
    printf("Digite o primeiro numero:");
    scanf("%d",&n1);
    printf("Digite o segundo numero:");
    scanf("%d",&n2);
    switch(escolha){
        case 1:
            printf("A soma dos numeros %d e %d: %d",n1,n2,n1+n2);
            break;
        case 2:
            printf("A multiplicacao dos numeros %d e %d: %d",n1,n2,n1*n2);
            break;
        case 3:
            printf("A subtracao dos numeros %d e %d: %d",n1,n2,n1-n2);
            break;
        case 4:
            printf("A divisao dos numeros %d e %d: %d",n1,n2,n1/n2);
            break;
    }
    return 0;
}
