Algoritmo "semnome"
//Escreva um algoritmo que receba um n�mero do teclado einformar se
//ele � divis�vel por 8, por 5, por 2 ou se n�o � divis�vel por nenhum destes.
Var
   n:real
Inicio
   escreva("digite um numero:")
   leia(n)
   se(n%8<>0) e (n%5<>0) e (n%2<>0) entao
      escreva("n�o � divisivel por 8, 5 ou 2")
   senao
      se (n%8=0) entao
         escreval("divisivel por 8: sim")
      senao
         escreval("divisivel por 8: n�o")
      fimse
      se (n%5=0) entao
         escreval("divisivel por 5: sim")
      senao
         escreval("divisivel por 5: n�o")
      fimse
      se (n%2=0) entao
         escreval("divisivel por 2: sim")
      senao
         escreval("divisivel por 2: n�o")
      fimse
   fimse

Fimalgoritmo