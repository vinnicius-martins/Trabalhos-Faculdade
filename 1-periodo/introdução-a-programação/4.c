#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l1,l2,l3;
    printf("Digite os lados do triangulo:\n");
    printf ("Lado 1:");
    scanf ("%d", &l1);
    printf ("Lado 2:");
    scanf ("%d", &l2);
    printf("Lado 3:");
    scanf ("%d", &l3);
    if (l1<l2+l3 && l2<l1+l3 && l3<l1+l2){
        if (l1==l2 && l2==l3)
            printf ("E possivel formar um triangulo equilatero");
        else if (l1==l2 && l1!=l3 || l1==l3 && l1!=l2 || l2==l3 && l2!=l1)
            printf ("E possivel formar um triangulo isosceles");
        else if (l1!=l2 && l1!=l3 && l2!=l3)
            printf ("E possivel formar um triangulo escaleno");
    }
    if (l1>=l2+l3 || l2>=l1+l3 || l3>=l1+l2)
        printf("Nao e possivel formar um triangulo");
    return 0;
}
