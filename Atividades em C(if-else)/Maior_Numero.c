/*
    Nome: Nicolas Gonçalves Cafarete
    ATIVIDADE: 
    Escreva um algoritmo que leia 3 números inteiros e mostre o maior deles.

*/


int main()
{
    
    int v1, v2, v3, maior;
    
  printf("Digite 3 valores inteiro: ");
  scanf("%d %d %d", &v1, &v2, &v3);
  
  if (v1 >= v2 && v1 >= v3){
        maior = v1;
  } else if(v2 >= v1 && v2 >= v3){
        maior = v2;
  } else {
        maior = v3;
  }
 
 
 printf("O maior numero digitado foi %d", maior);
  
    
}