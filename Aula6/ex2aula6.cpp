#include <stdio.h>

//%x imprimi o inteiro em hexadecimal
//%c imprimi o caracter 
//%d imprimi o valor inteiro

/*Fazer um programa que use funções para imprimir a tabela ASCII (código decimal, código hexa, caracter)
 para os códigos de 0 a 127. */

void printASCII(int i) {
    printf("%d\t%x\t%c\n", i, i, i);
}

int main() {
    int i;

    printf("Decimal\tHexa\tCaracter\n");

    for (i = 0; i < 128; i++) {
        printASCII(i);
    }

    return 0;
}