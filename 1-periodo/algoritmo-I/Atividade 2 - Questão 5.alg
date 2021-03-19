Algoritmo "semnome"
//Escreva uma função que receba dois números inteiros x e y.
//Essa função deve verificar se x é divisível por y.
//No caso positivo, a função deve retornar 1, caso contrário zero.
//Escreva também um algoritmo para testar tal função
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
escreva("é divisivel")
senao
escreva("não é divisivel")
fimse
Fimalgoritmo