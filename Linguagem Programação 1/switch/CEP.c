/*
    Autor: Nicolas Gonçalves Cafarete
    Proposta:
    Perguntar o CEP de destino, e informar para qual Região
    ele deve ser enviado, de acordo com essa tabela:
    
    Primeiro Dígito do CEP	Enviar para: 
    0, 1, 2, 3	Sudeste (SP, RJ, ES, MG)
    4	Região 4 (BA, SE)
    5	Região 5 (PE, AL, PB, RN)
    6	Região 6 (CE, PI, MA, PA, AP, AM, RR, AC )
    7	Região 7 (DF, GO, TO, MT, RO, MS)
    8 ou 9 	Sul (PR, SC, RS)
*/

#include <stdio.h>

int main()
{
    
    char cep;
    
    printf("Digite seu CEP: ");
    cep = getchar();
    
    switch (cep) {
        
        case '0':
        case '1':
        case '2':
        case '3':
        printf("Enviar para: Região SUDESTE (SP,RJ,ES,MG)");
        break;
        case '4':
        printf("Enviar para: Região 4 (BA, SE)");
        break;
        case '5':
        printf("Enviar para: Região 5 (PE, AL, PB, RN)");
        break;
        case '6':
        printf("Enviar para: Região 6 (CE, PI, MA, PA, AP, AM, RR, AC)");
        break;
        case '7':
        printf("Enviar parhttps://www.onlinegdb.com/online_c_compiler#tab-stdina: Região 7 (DF, GO, TO, MT, RO, MS");
        break;
        case '8':
        case '9':
        printf("Enviar para: Região SUL(PR, CS, RS)");
        break;
        default:
        printf("\nCEP inválido ou não consta no banco de dados! Tente novamente!");
    }
    
    
    
    
    
    
    
    
    return 0;
}