#include<stdio.h>

/*Faça um programa que leia 10 inteiros e imprima sua média.*/

int main()
{
    int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,media;

    printf("digite o 1 numero: ");
    scanf("%d", &n1);
    printf("digite o 2 numero: ");
    scanf("%d", &n2);
    printf("digite o 3 numero: ");
    scanf("%d", &n3);
    printf("digite o 4 numero: ");
    scanf("%d", &n4);
    printf("digite o 5 numero: ");
    scanf("%d", &n5);
    printf("digite o 6 numero: ");
    scanf("%d", &n6);
    printf("digite o 7 numero: ");
    scanf("%d", &n7);
    printf("digite o 8 numero: ");
    scanf("%d", &n8);
    printf("digite o 9 numero: ");
    scanf("%d", &n9);
    printf("digite o 10 numero: ");
    scanf("%d", &n10);

    media=(n1+n2+n3+n4+n5+n6+n7+n8+n9+n10)/10;

    printf("A media e igual a %d", media);
    return 0;
}
