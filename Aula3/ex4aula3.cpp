#include<stdio.h>

/*Faça um programa que mostre ao usuário um menu com quatro opções de operações matemáticas (as operações básicas, por exemplo). 
O usuário escolhe uma das opções, e o seu programa pede dois valores numéricos e realiza a operação, mostrando o resultado.  */

int main()
{
    float num1,num2,soma,subtracao,multiplicacao,divisao;
    char x;

    printf("Digite o primeiro valor: ");
    scanf("%f", &num1);
    printf("Digite o segundo valor: ");
    scanf("%f", &num2);

    soma=num1+num2;
    subtracao=num1-num2;
    multiplicacao=num1*num2;
    divisao=num1/num2;

    printf("Observe as opcoes: \n ");
    printf("a-soma\n");
    printf("b-subtracao\n");
    printf("c-multiplicacao\n");
    printf("d-divisao\n");
    printf("Escolha a opcao de acordo com a operacao que desejar: ");
    scanf("%s", &x);
    

    switch (x){
    case 'a':
        printf("A soma entre os dois numero e igual a %.2f", soma);
        break;
    case 'b':
        printf("A subtracao e igual a %.2f", subtracao);
        break;
    case 'c':
        printf("A multiplicacao e igual a %.2f", multiplicacao);
        break;
    case 'd':
        printf("A divisao e igual a %.2f", divisao);
        break;
    default:
        printf("INVALIDO");
    }
    return 0;
}
