Algoritmo "semnome"
//Escreva uma fun��o que receba dois n�meros inteiros x e y.
//Essa fun��o deve verificar se x � divis�vel por y.
//No caso positivo, a fun��o deve retornar 1, caso contr�rio zero.
//Escreva tamb�m um algoritmo para testar tal fun��o
//exibindo uma mensagem de acordo com o resultado
Var
   n1,n2,teste:inteiro
funcao divisivel (x,y:inteiro):inteiro
inicio
   se (x%y=0) entao
      retorne 1
   senao
      retorne 0
   fimse
fimfuncao

Inicio
escreva("digite x:")
leia (n1)
escreva("digite y:")
leia (n2)
teste<-divisivel(n1,n2)
se (teste=1) entao
escreva("� divisivel")
senao
escreva("n�o � divisivel")
fimse
Fimalgoritmo