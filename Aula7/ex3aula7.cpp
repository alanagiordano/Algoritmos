#include<stdio.h>
#include<math.h>

int main()
{
    int vetorDados[10];
    int vetorRes[10];

    for (int indice = 0; indice < 10; indice++)
    {
        printf("Digite os valores: ");
        scanf("%d", &vetorDados[indice]);
    }
    

    for (int indice = 0; indice < 10; indice++)
    {
        vetorRes[indice] = vetorDados[indice]*vetorDados[indice];
        fflush(stdin);
        printf("%d\n", vetorRes[indice]);
    }
    
    return 0;
}

