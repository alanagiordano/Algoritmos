#include<stdio.h>
#include<stdlib.h>

/*Escreva um programa que pergunte qual o raio de um círculo e imprima a sua área*/

main(){
	float pi=3.14,raio,area;
	printf("digite o raio do circulo: ");
	scanf("%f", &raio);
	printf("o pi e igual a 3.14\n");
	area=pi*raio*raio;
	printf("a area do circulo e igual a %.2f",area);
	return 0;
}