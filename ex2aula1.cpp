#include<stdio.h>
#include<stdlib.h>

/*Faça um programa que calcule a quantidade necessária de latas de tinta para pintar uma parede.
 O programa pergunta as medidas de largura e altura da parede em metros e escreve quantas latas de tinta serão 
 necessárias para pintá-la.
 Considere que o consumo de tinta é de 300 ml por metro quadrado e a quantidade de tinta por lata é de 2 litros.*/

main(){
	float largura,altura,area,consumo,latas;
	
	printf("qual e a largura?");
	scanf("%f", &largura);
	
	printf("qual e a altura?");
	scanf("%f", &altura);
	
	area=largura*altura;
	printf("A area e igual a %.2f metros quadrados\n",area);
	printf("\n");
	printf("o consumo de tinta e de 300ml por metro qudradado\n");
	printf("cada lata de tinta e de 2 litro ou 2000ml\n");
	printf("\n");
	consumo=area*300;
	printf("o consumo de tinta e de igual a %.2f\n",consumo);
	printf("\n");
	latas=consumo/2000;
	printf("a quantidade de latas e %.2f", latas);
	
	
	return 0;
}