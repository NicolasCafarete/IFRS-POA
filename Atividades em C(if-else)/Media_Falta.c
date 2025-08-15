/*
    Nome: Nicolas Gonçalves Cafarete
    ATIVIDADE: 
    Faça um programa que leia a média do aluno e seu numero de faltas.
    Se as faltas forem maior ou igual a 5, escreva 'reprovado por faltas'.
    Se a média for menor que 7, foi reprovado por média. Senão, escreva 'Parabéns! você foi aprovado'.

*/



int main()
{
    
    
    float nota1, nota2, nota3, nota4, media;
    int faltas;
    
    printf("Digite as 4 notas: \n");
    scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);
    
    printf("Digite seu numero de faltas: ");
    scanf("%d", &faltas);
    
    media = (nota1 + (nota2 * 2) + (nota3 * 3) + (nota4 * 4)) / 10;
    
    
    if (faltas >= 5) {
        printf("Você foi reprovado por FALTAS!");
    } else if (media < 7) {
        printf("Sua média foi de %.2f, porém não atingiu a média necessária para aprovação... Você está REPROVADO!", media);
    } else {
        printf("PARABÉNS! Você foi APROVADO!");
    }
    
    
    
    
    
}