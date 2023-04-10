#include<stdio.h>

int main()
{
    int i,soma;

    for (i=0;i<50;i+=2)
    {
       soma=soma+i;
    }

    printf("%d", soma); 
    
    return 0;
}
