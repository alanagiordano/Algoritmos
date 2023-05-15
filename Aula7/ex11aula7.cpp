#include<stdio.h>

int main()
{
    int numeros[10], negativo=0,positivo=0;

    for (int i = 1; i < 10; i++)
    {
        printf("Digite os valores: ");
        scanf("%d", &numeros[i]);
        if (numeros[i] < 0)
        {
            negativo += 1;
        }else
        {
            positivo += numeros[i];
        }  
    }

    printf("Quantidade negativos: %d\n", negativo);
    printf("Soma positivos: %d", positivo);
    
    return 0;
}
