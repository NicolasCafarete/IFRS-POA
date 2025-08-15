/*

    Nome: Nicolas Gonçalves
    Assunto: Atividades "prinf" e "scanf"
    
    EXERCICIO 7: Leia o preço unitário de uma joia, a quantidade de joias e calcule o total gasto pelo cliente.
    obs: A Joalheria está fazendo aniversário e resolveu premiar o primeiro cliente do dia devolvendo a ele o valor da compra em dobro.

*/



int main()
{


    float precojoia, totaljoia, presente; 
    int qntdjoia; 
    
    printf("\n=======================");
    printf("\n|      JOIA RARA      |");
    printf("\n=======================");
    
    printf("\nBom dia! Quantas joias você levará hoje? ");
    scanf("%i", &qntdjoia); 
    printf("\nPerfeito! Qual o valor unitario das joias? ");
    scanf("%f", &precojoia); 

    totaljoia = precojoia * qntdjoia;

    presente = totaljoia * 2;

    printf("\nTotal da compra: R$ %.2f", totaljoia);

    printf("\nPARABÉNS! Você foi nosso PRIMEIRO cliente do dia, como comemoração do aniversário da loja, você receberá um extorno do dobro do valor gasto com suas jóias!");
    printf("Você teve um extorno de: %.2f R$", presente);
    
return 0;
}