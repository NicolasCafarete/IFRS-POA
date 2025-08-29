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
  
    Nome: Nicolas Goncalves
    Exercício: 
    Escreva um programa que leia o nome e a idade do usuário e retorne uma mensagem indicando se o usuário é maior de idade ou não.  
    Vamos considerar 18 anos completos.
    Ex: "FULANO é maior de idade" ou "FULANO é Menor de idade"
    
   */
   
   
   char nome[100];
   int idade;
   
   
   printf("Digite seu nome: ");
   gets(nome);
   
   printf("Digite sua idade: ");
   scanf("%d", &idade);
   
   if (idade >= 18){
       printf("%s é Maior de idade.", nome);
   } else {
       printf("%s é Menor de idade.", nome);
   }
}