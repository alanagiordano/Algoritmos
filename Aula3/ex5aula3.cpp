#include<stdio.h>

/*Leia um valor de ponto flutuante com duas casas decimais. Este valor representa um valor monetário. 
A seguir, calcule o menor número de notas e moedas possíveis no qual o valor pode ser decomposto. 
As notas consideradas são de 100, 50, 20, 10, 5, 2. 
As moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01. A seguir mostre a relação de notas necessárias.*/

int main()
{
    double valor;
    int notas100, notas50, notas20, notas10, notas5, notas2, moedas1real, moedas50, moedas25, moedas10, moedas5, moedas1cent;

    // le o valor monetario
    printf("Digite o valor monetário (com duas casas decimais): ");
    scanf("%lf", &valor);

    // conversão para centavos
    int centavos = (int)(valor * 100);

    // cálculo do número de notas e moedas
    notas100 = centavos / 10000;
    centavos = centavos % 10000;

    notas50 = centavos / 5000;
    centavos = centavos % 5000;

    notas20 = centavos / 2000;
    centavos = centavos % 2000;

    notas10 = centavos / 1000;
    centavos = centavos % 1000;

    notas5 = centavos / 500;
    centavos = centavos % 500;

    notas2 = centavos / 200;
    centavos = centavos % 200;

    moedas1real = centavos / 100;
    centavos = centavos % 100;

    moedas50 = centavos / 50;
    centavos = centavos % 50;

    moedas25 = centavos / 25;
    centavos = centavos % 25;

    moedas10 = centavos / 10;
    centavos = centavos % 10;

    moedas5 = centavos / 5;
    centavos = centavos % 5;

    moedas1cent = centavos;

    // exibicao do resultado
    printf("Notas de 100: %d\n", notas100);
    printf("Notas de 50: %d\n", notas50);
    printf("Notas de 20: %d\n", notas20);
    printf("Notas de 10: %d\n", notas10);
    printf("Notas de 5: %d\n", notas5);
    printf("Notas de 2: %d\n", notas2);
    printf("Moedas de 1 real: %d\n", moedas1real);
    printf("Moedas de 50 centavos: %d\n", moedas50);
    printf("Moedas de 25 centavos: %d\n", moedas25);
    printf("Moedas de 10 centavos: %d\n", moedas10);
    printf("Moedas de 5 centavos: %d\n", moedas5);
    printf("Moedas de 1 centavo: %d\n", moedas1cent);

    
    return 0;
}
