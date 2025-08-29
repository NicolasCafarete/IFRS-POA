algoritmo "Empresa"
var

   salario, novosalario, diferenca : real
   cargo: inteiro

inicio


   escreval("Informe seu sálario: ")
   leia(salario)
   escreval(" ")

   se (salario <= 0)entao
      escreval("Valor inválido!")
   senao
      escreval("GERENTE = (1)"," ENGENHEIRO = (2)", " TECNICO = (3)", " OUTRO = (4)")
      escreval("Informe seu cargo: ")
      leia(cargo)
      escreval(" ")
         se (cargo <> 1) e (cargo <> 2) e (cargo <> 3) e (cargo <> 4) entao
            escreval("Cargo inválido!")
         senao
            escolha cargo
            caso 1
               novosalario := salario + (salario*10)/100
               diferenca := novosalario - salario
            caso 2
               novosalario := salario +(salario*20)/100
               diferenca := novosalario - salario
            caso 3
               novosalario := salario + (salario*30)/100
               diferenca := novosalario - salario
            outrocaso
               novosalario := salario + (salario*40)/100
               diferenca := novosalario - salario
               fimescolha
               escreval("-------------------------------------")
               escreval("Seu Sálario antigo é de: ", salario)
               escreval("Seu novo sálario é de: ", novosalario, " R$")
               escreval("A diferença entre seu novo sálario e o antigo é: ", diferenca, "R$")
      fimse
   fimse



fimalgoritmo