#include<stdio.h>

/*Escreva um algoritmo para ler as dimensões de um retângulo (base e altura), calcular e escrever a área do retângulo.*/

int main()
{
   float base,altura,area;

   printf("Qual a base do retangulo? ");
   scanf("%f", &base);

   printf("Qual a altura do retangulo? ");
   scanf("%f", &altura);

   area=base*altura;

   printf("A area do retangulo e igual a %.2f", area);
    return 0;
}
