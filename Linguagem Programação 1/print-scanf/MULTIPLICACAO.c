/*

    Nome: Nicolas Gonçalves
    Assunto: Atividades "prinf" e "scanf"
    
    EXERCICIO 1: Peça 3 valores e multiplique-os.

*/


    int main()
{


    int valor1, valor2, valor3, multiplicacao;

    printf("Escreva o primeiro valor: ");
    scanf("%d", &valor1);

    printf("Escreva o segundo valor: ");
    scanf("%d", &valor2);

    printf("Escreva o segundo valor: ");
    scanf("%d", & valor3);
    
    multiplicacao = (valor1 * valor2 * valor3);

    printf("O resultado da multiplicação dos 3 números é: %d", multiplicacao);




return 0;

}