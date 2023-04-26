#include<stdio.h>

int calculaMedia(int n1,int n2,int n3);

main()
{
    int numero1,numero2,numero3,resMedia;
    int estudantes;
    printf("digite a quantidade de estudantes: ");
    scanf("%d", &estudantes);
    
    for (int i = 1; i <= estudantes; i++)
    {
      printf("Digite a primeira nota: ");
    scanf("%d", &numero1);
    printf("Digite a segunda nota: ");
    scanf("%d", &numero2);
    printf("Digite a terceira nota: ");
    scanf("%d", &numero3);

    resMedia=calculaMedia(numero1,numero2,numero3);

    printf("%d\n", resMedia);  
    }
    return 0;
}

int calculaMedia(int n1,int n2,int n3){
    int resultado = (n1+n2+n3)/3;
    return resultado;
}

