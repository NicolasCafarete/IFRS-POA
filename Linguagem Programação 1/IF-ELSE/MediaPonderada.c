/*
    Nome: Nicolas Gonçalves Cafarete
    ATIVIDADE: 
    Leia 04 (quatro) notas de um aluno, a primeira tem peso 1, a segunda peso 2, a terceira peso 3, a quarta peso 4.
    Calcule a média e informe se o aluno foi aprovado ou não.
    Usar 'else'. Caso a nota seja menor que 7 ele será reprovado.

*/



int main()
{
    
    
    float nota1, nota2, nota3, nota4, media;
    
    printf("Digite as 4 notas: \n");
    scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);
    
    media = (nota1 + (nota2 * 2) + (nota3 * 3) + (nota4 * 4)) / 10;
    
    if (media == 10){
        printf("Parabéns, sua média foi de %.2f, logo, você está APROVADO!!", media);
    } else if (media >=7){
        printf("Parabéns, sua média foi de %.2f, logo, você está APROVADO!!", media);
    } else {
        printf("Que coisa... sua média foi de %.2f, e não atingiu a média para aprovação, você está REPROVADO.", media);
    }
    
    
    
    
}