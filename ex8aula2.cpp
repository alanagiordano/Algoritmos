#include<stdio.h>

/* Uma revendedora de carros usados paga a seus funcionários vendedores um salário fixo por mês,
 mais uma comissão também fixa para cada carro vendido e mais 5% do valor das vendas por ele efetuadas. 
 Escrever um algoritmo que leia o número de carros por ele vendidos, o valor total de suas vendas, 
 o salário fixo e o valor que ele recebe por carro vendido. 
Calcule e escreva o salário final do vendedor.*/

int main()
{
    float carros_vendidos, comissao, totalcomissao, totalvendas, vendasefetuadas,  salario, total;

    printf("Qual o salario fixo? ");
    scanf("%f", &salario);

    printf("Qual o valor da comissao fixa? ");
    scanf("%f", &comissao);

    printf("Qual a quantidade de carros vendidos? ");
    scanf("%f", &carros_vendidos);

    printf("Qual o valor total de suas vendas? ");
    scanf("%f", &totalvendas);

    totalcomissao=comissao*carros_vendidos;
    vendasefetuadas=totalvendas*0.05;

    total=salario+totalcomissao+vendasefetuadas;

    printf("O salario final e igual a %.2f", total);
    return 0;
}
