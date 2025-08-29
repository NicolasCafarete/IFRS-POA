algoritmo "Cardápio"
var

   codigo, qnt, total: real

inicio

      escreval("------------- TABELA ------------")
      escreval("|CÓDIGO|    PRODUTO   |   VALOR   |")
      escreval("|  01  | Hamburguer   |  R$ 23,00 |")
      escreval("|  02  | CheesBurguer |  R$ 25,80 |")
      escreval("|  03  | Fritas       |  R$ 19,90 |")
      escreval("|  04  | Refrigerante |  R$  5,50 |")
      escreval("|  05  | MilkShake    |  R$ 12,90 |")
      escreval("----------------------------------")


      escreval("Digite o código do produto: ")
      leia(codigo)
      se (codigo <= 0) ou (codigo >=7) entao
      escreval("Código inválido!")
      senao
      escreval("Digite quantidade: ")
      leia(qnt)

         escolha codigo
         caso 01
         total := qnt * 23
         escreval("Você escolheu", qnt, " de Hamburguer(s).")
         escreval("TOTAL:", total," R$")
         caso 02
         escreval("Você escolheu", qnt, " de CheesBurguer(s).")
         escreval("TOTAL:", total," R$")
         caso 03
         escreval("Você escolheu", qnt, " de Fritas.")
         escreval("TOTAL:", total," R$")
         caso 04
         escreval("Você escolheu", qnt, " de Refrigerante.")
         escreval("TOTAL:", total," R$")
         caso 05
         escreval("Você escolheu", qnt, " de MilkShake(s).")
         escreval("TOTAL:", total, " R$")
         outrocaso
         escreval("Opção inválida! Tente novamente!")
         fimescolha

      fimse



fimalgoritmo