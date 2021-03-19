Algoritmo "semnome"
//leia os limites inferior e superior de um intervalo e
//imprimir todos os números ímpares no intervalo aberto e seu somatório
//(UTILIZE O PARA).
//Suponha que os dados digitados são para um intervalo decrescente
Var
   li,ls,c,soma:inteiro
Inicio
   soma<-0
   escreva("digite o limite inferior: ")
   leia(li)
   escreva("digite o limite superior: ")
   leia(ls)
   escreva("numeros impares no intervalo: ")
   para c de ls ate li passo -1 faca
      se(c<>ls) e (c<>li) entao
         se(c%2<>0) entao
            escreva(c)
            soma<-soma+c
         fimse
      fimse
   fimpara
   escreval ("")
   escreva("soma dos numeros impares: ",soma)



Fimalgoritmo