algoritmo "MédiasCalculator"
var


   v1,v2,v3, opcao, media: real

inicio

      escreval("Digite o primeiro valor: ")
      leia(v1)
      escreval("Digite o segundo valor: ")
      leia(v2)
      escreval("Digite o terceiro valor: ")
      leia(v3)
      
      escreval("Agora, escolha qual média gostaria de executar: ")
      escreval("---------------------------------")
      escreval("Média Aritmética Simples:     (1)")
      escreval("Média Aritmética Ponderada:   (2)")
      escreval("---------------------------------")
      leia(opcao)
      
      escolha opcao
      caso 1
      media := v1+v2+v3/3
      escreval("A média simples dos numeros digitados é: ", media)
      caso 2
      media := (v1 *3) + (v2 * 3) + (v3 *4)/10
      escreval("A média Ponderada dos numeros digitados é:", media)
      outrocaso
      escreval("Opção inválida! Tente novamente!")
      fimescolha



fimalgoritmo