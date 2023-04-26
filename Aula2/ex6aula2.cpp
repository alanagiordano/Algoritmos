#include<stdio.h>

/*Escreva um algoritmo para ler o salário mensal atual de um funcionário e o percentual de reajuste.
 Calcular e escrever o valor do novo salário. */

 int main()
 {
    float salario_atual,porcentagem, percentual, reajuste, salario_novo;

    printf("Qual e o salario? ");
    scanf("%f", &salario_atual);

    printf("Qual o percentual de reajuste?(em porcentagem) ");
    scanf("%f", &porcentagem);

    percentual=porcentagem/100;
    reajuste=salario_atual*percentual;
    salario_novo=salario_atual + reajuste;

    printf("O novo salario e igual a %.2f", salario_novo);
    return 0;
 }
 