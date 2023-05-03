#include<stdio.h>

/*3.	Você foi contratado para desenvolver um algoritmo para controlar as informações de um campeonato de 
futebol de salão. Sabe-se que no campeonato serão inscritos um mínimo de 3 times e um máximo de 9 times e que 
cada time deve inscrever no mínimo 6 jogadores e no máximo onze jogadores entre reservas e titulares. 
Faça um algoritmo que para cada time inscrito obtenha a idade e o peso de cada jogador e apresente as seguintes informações:
•	Para cada time:
o	Média das idades dos jogadores time;
o	Média do peso dos jogadores acima de 25 anos;
•	Para todos os jogadores inscritos no campeonato:
o	Quantidade de jogadores menores de idade (18 anos);
o	Quantidade e porcentagem de jogadores com mais de 80 quilos 

*/

int main()
{
    int times,jogadores=0,idade=0,somaidade=0,mediaIdade=0,jogadoresAcima,totalJogadores=0;
    float peso=0,somaPeso=0,mediaPeso=0,jogadorespeso;

    printf("Qual a quantidade de times? ");
    scanf("%d", &times);

    if (times >= 3 && times <= 9)
    {
        printf("numero de times validado\n");
    }else{
        printf("numero de times nao valido\n");
        return 0;
    }

    for (int i = 0; i < times; i++)
    {
        printf("Digite o numero de jogadores: ");
        scanf("%d", &jogadores);
        if (jogadores >=6 && jogadores <= 11)
        {
            printf("Numero de jogadores valido\n");
            totalJogadores++;
        }else{
            printf("Numero de jogadores nao valido");
            return 0;
        }         
            }

    for (int i = 1; i <= jogadores; i++)
        {
        printf("Qual a idade dos jogadores? ");
        scanf("%d", &idade);
        somaidade=somaidade+idade;
            if (idade >= 25)
            {
                printf("Qual o peso? ");
                scanf("%f", &peso );
                somaPeso=somaPeso+peso;
                jogadoresAcima++;
                if (peso > 80)
                {
                    jogadorespeso++;
                }
            }
            mediaIdade=somaidade/jogadores;
            mediaPeso=somaPeso/jogadoresAcima;
            printf("a media de idade e %d\n", mediaIdade);
            printf("Media de peso dos jogadores acima de 25: %.f\n", mediaPeso);
            }
        
            

        printf("O numero total de jogadores e %d\n", totalJogadores);
        printf("Total de jogadores acima de 80kg: %.f", jogadorespeso);
    

    return 0;
}
