Algoritmo "semnome"
// leia a idade de uma pessoa e informar a sua classe eleitoral.
// N�o eleitor (abaixo de 16 anos)
// Eleitor obrigat�rio (entre 18 e 65 anos)
// Eleitor facultativo (entre 16 e 17 e maior de 65 anos)
Var
   idade:inteiro
Inicio
   escreva("digite sua idade:")
   leia(idade)
   se (idade<16) entao
      escreva("N�o eleitor")
   fimse
   se (idade>=16) e (idade<18) entao
      escreva("Eleitor facultativo")
   fimse
   se(idade>65) entao
      escreva("Eleitor facultativo")
   fimse
   se(idade>=18) e (idade<=65) entao
      escreva("Eleitor obrigat�rio")
   fimse


Fimalgoritmo