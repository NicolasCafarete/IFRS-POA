/*

    Nome: Nicolas Gonçalves
    Assunto: Atividades "prinf" e "scanf"
    
    EXERCICIO 9: Leia o número do funcionário, seu sálario atual, valor do INPC e o índice de produtividade.
    obs: mostre esses valores no final, INPC = 75%.

*/ 

#include <stdio.h>

int main()
{
    int nmrfuncionario;
    float salario, inpc, indiceprodutividade, aumento;
    
    printf("Numero do funcionário: ");
    scanf("%d", &nmrfuncionario);

    printf("Salario atual do funcionário: ");
    scanf("%f", &salario);
    
    printf("Valor do INPC: (0-100%%)");
    scanf("%f", &inpc);


    printf("Indice de produtividade: (0 100%%)");
    scanf("%f", &indiceprodutividade);
    
    
    aumento = (salario* 0.75 *inpc)/100+ (salario * indiceprodutividade)/100;
    salario = salario + aumento;



    printf("\no funcionário %d vai receber um aumento de R$%.2f, logo seu novo salario sera de: R$%.2f", nmrfuncionario, aumento, salario);
    
 return 0;
}