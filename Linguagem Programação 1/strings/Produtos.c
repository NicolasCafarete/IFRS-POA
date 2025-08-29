

#include <stdio.h>
#include <string.h>

int main()
{
    /*
    Autor: Nicolas Gonçalves
    Proposta:
    O cardápio de uma lancheria é o seguinte:
    Código do lanche | Especificação   | Preço unitário
    100              | Cachorro quente | 5.00
    101              | Bauru simples   | 6.00
    102              | Bauru c/ovo     | 8.00
    103              | Hamburger       | 5.00
    104              | Cheeseburger    | 7.50
    105              | Refrigerante    | 2.00
    Escrever um programa que leia o código do item pedido, a quantidade e calcule o valor a ser pago por aquele lanche.

    Considere que a cada execução somente será calculado um item.

    Ao final escreva um resumo do pedido:
    Ex
    " Pedido: 5 unidade(s) de Cachorro Quente"
    "Total R$25,00"
    
    */
    
    int unidades, codigo;
    float total, preco;
    char produto[100];
    
    printf("=========================================\n");
    printf("  Codigo |      Especificacao   | Preco \n");
    printf("=========================================\n");
    printf("   100   |  Cachorro Quente     |  5.00\n");
    printf("   101   |  Bauru Simples       |  6.00\n");
    printf("   102   |  Bauru c/ Ovo        |  8.00\n");
    printf("   103   |  Hamburger           |  5.00\n");
    printf("   104   |  Cheeseburger        |  7.50\n");
    printf("   105   |  Refrigerante        |  2.00\n");
    printf("=========================================\n");

    
    printf("Digite o código do pedido: ");
    scanf("%d", &codigo); // Digitei 100, eai?
    
    printf("Digite as unidades: ");
    scanf("%d", &unidades);
    
    
    if (codigo == 100){
        strcpy(produto, "Cachorro Quente");
        preco = 5;
    } else if (codigo == 101){
        strcpy (produto, "Bauro Simples");
        preco = 6;
    } else if (codigo == 102){
        strcpy (produto, "Bauro c/ovo");
        preco = 8;
    } else if (codigo == 103){
        strcpy (produto, "Hamburger");
        preco = 5;
    }else if (codigo == 104){
        strcpy (produto, "Cheeseburger");
        preco = 7.50;
    }else if (codigo == 105){
        strcpy (produto, "Refrigerante");
        preco = 2;
    }
    
    total = unidades * preco;
    
    
    printf("Pedido: %d unidade(s) de %s.", unidades, produto);
    printf("\n Total: %2.fR$", total);
    
    
    
    
    
    
    
    
    
    

    return 0;
}