#include <stdio.h>

int main() {
    int n, fib_ant1 = 0, fib_ant2 = 1, fib_atual;
    printf("Digite um número inteiro maior ou igual a zero: ");
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
