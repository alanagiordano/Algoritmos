#include<stdio.h>
#include<math.h>

/*Desafio Bhaskara*/

int main()
{
    float a,b,c,delta,x1,x2;

    printf("Digite o o valor de A: ");
    scanf("%f", &a);
    printf("Digite o valor de B: ");
    scanf("%f", &b);
    printf("Digite o valor de C: ");
    scanf("%d", &c);

    delta=(b*b)-(4*a*c);

    printf("Delta e igual a: %.2f\n", delta);

    x1=(-b + sqrt(delta))/(2*a);
    x2=(-b - sqrt(delta))/(2*a);

    printf("x1 = %.2f", x1);
    printf("\n");
    printf("x2 = %.2f", x2);
    
    return 0;
}
