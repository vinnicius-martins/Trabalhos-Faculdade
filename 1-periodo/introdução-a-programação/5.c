#include <stdio.h>
#include <stdlib.h>

int main()
{
   int idade;
    printf ("Digite a sua idade:\n");
    scanf ("%d", &idade);
    if (idade<0)
        printf ("INVALIDA");
    else if (0<=idade && idade<=12)
        printf ("CRIANCA");
    else if(13<= idade && idade<18)
        printf ("ADOLESCENTE");
    else if(idade>=18)
        printf ("ADULTO");
    return 0;
}
