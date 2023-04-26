#include<stdio.h>

/*  Faça um algoritmo que leia três notas de um aluno, calcule e escreva a média final deste aluno. 
Considerar que a média é ponderada e que o peso das notas é 2, 3 e 5.*/

int main()
{
    float nota1,nota2,nota3,mediafinal;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    mediafinal= ((nota1*2)+(nota2*3)+(nota3*5))/10;

    printf("A media final e igual a %.2f", mediafinal);
    return 0;
}
