#include<stdio.h>
#include<stdlib.h>

/* Faça um programa em que o usuário digite o custo de uma determinada mercadoria, em seguida, 
adiciona-se ao custo o valor do frete e despesas eventuais (também solicitadas pelo teclado). 
Para concluir, o programa pergunta qual o valor de venda e indica a percentagem de lucro da mercadoria*/

main(){
	float custo, frete,despesas,totalCustos, venda,lucro,porcentagem;
	printf("digite o valor de custo do produto: ");
	scanf("%f", &custo);
	printf("digite o valor do frete: ");
	scanf("%f", &frete);
	printf("digite o valor de despesas eventuais: ");
	scanf("%f", &despesas);
	
	totalCustos=custo+frete+despesas;
	printf("O valor total de custos e %.2f\n", totalCustos);
	
	printf("Qual o valor da venda?  ");
	scanf("%f", &venda);
	
	lucro=venda-totalCustos;
	printf("O lucro e igual a %.2f\n", lucro);

	porcentagem=(lucro*100)/venda;
	printf("A porcentagem de lucro e %.2f",porcentagem);

	return 0;
}

