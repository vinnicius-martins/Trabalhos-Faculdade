Algoritmo "semnome"
//receba números inteiros entre 0 e 10 (UTILIZE O ENQUANTO).
//Se o usuário digitar um número diferente, mostre a mensagem "Número Inválido"
//solicite um número novamente.
//Caso digite o número correto, mostre a contagem
//do 0 até o número digitado e finalize o programa.
Var
   n,c:inteiro
Inicio
   n<-11
   c<-0
   enquanto (n<0) ou (n>10) faca
      escreva("digite um numero de 1 a 10:")
      leia (n)
      se (n<0) e (n>10) entao
         escreval("numero invalido")
      fimse
   fimenquanto

   repita
      escreval(c)
      c<-c+1
   ate (c>n)



Fimalgoritmo