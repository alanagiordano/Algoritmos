#include<stdio.h>

/*Construa uma estrutura aluno com nome, numero de matrícula e curso. Leia do usuário a informação de 5 alunos, 
armazene em vetor dessa estrutura e imprima os dados na tela.*/

struct Aluno
{
    char nome[50],curso[50];
    int matricula;
};

int main()
{
    struct Aluno alunos[5];

    for (int i = 0; i < 5; i++)
    {
        printf("\nAluno %d:\n", i+1);

        printf("Digite o nome: ");
        fgets(alunos[i].nome,50,stdin);

        printf("Digite a matricula: ");
        scanf("%d", &alunos[i].matricula);
        getchar();

        printf("Digite o curso: ");
        fgets(alunos[i].curso,50,stdin);
    }

    for (int i = 0; i < 5; i++) {
        printf("\nAluno %d:\n", i+1);
        printf("Nome: %s", alunos[i].nome);
        printf("Numero de Matricula: %d\n", alunos[i].matricula);
        printf("Curso: %s\n", alunos[i].curso);
    }
    
    
    return 0;
}

