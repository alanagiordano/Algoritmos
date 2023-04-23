#include <stdio.h>

/*Faça um algoritmo que leia um número positivo e imprima seus divisores. Exemplo: 
Os divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66*/

int main() {
    int num, i;

    printf("digite um numero positivo: ");
    scanf("%d", &num);

    printf("os divisores do numero %d sao: ", num);
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}