Algoritmo "semnome"
//Escreva um algoritmo que calcule o salário de um trabalhador.
//Serão solicitados do usuário o valor da hora trabalhada,
//número de horas e o % de desconto do INSS.
//Ao final, imprima o salário líquido do trabalhador. (Valor 0,2 ponto)
Var
   ht,nh,desc,sb,sl:real
Inicio
      escreva("digite o valor da hora trabalhada:")
      leia(ht)
      escreva("digite o numero de horas:")
      leia (nh)
      escreva("digite a % de desconto do INSS:")
      leia(desc)
      sb<-ht*nh
      sl<- sb-(sb*desc)/100
      escreva("salario liquido: ",sl)

Fimalgoritmo