/*

    Nome: Nicolas Gonçalves
    Assunto: Atividades "prinf" e "scanf"
    
    EXERCICIO 1: Conversos reais para dolar 

*/



int main()
{


    float reais, dolar, conversor, cotacaor;

    cotacaor = 0.18;


    printf("=======================================");
    printf("\n|                                   |");
    printf("\n| CONVERSOR DE REAIS PARA DOLAR      |");
    printf("\n|                                   |");
    printf("\n=====================================");


    printf("\n\nDigite sua grana em R$(reais): ");



    scanf("%f", &reais);
    conversor = reais * cotacaor;


    printf("De acordo com a cotação do dolar atual (1 R$ --> %.2f USD$), você possui: %.2f USD$", cotacaor, conversor);

return 0;
}