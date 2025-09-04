/*

    Autor: Nicolas Gonçalves Cafarete
    Proposta:
    Mostre o código dos produtos, seu nome e valor.
    Peça pro usuário informar o código do produto e a quantidade.
    Ao final, mostre o item, quantidade e valor total.

*/

#include <stdio.h>
#include <string.h>

int main()
{
    
    
    int codigo, qnt;
    float valor;
    char item[100];
    
    
    printf("===========================================\n");
    printf("| Código | Especificação       | Preço    |\n");
    printf("===========================================\n");
    printf("| 100    | Cachorro Quente     | R$10,00  |\n");
    printf("| 101    | Bauru Simples       | R$13,00  |\n");
    printf("| 102    | Bauru c/ ovo        | R$16,00  |\n");
    printf("| 103    | Hamburguer          | R$14,00  |\n");
    printf("| 104    | Cheeseburguer       | R$16,00  |\n");
    printf("| 105    | Refrigerante        | R$4,00   |\n");
    printf("===========================================\n");
    
    printf("Digite o código do item: ");
    scanf("%d", &codigo);
    
    switch (codigo){
        
        case 100:
        strcpy(item, "Cachorro Quente");
        valor = qnt * 10;
        break;
        case 101:
        strcpy(item, "Bauru Simples");
        valor = qnt * 13;
        break; 
        case 102:
        strcpy(item, "Bauru c/ovo");
        valor = qnt * 16;
        break;
        case 103:
        strcpy(item, "Hamburguer");
        valor = qnt * 14;
        break;
        case 104:
        strcpy(item, "Cheeseburguer");
        valor = qnt * 16;
        break;
        case 105:
        strcpy(item, "Refrigerante");
        valor = qnt * 4;
        break;
        default:
        printf("Código ou Quantidade inválida! Tente novamente.");
        return 1;
    }
    
    printf("Digite a quantidade: ");
    scanf("%d", &qnt);
    
    if (qnt < 100 || qnt > 105) {
    printf("\nQuantidade inválida! Tente novamente.\n");
    return 1;
    }
    
    printf("--------------------------");
    printf("\nItem pedido: %s", item);
    printf("\n Quantidade: %d", qnt);
    printf("\n Valor TOTAL: %.2f", valor);
    

    return 0;
}