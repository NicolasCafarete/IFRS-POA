programa {
  funcao inicio() {
    inteiro positivo, negativo
    real multi, nmr
    positivo = 0
    negativo = 0
    multi = 1

    enquanto (verdadeiro) {
        escreva("Digite um numero (0 para sair): ")
        leia(nmr)

        se (nmr == 0) {
            pare // encerra o loop
        }

        se (nmr > 0) {
            positivo = positivo + 1
        } senao {
            negativo = negativo + 1
        }

        multi = multi * nmr
    }

    escreva("A quantidade de numeros positivos digitados foi: ", positivo, "\n")
    escreva("A quantidade de numeros negativos digitados foi: ", negativo, "\n")
    escreva("A multiplicacao de todos os numeros digitados é: ", multi)
  }
}
