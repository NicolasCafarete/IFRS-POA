programa
{
	
	funcao inicio()
	
{
	
		inteiro constante, idade, idadesomada
		real media
		
		
		constante = 0
		idadesomada = 0
		
		enquanto (constante <= 11){

		constante = constante + 1
		escreva("Digite a idade do jogador: ")
		leia(idade)

		idadesomada = idade + idadesomada

		
		}
		
		
		media = idadesomada / constante
		escreva("A média de idade dos jogadores é: ", media)


	}
 }