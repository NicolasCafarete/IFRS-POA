programa {
  funcao inicio() {
    inteiro n, i, j  
    escreva("Digite um valor para n: ")
    leia(n)  

    i = 1  
    enquanto (i <= n) {  
        escreva("\nTabuada do ", i, ":\n")  

        j = 1  
        enquanto (j <= 10) {  
            escreva(i, " x ", j, " = ", i * j, "\n")  
            j = j + 1  
        }

        i = i + 1 
    }
  }
}


