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
    Escreva um programa que leia o nome do usuário e informe quantos caracteres o nome ocupa (strlen)
    Informe a capacidade da variável com o comando (sizeof).
    
    */
    
    
    
    char nome[100];
    
    
    puts("--------------------------");
    puts("Informe seu nome: ");
    gets(nome);
    puts("--------------------------");
    printf("Seu nome ocupa %d caracteres.\n", strlen(nome));
    puts("--------------------------");
    printf("A variável tem uma capacidade de %d caracteres\n", sizeof(nome));
}