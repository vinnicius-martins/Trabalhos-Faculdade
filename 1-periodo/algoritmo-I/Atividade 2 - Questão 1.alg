Algoritmo "semnome"
// solicite a idade de várias pessoas (UTILIZE O REPITA).
// Informe o total de pessoas com menos de 25 anos e o
// total de pessoas com mais de 50 anos.
//termina quando idade for negativa (Não deve ser utilizada na contagem)
Var
c,idade,jovem,adulto:inteiro

Inicio
c<-0
jovem<-0
adulto<-0
repita
c<-c+1
escreva("Digite a idade da ",c,"ª pessoa:")
leia(idade)
se (idade<=25) e (idade>0) entao
jovem<-jovem+1
fimse
se (idade>=50) entao
adulto<-adulto+1
fimse
ate (idade<0)
escreval("Numero de pessoas com menos de 25 anos: ",jovem," pessoas.")
escreval("Numero de pessoas com mais de 50 anos: ",adulto," pessoas.")


Fimalgoritmo