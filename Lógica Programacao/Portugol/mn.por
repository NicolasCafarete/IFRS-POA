programa {
  funcao inicio() {
    inteiro m, n, contador, soma

   
    soma = 0
    contador = 0

    escreva("Digite o valor de m (inteiro positivo): ")
    leia(m)
    escreva("Digite o valor de n (quantidade de números a somar): ")
    leia(n)

    
    enquanto (contador < n) {
        soma = soma + (m + contador)  
        contador = contador + 1       
    }

    escreva("A soma dos ", n, " inteiros consecutivos a partir de ", m, " é: ", soma)
  }
}



