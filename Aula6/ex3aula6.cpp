#include <stdio.h>

/*Fazer um programa  que lê o preço de um produto e inflaciona esse preço em 10% se ele for menor que 100 e em 
20% se ele for maior ou igual a 100. Utilize funções para construir o algoritmo.*/

float inflacionaPreco(float preco) {
    if (preco < 100.0) {
        return preco * 1.1;
    } else {
        return preco * 1.2;
    }
}

int main() {
    float preco, precoInflacionado;

    printf("Digite o preco do produto: ");
    scanf("%f", &preco);

    precoInflacionado = inflacionaPreco(preco);

    printf("Preco inicial: %.2f\n", preco);
    printf("Preco inflacionado: %.2f\n", precoInflacionado);

    return 0;
}