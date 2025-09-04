programa {
  funcao inicio() {
    
    real salario, somaSalarios, mediaSalarios
    inteiro filhos, somaFilhos, mediaFilhos, maiorSalario, contador

    
    somaSalarios = 0
    somaFilhos = 0
    maiorSalario = 0
    contador = 0

    escreva("Digite o salário do habitante (negativo para sair): ")
    leia(salario)

    enquanto (salario >= 0) {  
        escreva("Digite o número de filhos: ")
        leia(filhos)

      
        somaSalarios = somaSalarios + salario
        somaFilhos = somaFilhos + filhos

        
        se (salario > maiorSalario) {
            maiorSalario = salario
        }

        contador = contador + 1  

        escreva("Digite o salário do próximo habitante (negativo para sair): ")
        leia(salario)
    }

   
    se (contador > 0) {
        mediaSalarios = somaSalarios / contador
        mediaFilhos = somaFilhos / contador

        escreva("\nMédia do salário da população: ", mediaSalarios, "\n")
        escreva("Média do número de filhos: ", mediaFilhos, "\n")
        escreva("Maior salário: ", maiorSalario, "\n")
    } senao {
        escreva("\nNenhum dado foi informado.\n")
    }
  }
}


