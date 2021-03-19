Algoritmo "semnome"
//Escreva um algoritmo que receba um número do teclado einformar se
//ele é divisível por 8, por 5, por 2 ou se não é divisível por nenhum destes.
Var
   n:real
Inicio
   escreva("digite um numero:")
   leia(n)
   se(n%8<>0) e (n%5<>0) e (n%2<>0) entao
      escreva("não é divisivel por 8, 5 ou 2")
   senao
      se (n%8=0) entao
         escreval("divisivel por 8: sim")
      senao
         escreval("divisivel por 8: não")
      fimse
      se (n%5=0) entao
         escreval("divisivel por 5: sim")
      senao
         escreval("divisivel por 5: não")
      fimse
      se (n%2=0) entao
         escreval("divisivel por 2: sim")
      senao
         escreval("divisivel por 2: não")
      fimse
   fimse

Fimalgoritmo