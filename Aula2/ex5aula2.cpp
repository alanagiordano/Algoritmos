#include<stdio.h>

/*Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e 
escreva a idade dessa pessoa expressa apenas em dias. 
Considerar ano com 365 dias e mês com 30 dias.*/

int main()
{
    int anos,meses,dias,anos_dias,meses_dias,idade_dias;

    printf("Digite sua idade expressando em anos, meses e dias\n");
    printf("Anos: ");
    scanf("%d", &anos);
    printf("Meses: ");
    scanf("%d", &meses);
    printf("Dias: ");
    scanf("%d", &dias);

    anos_dias=anos*365;
    meses_dias=meses*30;
    idade_dias=anos_dias + meses_dias + dias;

    printf("A idade em dias e %d", idade_dias);
    
    return 0;
}
