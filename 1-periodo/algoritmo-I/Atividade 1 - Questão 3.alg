Algoritmo "semnome"
//Escreva um algoritmo que calcule o sal�rio de um trabalhador.
//Ser�o solicitados do usu�rio o valor da hora trabalhada,
//n�mero de horas e o % de desconto do INSS.
//Ao final, imprima o sal�rio l�quido do trabalhador. (Valor 0,2 ponto)
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