#include<stdio.h>

/* Criar um algoritmo que informe a quantidade total de calorias de uma refeição a partir do usuário 
que deverá informar o prato, a sobremesa e a bebida (veja a tabela a seguir).
Enumere cada opção de prato, sobremesa e bebida.

Prato: 1 - vegetariano, 2 – Peixe, 3 – Frango, 4 – Carne;

Sobremesa: 1 – Abacaxi, 2 – Sorvete diet, 3 – Mouse diet, 4 – Mouse chocolate;

Bebida: 1 – Chá, 2 - Suco de laranja, 3 – Suco de melão, 4 – Refrigerante diet.*/ 

int main()
{
    int prato,sobremesa,bebida,valor;

    printf("PRATO: \n");
    printf("1-Vegetariano\n");
    printf("2-Peixe\n");
    printf("3-Frango\n");
    printf("4-Carne\n");
    printf("Escolha a opcao: ");
    scanf("%d", &prato);

    printf("SOBREMESA: \n");
    printf("1-Abacaxi\n");
    printf("2-Sorvete Diet\n");
    printf("3-Mouse Diet\n");
    printf("4-Mouse Chocolate\n");
    printf("Escolha a opcao: ");
    scanf("%d", &sobremesa);

    printf("BEBIDA: \n");
    printf("1-Cha\n");
    printf("2-Suco de laranja\n");
    printf("3-Suco de melao\n");
    printf("4-Refrigerante diet\n");
    printf("Escolha a opcao: ");
    scanf("%d", &bebida);

    switch (prato)
    {
    case 1:
        prato=180;
        break;
    case 2:
        prato=230;
        break;
    case 3:
        prato=250;
        break;
    case 4:
        prato=350;
        break;
    default:
        break;
    }

    switch (sobremesa)
    {
    case 1:
        sobremesa=75;
        break;
    case 2:
        sobremesa=110;
        break;
    case 3:
        sobremesa=170;
        break;
    case 4:
        sobremesa=200;
        break;
    default:
        break;
    }

    switch (bebida)
    {
    case 1:
        bebida=20;
        break;
    case 2:
        bebida=70;
        break;
    case 3:
        bebida=100;
        break;
    case 4:
        bebida=65;
        break;
    default:
        break;
    }

    valor=prato+sobremesa+bebida;
    printf("O valor em calorias e %d kcal", valor);
     return 0;
}
