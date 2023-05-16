#include<stdio.h>

/*3. Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve conter a matrícula do aluno,
 nome, nota da primeira prova, nota da segunda prova e nota da terceira prova. 

a) Permita ao usuário entrar com os dados de 5 alunos. 

(b) Encontre o aluno com maior nota da primeira prova.

(c) Encontre o aluno com maior media geral.

(d) Encontre o aluno com menor media geral.

(e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 7 para aprovação*/

struct Aluno
{
    char nome[50];
    int matricula;
    float nota1,nota2,nota3,media;
};

int main()
{
    struct Aluno alunos[5];

    float maiorNota1 = 0,maiorMedia = 0, menorMedia = 10;
    int alunoMaiorNota, alunoMaiorMedia, alunoMenorMedia;

    for (int i = 0; i < 5; i++)
    {
        printf("\nAluno %d:\n", i+1);

        printf("Digite a matricula: ");
        scanf("%d", &alunos[i].matricula);
        getchar(); 

        printf("Digite o nome: ");
        fgets(alunos[i].nome, 50, stdin);

        printf("Digite a nota da primeira prova: ");
        scanf("%f", &alunos[i].nota1);
        getchar();

        printf("Digite a nota da segunda prova: ");
        scanf("%f", &alunos[i].nota2);
        getchar();

        printf("Digite a nota da terceira prova: ");
        scanf("%f", &alunos[i].nota3);
        getchar();
        

        alunos[i].media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;

        if (alunos[i].media >= 7)
        {
            printf("Aprovado\n");
        }else
        {
            printf("Reprovado\n");
        }
        

        if (alunos[i].nota1 > maiorNota1)
        {
           maiorNota1 = alunos[i].nota1;
           alunoMaiorNota = i; 
        }

        if (alunos[i].media > maiorMedia)
        {
            maiorMedia = alunos[i].media;
            alunoMaiorMedia = i;
        }

        if (alunos[i].media < menorMedia)
        {
            menorMedia = alunos[i].media;
            alunoMenorMedia = i;
        }
    }

    printf("Aluno com maior nota: %s", alunos[alunoMaiorNota].nome);
    printf("Aluno com maior media geral: %s",alunos[alunoMaiorMedia].nome);
    printf("Aluno com menor media: %s", alunos[alunoMenorMedia].nome);
    
    return 0;
}
