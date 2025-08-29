/*
    Nome: Nicolas Gonçalves Cafarete
    ATIVIDADE: 
    leia 03 (três) notas de um aluno, calcule sua média.
    Caso a média seja menor que 7 ele será reprovado.
    Apresente a média calculada e a situação (aprovado ou reprovado).

*/



int main()
{
    
    
    float nota1, nota2, nota3, media;
    
    printf("Digite as 3 notas: \n");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    
    media = (nota1 + nota2 + nota3) / 3;
    
    if (media == 10){
        printf("Parabéns, sua média foi de %.2f, logo, você está APROVADO!!", media);
    } else if (media >=7){
        printf("Parabéns, sua média foi de %.2f, logo, você está APROVADO!!", media);
    } else {
        printf("Que coisa... sua média foi de %.2f, e não atingiu a média para aprovação, você está REPROVADO.", media);
    }
    
    
    
    
}