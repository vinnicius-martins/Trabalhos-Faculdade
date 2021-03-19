#include <stdio.h>
#include <stdlib.h>
int main(){

   int i, j, aux, num[]={15,30,16,11,9,27};

   
   for(i=1;i<6;i++){
      aux=num[i];
      j=i-1;
      while((aux<num[j])&&(j>=0)){
         num[j+1]=num[j];
         j=j-1;
      }
      num[j+1]=aux;
   }

   printf("Elementos ordenados: ");
   for(i=0;i<6;i++)
      printf(" %d",num[i]);

   
}
