#include <stdio.h>
#include <stdlib.h>

int main()
{
    int raio;
    float area, comprimento;
    printf("DIGITE O RAIO:\n");
    scanf("%d",&raio);

    area = 3.14*pow(raio,2);
    printf("A AREA %.2f\n",area);

    comprimento= 2*3.14*raio;
    printf("O COMPRIMENTO %.2f \n",comprimento);

    return 0;
}
