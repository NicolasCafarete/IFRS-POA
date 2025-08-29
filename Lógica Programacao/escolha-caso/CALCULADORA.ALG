algoritmo "Calculadora"
var


   opcao: caractere
   n1,n2: real

inicio

   escreval("---------------------------")
   escreval("|                         |")
   escreval("|       CALCULADORA       |")
   escreval("|                         |")
   escreval("---------------------------")
   
   

   escreval("Digite o primeiro número: ")
   leia(n1)
   escreval("Agora digite o segundo número: ")
   leia(n2)
   escreval("Qual operação deseja fazer?(+,-,/,*) ")
   leia(opcao)


   escolha opcao
   caso "+"
      escreval("A soma dos dois numeros é: ", n1 + n2)
   caso "-"
      escreval("A subtração dos dois numeros é: ", n1- n2)
   caso "/'
      escreval("A divisão dos dois numeros é: ", n1/n2)
   caso "*"
      escreval("A multiplicacao dos dois numeros é: ", n1*n2)
   outrocaso
            escreval("Opcao invalida!")
   fimescolha

fimalgoritmo