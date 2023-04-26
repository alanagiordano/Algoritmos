#include<stdio.h>

/*O custo de um carro novo ao consumidor é a soma do custo de fábrica com a porcentagem do distribuidor e
 dos impostos (aplicados ao custo de fábrica). Supondo que o percentual do distribuidor seja de 28% e os impostos de 45%, 
escrever um algoritmo para ler o custo de fábrica de um carro, calcular e escrever o custo final ao consumidor.*/

int main()
{
    float custo_fabrica,distribuidor,impostos,custo_final;

    printf("qual o custo de fabrica do carro? ");
    scanf("%f", &custo_fabrica);

    distribuidor=custo_fabrica*0.28;
    impostos=custo_fabrica*0.45;

    printf("O custo do distribuidor e %.2f", distribuidor);
    printf("O custo dos impostos e %.2f", impostos);

    custo_final=custo_fabrica+distribuidor+impostos;

    printf("O custo final do consumidor e %.2f", custo_final);
    return 0;
}
