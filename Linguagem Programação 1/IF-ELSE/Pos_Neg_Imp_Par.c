/*
    Nome: Nicolas Gonçalves Cafarete
    ATIVIDADE: 
    Faça um programa que leia um nº inteiro.
    Mostre uma mensagem indicando se este número é par ou ímpar, e se é positivo ou negativo.
    Ex: 'O número 2 é par e é positivo'.
*/



int main()
{
    
    int numero;
    
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    
    
    if (numero % 2 == 0 && numero >= 0){ //numero par e positivo
        printf("O número %d é PAR e é POSITIVO!", numero);
    } else if (numero % 2 != 0 && numero >= 0){ //numero impar e positivo
        printf("O número %d é ÍMPAR e é POSITIVO!", numero);
    } else if (numero % 2 == 0 && numero < 0){ //numero par e negativo
        printf("O número %d é PAR e é NEGATIVO!", numero);
    } else {
        printf("O número %d é ÍMPAR e NEGATIVO!", numero);
    }

}