Algoritmo "semnome"
//procedimento que receba um n�mero inteiro e o imprima na forma extensa.
//para 1 a sa�da desejada � �Um�.
//A fun��o deve ser capaz de gerar o extenso dos n�meros de 1 at� 15, inclusive.
//Caso um n�mero n�o compat�vel o procedimento deve mostrar uma mensagem de erro.
//Crie um algoritmo que leia um valor inteiro e chame o procedimento
Var
    num:inteiro
procedimento extenso (n:inteiro)
inicio
escolha n
caso 1
escreva("um")
caso 2
escreva("dois")
caso 3
escreva("tres")
caso 4
escreva("quatro")
caso 5
escreva("cinco")
caso 6
escreva("seis")
caso 7
escreva("sete")
caso 8
escreva("oito")
caso 9
escreva("nove")
caso 10
escreva("dez")
caso 11
escreva("onze")
caso 12
escreva("doze")
caso 13
escreva("treze")
caso 14
escreva("quatorze")
caso 15
escreva("quinze")
outrocaso
escreva("numero invalido")
fimescolha
fimprocedimento
Inicio
     escreva("insira o numero:")
     leia (num)
     extenso(num)
Fimalgoritmo