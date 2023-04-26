#include <stdio.h>

/*Elabore um programa que faça a leitura de vários números inteiros até que se digite 
um número negativo. O programa tem de retornar o maior e o menor número lido*/

int main() {
    int num, i, maior = -99999999, menor = 99999999;
    for (i = 0; i >= 0;) {
        printf("digite um numero: ");
        scanf("%d", &num);
        if (num < 0) {
            break;
        }
        if (num > maior) {
            maior = num;
        }
        if (num < menor) {
            menor = num;
        }
    }
    printf("maior numero: %d\n", maior);
    printf("menor numero: %d\n", menor);
    return 0;
}
