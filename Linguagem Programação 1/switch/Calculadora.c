/*

    Autor: Nicolas Gonçalves Cafarete
    Proposta: Calculadora

*/

#include <stdio.h>

int main()
{
    
    char opcao;
    float n1, n2;
    
    printf("====================================\n");
    printf("          CALCULADORA               |\n");
    printf("====================================\n");
    printf("| + | Somar                         |\n");
    printf("| - | Subtrair                      |\n");
    printf("| * | Multiplicar                   |\n");
    printf("| / | Dividir                       |\n");
    printf("====================================\n");
    printf("Escolha uma opção: ");
    scanf("%c", &opcao);
    
    printf("Digite o primeiro número: ");
    scanf("%f", &n1);
    printf("Digite o segundo número: ");
    scanf("%f", &n2);
    
    switch (opcao){
        
        case '+':
        printf("A soma dos valores é: %.2f", n1+n2);
        break;
        case '-':
        printf("A subtração dos valores é: %.2f", n1-n2);
        break; 
        case '*':
        printf("A multiplicação dos valores é: %.2f", n1*n2);
        break;
        case '/':
        printf("A divisão dos valores é: %.2f", n1/n2);
        break;
        default:
        printf("Opção inválida! Tente novamente.");
    }
    
    
    


    return 0;
}