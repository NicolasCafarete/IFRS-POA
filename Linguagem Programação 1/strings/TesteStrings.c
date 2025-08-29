/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
int main()
{
    /* 
    Nome: Nicolas Gonçalves
    Exercício:
    Escreva um programa que:
    - leia duas strings;
    - compare as duas: informe se as duas são iguais ou diferentes entre si;
    - indique a capacidade de cada variável string
    - informe o espaço usado pelo conteúdo em cada string.
    - Concatenar as duas strings. Antes de concatenar verifique se a string de destino tem espaço suficiente para a concatenação.
    - Caso o espaço não seja suficiente, escreva uma mensagem de erro.
 
    */
    
    
    char str1[100], str2[100];
    
    
    printf("Digite a primeira String: ");
    gets(str1);
    printf("Digite a segunda String: ");
    gets(str2);
    
    if (strcmp(str1, str2)== 0)
        printf("As duas strings são IGUAIS! ");
    else 
    printf("As duas strings são DIFERENTES! ");
    
    printf("\nA capacidade da PRIMEIRA string é: %d", sizeof(str1));
    printf("\nA capacidade da SEGUNDA string é: %d", sizeof(str2));
    printf("\nO espaço usado pela PRIMEIRA string é: %d", strlen(str1));
    printf("\nO espaço usado pela SEGUNDA string é: %d", strlen(str2));
    
    if (strlen(str1) + strlen(str2) < sizeof(str1))
    printf("\nContatenando as duas Strings fica: %s", strcat(str1, str2));
    else
    printf("\nNão há espaço suficiente para contatenar as duas Strings!");
    
    
    
    
    
    
    
    
    return 0;
}