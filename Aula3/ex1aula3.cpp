#include<stdio.h>
#include<math.h>

/*Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
o número digitado ao quadrado e raiz quadrada do número digitado.*/

int main()
{
    float numero,quadrado;

    printf("Digite um numero: ");
    scanf("%f", &numero);

    if (numero >= 0)
    {
       quadrado=numero*numero;
        printf("Este numero ao quadrado e igual a %.2f \n", quadrado);
        printf("A raiz quadrada desse numero e %.2f", sqrt(numero));
    }
    
    return 0;
}
