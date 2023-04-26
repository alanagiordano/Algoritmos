#include<stdio.h>

/*Escreva um programa que leia um número inteiro, maior ou igual a zero, do usuário. 
Imprima o enésimo termo da sequência de Fibonacci. Essa sequência começa no termo de 
ordem zero, e, a partir do segundo termo, seu valor é dado pela soma dos dois termos 
anteriores. Alguns termos dessa sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34.*/

int main()
{
    int n, fib_ant1 = 0, fib_ant2 = 1, fib_atual;
    printf("Digite um numero inteiro maior ou igual a zero: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("0\n");
    } else if (n == 1) {
        printf("1\n");
    } else {
        for (int i = 2; i <= n; i++) {
            fib_atual = fib_ant1 + fib_ant2;
            fib_ant1 = fib_ant2;
            fib_ant2 = fib_atual;
        }
        printf("%d\n", fib_atual);
    }
    return 0;
}
