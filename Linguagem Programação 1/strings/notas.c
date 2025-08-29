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
    Faça um programa que leia as notas de 2 provas e um trabalho e o numero de faltas.
    Calcule a média aritmética. E indique o conceito: 
    A para (8.0 a 10),
    B para (7.0 a 7.9),
    C para (6.0 a 6.9),
    D para (0.0 a 5.9)
    E para reprovado por faltas. Maior ou igual a 5.
    Escreva "Reprovado" ou "Aprovado".
   
   */
   
   
   float n1, n2, trab, media;
   int faltas;
   char notafinal[2], resultado[10];

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a nota do trabalho: ");
    scanf("%f", &trab);
    printf("Digite o numero de faltas: ");
    scanf("%d", &faltas);
    
    media = (n1+n2+trab)/3;
    
    if (faltas >= 5){
        strcpy(notafinal, "E");
        strcpy(resultado, "Reprovado");
    } else
        strcpy(resultado, "Aprovado");
    
    if (media >= 8 && media <= 10)
        strcpy(notafinal, "A");
    else 
    if (media >= 7 && media <= 7.9)
        strcpy(notafinal, "B");
    else if (media >= 6 && media <= 6.9)
        strcpy(notafinal, "C");
    else {
        strcpy(notafinal, "D");
        strcpy(resultado, "Reprovado");
    }
    
    

    printf("A nota final do aluno foi %s, com total de %d faltas, e então foi %s. ", notafinal, faltas, resultado);






}