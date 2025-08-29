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
    Escreva um programa que cria uma string, peça para o usuário digitar uma palavra.
    Se a palavra digitada for "senha secreta", escreva a mensagem: "senha correta", senão escreva "senha incorreta".
    Usar strcmp para comparar. combinar com sentença if/else 
   
   */
   
   char senha[20];
   
   puts("Digite a senha: ");
   gets(senha);
   
   if (strcmp(senha, "senha secreta") == 0){
       printf("Senha correta! Liberado");
   } else {
       printf("Senha incorreta! Tente novamente.");
   }
}