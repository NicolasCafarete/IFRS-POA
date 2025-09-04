programa {
  funcao inicio() {


    inteiro nmr, positivo, negativo, zero
    inteiro cont
    positivo = 0
    negativo = 0
    cont = 0
    zero = 0


    enquanto (cont <= 50 ){

    escreva("Digite um numero: \n")
    leia(nmr)

    se (nmr > 0)
    positivo = positivo + 1
    senao se (nmr < 0)
    negativo = negativo + 1
    senao
    zero = zero + 1
    cont = cont + 1

    }

    escreva("A quantidade de numeros positivos digitados foi: ", positivo, "\n")
    escreva("A quantidade de numeros negativos digitados foi: ", negativo, "\n")
    escreva("A quantidade de zeros digitados foi: ", zero, "\n")


















    
  }
}
