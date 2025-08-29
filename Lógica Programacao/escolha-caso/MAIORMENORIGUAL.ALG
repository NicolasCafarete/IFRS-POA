algoritmo "MaiorMenorIgual"

// Nome: Nicolas Goncalves
// Exercicio:
// Receba dois valores me informe se é tal é o maior, menor ou são iguais.


var

   A, B, maiornumero  : inteiro

inicio

      escreval("Digite um numero: ")
      leia(A)
      escreval("Digite outro numero: ")
      leia(B)
      
      maiornumero := 0
      
      se (A > B) entao
         maiornumero := A
         escreval("O maior numero digitado foi", maiornumero)
         senao
           se (A < B) entao
           maiornumero := B
           escreval("O maior numero digitado foi", maiornumero)
              senao
                   se (A = B) entao
                   escreval("Os numeros digitados são iguais.")
              fimse
           fimse
      fimse
      
      
                      
      







fimalgoritmo