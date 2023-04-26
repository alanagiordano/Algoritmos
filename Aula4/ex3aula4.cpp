#include<stdio.h>

/* Faça um programa que leia um número inteiro N e depois imprima os N 
primeiros números naturais ímpares (sem usar comando condicional).*/

int main()
{
    int n,i,count;

    printf("digite um numero inteiro: ");
    scanf("%d", &n);

    for ( i = 1, count = 0 ; count < n; i+=2)
    {
        printf("%d", i);
        count++;
    }
    

    printf("\n");
    return 0;
}
