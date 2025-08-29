algoritmo "semnome"
var

   opcao: caractere



inicio

         mudacor("branco", "frente")

         // Linha 1
         escreva("|-------|")
         escreva("|-------|")
         escreval("|-------|")
         // Linha 2
         escreva("|   A   |")
         escreva("|   B   |")
         escreval("|   C   |")
         // Linha 3
         escreva("|.      |")
         escreva("|.      |")
         escreval("|.      |")
         // Linha 4
         escreva("|       |")
         escreva("|       |")
         escreval("|       |")
         // Linha 5
         escreva("|-------|")
         escreva("|-------|")
         escreval("|-------|")
         
         
         
         escreval("Escolha uma das portas: (a, b ou c)")
         leia(opcao)
         opcao := maiusc(opcao)
         
         limpatela
         
         escolha opcao
         caso "A"
         mudacor("azul", "frente")
         escrevaL("|-------|")
         escrevaL("|   A   |")
         escrevaL("|.      |")
         escrevaL("|       |")
         escrevaL("|-------|")
         escreval("")
         escreval("Você escolheu a porta A!")
         escreval("Mas ela tinha uma surpresa desagradável...")
         escreval("UM QUARTO CHEIO DE COBRAAAS!")
         escreval("Você foi envenenado x_x")
         
         caso "B"
         mudacor("amarelo", "frente")
         escrevaL("|-------|")
         escrevaL("|   B   |")
         escrevaL("|.      |")
         escrevaL("|       |")
         escrevaL("|-------|")
         escreval("")
         escreval("Você escolheu a porta B!")
         escreval("Mas ela tinha uma surpresa desagradável...")
         escreval("BRINCADEIRA! Você ganhou um TESLA!")
         escreval("        ______")
         escreval("       /|_||_\\`.__")
         escreval("      (   _    ____|")
         escreval("      =`-(_)--(_) '")



         caso "C"
         mudacor("vermelho", "frente")
         escrevaL("|-------|")
         escrevaL("|   C   |")
         escrevaL("|.      |")
         escrevaL("|       |")
         escrevaL("|-------|")
         escreval("")
         escreval("Você escolheu a porta C!")
         escreval("CUIDAOOOOOOOOOOO!")
         escreval("O QUARTO ESTA PEGANDO FOGO!")
         escreval("Você virou carvão x_x")

         outrocaso
         escreval("Opção INVÁLIDA! Tente novamente!")
         fimescolha










fimalgoritmo