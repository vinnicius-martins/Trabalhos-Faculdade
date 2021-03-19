#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sal,aumento;
    const float perc=1.15;

    printf("Digite o seu salario:\n");
    scanf("%f", &sal);
    aumento= sal*perc;
    printf("Seu salario: R$%.2f \n", sal);
    printf("Seu salario com aumento: R$%.2f",aumento);

    return 0;
}
