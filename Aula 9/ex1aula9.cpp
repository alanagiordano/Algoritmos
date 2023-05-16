#include<stdio.h>

/*1. Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e armazene os dados em uma estrutura;*/

struct Pessoa
{
    char nome[50], endereco[100];
    int idade;
};


int main()
{
    struct Pessoa pessoa;

    printf("Digite o nome: ");
    fgets(pessoa.nome,50,stdin);

    printf("Digite a idade: ");
    scanf("%d", &pessoa.idade);
    getchar();

    printf("Digite o endereco: ");
    fgets(pessoa.endereco,100,stdin);

    printf("Nome: %s\n", pessoa.nome);
    printf("Idade: %d\n", pessoa.idade);
    printf("Endereco: %s", pessoa.endereco);
    
    return 0;
}

