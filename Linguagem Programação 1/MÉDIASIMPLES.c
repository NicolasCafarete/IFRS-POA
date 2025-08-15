/*

    Nome: Nicolas Gonçalves
    Assunto: Atividades "prinf" e "scanf"
    
    EXERCICIO 1: Peça 3 notas e faça a média simples.

*/



int main()
{

    float valor1, valor2, valor3, media;


    printf("Escreva a primeira nota: ");
    scanf("%f", & valor1);

    printf("Escreva a segunda nota: ");
    scanf("%f", &valor2);

    printf("Escreva a terceira nota: ");
    scanf("%f", &valor3);

    media = (valor1+ valor2+ valor3)/3;

    printf("A média das notas é: %f", media);

return 0;
 }