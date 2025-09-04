/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
int main()
{
    
    int codigo;
    float salario;
    char funcao[100], aumento[100];
    
    
    printf("=====================================\n");
    printf("| Código | Cargo        | Aumento   |\n");
    printf("=====================================\n");
    printf("| 1      | Escriturário | 30%%      |\n");
    printf("| 2      | Secretário   | 25%%      |\n");
    printf("| 3      | Caixa        | 20%%      |\n");
    printf("| 4      | Gerente      | 10%%      |\n");
    printf("| 5      | Diretor      | 0%%       |\n");
    printf("=====================================\n");
    
    printf("Digite o código da sua função: ");
    scanf("%d", &codigo);
    
    printf("Digite seu sálario atual: ");
    scanf("%f", &salario);
    
   if (scanf("%f", &salario) != 1) {
    printf("Valor inválido! Digite apenas números.\n");
    return 1; 
    }
    
    switch (codigo){
        
        case 1:
        strcpy(funcao, "Escriturário");
        strcpy(aumento, "30");
        salario = salario + (salario*0.30);
        break;
        case 2:
        strcpy(funcao, "Secretário");
        strcpy(aumento, "25");
        salario = salario + (salario*0.25);
        break;
        case 3:
        strcpy(funcao, "Caixa");
        strcpy(aumento, "20");
        salario = salario + (salario*0.20);
        break;
        case 4:
        strcpy(funcao, "Gerente");
        strcpy(aumento, "10");
        salario = salario + (salario*0.10);
        break;
        case 5:
        strcpy(funcao, "Diretor");
        default:
        printf("Código inválido! Tente novamente.");
        return 1;
    }
    
    
    printf("De acordo com sua função: %s, você teve um aumento de %s%%. ",funcao, aumento);
    printf("\nNovo Sálario: %.2f", salario);
    
    
    
    
    
    
    
    return 0;
}