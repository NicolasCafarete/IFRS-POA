/*

    Nome: Nicolas Gonçalves
    Assunto: Atividades "prinf" e "scanf"
    
    EXERCICIO 8: Nicolas sálario = 2000R$, Letícia sálario = 4000R$, vão dividir proporcionalmente o valor do condominio = 1000R$
    obs: Nicolas pagará 1/3, Letícia pagará 2/3.
    
*/



int main()
{


    float salario1, salario2, proporcao1, proporcao2, totalsalarios, aluguel, aluguel1, aluguel2;


    printf("================================");
    printf("\n| PROPORÇÃO PAGAMENTO ALUGUEL |");
    printf("\n==============================");




    printf("\nQual o primeiro salário?");
    scanf("%f", &salario1);

    printf("\nQual o segundo salário?");
    scanf("%f", &salario2);

    printf("\nQual o valor do alguel?");
    scanf("%f", &aluguel);


    totalsalarios = salario1 + salario2;


    proporcao1 = salario1/totalsalarios;

    proporcao2 = salario2/totalsalarios;


    aluguel1 = proporcao1 * aluguel;

    aluguel2 = proporcao2 * aluguel;
    
    printf("A pessoa que recebe %.2fR$ deverá pagar %.2f R$ de aluguel.", salario1, aluguel1);
    printf("\nJá pessoa que recebe %.2fR$ deverá pagar %.2f R$ de aluguel.", salario2, aluguel2);
    
return 0;
}