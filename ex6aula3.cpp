#include<stdio.h>

/*Escreva um algoritmo que leia um número e informe se ele é divisível por 5,
 por 3 ou por 2 ou se não é divisível por nenhum deles.*/

int main()
{
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero/5 && numero%5==0 && numero/3 && numero%3==0 && numero/2 && numero%2==0 )
    {
        printf("numero divisivel por 5,3 e 2");
    }else if (numero/5 && numero%5==0 && numero/3 && numero%3==0)
    {
        printf("numero divisivel por 5 e 3");
    }else if (numero/5 && numero%5==0 && numero/2 && numero%2==0)
    {
        printf("numero divisivel por 5 e 2");
    }else if (numero/2 && numero%2==0 && numero/3 && numero%3==0)
    {
        printf("numero divisivel por 2 e 3");
    }else if (numero/5 && numero%5==0)
    {
        printf("numero divisivel por 5\n");
    }else if (numero/3 && numero%3==0)
    {
        printf("numero divisivel por 3\n");
    }else if (numero/2 && numero%2==0)
    {
        printf("numero divisivel por 2\n");
    }else {
        printf("numero nao e divisivel por 5 ou 3 ou 2");
    }
    
    return 0;
}
