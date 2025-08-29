algoritmo "semnome"
var


   aluno: caractere
   idade: inteiro

inicio

      escreval("Digite o nome do aluno: ")
      leia(aluno)
      escreval("Digite a idade do aluno: ")
      leia(idade)

      escreval(" ")
      
      escolha idade
      caso 0,1,2,3
           escreval("Aluno: ", aluno)
           escreval("Categoria: Bebê")
      caso 4,5,6,7,8,9,10
           escreval("Aluno: ", aluno)
           escreval("Categoria: Criança")
      caso 11,12,13,14,15,16,17
           escreval("Aluno :", aluno)
           escreval("Categora: Adolescente")
      outrocaso
           escreval("Aluno: ", aluno)
           escreval("Categoria: Adulto")
      fimescolha






fimalgoritmo