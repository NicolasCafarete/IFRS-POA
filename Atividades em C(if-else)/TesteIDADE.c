/*
    Nome: Nicolas Gonçalves Cafarete
    ATIVIDADE: 
    Escreva um programa que, dada a idade de um nadador, classifique-o em uma das seguintes categorias:
    
    infantil A = 5 - 7 anos
    infantil B = 8-10 anos
    juvenil A = 11-13 anos
    juvenil B = 14-17 anos
    adulto = 18 anos ou mais

*/



int main()
{
    
    int idade;
    
  printf("Digite sua idade: ");
  scanf("%d", &idade);
  
  
    if (idade <5){
        printf("Você é um BEBÊ!");
  } else if (idade >= 5 && idade <= 7){
      printf("Pela sua idade, você é considerado INFANTIL A");
  } else if (idade >= 8 && idade <= 10){
      printf("Pela sua idade, você é considerado INFANTIL B");
  } else if (idade >= 11 && idade <=13){
      printf("Pela sua idade, você é considerado JUVENIL A");
  } else if(idade >= 14 && idade <= 17){
      printf("Pela sua idade, você é considerado JUVENIL B");
  } else {
      printf("Pela sua idade, você é considerado ADULTO");
  }
  
  
    
}