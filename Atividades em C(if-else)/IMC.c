/*

    Nome: Nicolas Gonçalves Cafarete
    ATIVIDADE: 
    Calcule o IMC. De acordo com (b), o IMC=peso em kilos dividido pela altura (em metros) ao quadrado.
    Leia a altura (em metros) e o peso em kilos de uma pessoa, calcule o IMC e indique a situação de acordo com a tabela em (a).
    (Abaixo do peso, peso ideal, sobrepeso, obesidade I, II, III)
    
*/



int main()
{
    
    float altura, peso, IMC;
    
    printf("Digite sua altura(em MESTROS ex: 1.72): ");
    scanf("%f", &altura);
    printf("Digite seu peso(KG): ");
    scanf("%f", &peso);
    
    IMC = peso / (altura * altura);
    
    printf("Seu IMC é: %f\n", IMC);
    
    /*
    
    Baixo peso muito grave: abaixo de 16 kg/m².
    Baixo peso grave: entre 16 e 16,99 kg/m².
    Baixo peso: entre 17 e 18,49 kg/m².
    Peso normal: entre 18,50 e 24,99 kg/m².
    Sobrepeso: entre 25 e 29,99 kg/m².
    Obesidade grau I: entre 30 e 34,99 kg/m².
    Obesidade grau II: entre 35 e 39,99 kg/m².
    Obesidade grau III (obesidade mórbida): maior que 40 kg/m².
    
    */
    
    
    if (IMC < 16){
        printf("De acordo com seu IMC %.2f, você tem BAIXO PESO! Situação MUITO GRAVE! PROCURE UM MÉDICO IMEDIANTAMENTE!!", IMC);
    } else if (IMC >= 16 && IMC <= 16.99){
        printf("De acordo com seu IMC %.2f, você tem BAIXO PESO! Situação GRAVE! PROCURE UM MÉDICO!!", IMC);
    } else if (IMC >= 17 && IMC <= 18.49){
        printf("De acordo com seu IMC %.2f, você tem BAIXO PESO! Sugiro que procure um médico.", IMC);
    } else if (IMC >= 18.50 && IMC <= 24.99){
        printf("De acordo com seu IMC %.2f, você tem PESO NORMAL!", IMC);
    } else if (IMC >= 25 && IMC <= 29.99){
        printf("De acordo com seu IMC %.2f, você tem SOBREPESO! Sugiro cuidar da sua alimentação e se exercitar bastante!", IMC);
    } else if (IMC >= 30 && IMC <= 34.99){
        printf("De acordo com seu IMC %.2f, você tem OBESIDADE GRAU 1! PROCURE UM MÉDICO!", IMC);
    } else if(IMC >= 35 && IMC <= 39.99){
        printf("De acordo com seu IMC %.2f, você tem OBESIDADE GRAU 2! PROCURE UM MÉDICO!!", IMC);
    } else {
        printf("De acordo com seu IMC %.2f, você tem OBESIDADE GRAU 3! Situação de OBESIDADE MÓRBITA! PROCURE UM MÉDICO IMEDIANTAMENTE!!", IMC);
    }
    
    
    
}