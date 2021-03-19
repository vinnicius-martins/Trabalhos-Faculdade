#include <stdio.h>
#include <stdlib.h>

int main()
{
    int anonasc,anoatual;
    int anos, meses, semanas, dias;
    printf("Digite o seu ano de nascimento:");
    scanf("%d",&anonasc);
    printf("Digite o ano atual:");
    scanf("%d",&anoatual);
    anos= anoatual-anonasc;
    meses=anos*12;
    semanas=meses*4;
    dias=semanas*7;
    printf("Sua idade em anos: %d\n",anos);
    printf("Sua idade em meses: %d\n",meses);
    printf("Sua idade em semanas: %d\n",semanas);
    printf("Sua idade em dias: %d\n",dias);

    return 0;
}
