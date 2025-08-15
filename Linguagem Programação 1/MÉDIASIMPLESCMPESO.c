/*

    Nome: Nicolas Gonçalves
    Assunto: Atividades "prinf" e "scanf"
    
    EXERCICIO 1: Peça 4 notas e faça a média simples.
    obs: A primeira nota com peso 1, a segunda com peso 2, a terceira com peso 3, a quarta com peso 4. 

*/



int main()
{

float valor1, valor2, valor3, valor4, media;


    printf("Escreva a primeira nota: ");
    scanf("%f", &valor1);

    printf("Escreva a segunda nota: ");
    scanf("%f", &valor2);

    printf("Escreva a terceira nota: ");
    scanf("%f", &valor3);

    printf("Escreva a quarta nota: ");
    scanf("%f", &valor4);



    media = (valor1*1 + valor2*2 + valor3*3 + valor4*4)/(1+2+3+4);

    printf("A média dos valores digitados é: %f", media);



return 0;
}