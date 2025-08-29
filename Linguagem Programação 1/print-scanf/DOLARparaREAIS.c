/*

    Nome: Nicolas Gonçalves
    Assunto: Atividades "prinf" e "scanf"
    
    EXERCICIO 1: Conversos reais para dolar 

*/


int main()
{


    float reais, dolar, conversor, cotacaod;
    cotacaod = 5.42;

    printf("===================================");
    printf("\n|                                 |");
    printf("\n|  CONVERSOR DE REAL PARA DOLAR   |");
    printf("\n|                                 |");
    printf("\n===================================");

    printf("\n\nDigite sua grana em USD$(dolares): ");

    scanf("%f", &dolar);


    conversor = dolar * cotacaod;

    printf("De acordo com a cotação do dolar atual (1 USD$ ---> %.2f R$), você possui: %.2f R$", cotacaod, conversor);
    
return 0;
}