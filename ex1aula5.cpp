#include<stdio.h>

int main()
{
    int numero1,numero2;

    printf("digite o primeiro numero: ");
    scanf("%d", &numero1);
    printf("digite o segundo numero: ");
    scanf("%d", &numero2);

    if (numero1>numero2)
    {
        printf("%d",numero1);
    }else{
        printf("%d",numero2);
    }
    
    return 0;
}
