#include<stdio.h>

int main()
{
    int valores[5], maior, menor;
   float media, soma = 0;

   for(int i = 1; i <= 5; i++){
        printf("Digite os numeros: ");
        scanf("%d", &valores[i]);
        soma += valores[i];
    }
    media = soma/5;
    printf("%.2f", media);

    maior = valores[0];
    menor = valores[0];

    for(int i = 0; i < 5; i++){
        if(valores[i] > maior){
            maior = valores[i];
        }
        if(valores[i] < menor){
            menor = valores[i];
        }
    }
    printf("Valores do Vetor: ");
    for(int i = 0; i < 5; i++){
        printf("%d\n", valores[i]);
    }
   printf("Maior valor: %d\n", maior);
   printf("Menor valor: %d\n", menor);
   printf("Media: %.2f", media);
    return 0;
}
