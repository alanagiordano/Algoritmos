#include<stdio.h>

/*4.	Com a proposta para ampliação da terceirização da mão de obra, o Ministério da Fazenda está empenhado 
em elaborar uma análise sobre o recebimento de salário regular através do registro em carteira profissional dos 
funcionários no país. Assim, elabore um algoritmo que obtenha, para cada assalariado, com carteira profissional 
assinada, o seu sexo M(masculino) e F(feminino) e o valor de seu salário, devendo este salário ser maior que um real (R$1,00). 
Seu algoritmo deverá analisar e classificar este assalariado em Acima, Igual ou Abaixo do salário mínimo. 
Sabe-se que o salário mínimo nacional é de R$ 1400,00. Após a leitura dos dados de cada assalariado cadastrado 
pelo ministério deverá ser apresentado o seu salário em reais, a classificação por extenso em relação ao salário mínimo 
e o sexo por extenso (Masculino ou Feminino).
A classificação em relação ao salário mínimo nacional deverá ser feita pelo sub-algoritmo classificaSalario e os
resultados solicitados para cada assalariado deverão ser apresentados pelo sub-algoritmo denominado mostraClassifica. 
Você deverá fazer a entrada de dados para todos os assalariados que foram pesquisados pelo ministério, lembrando de
fazer sempre a validação de todos os dados informados em sub-algoritmos específicos.   
Na solução deste problema os resultados finais de cada assalariado que participou desta pesquisa deverão ser apresentados.
Após a leitura dos dados de todos os assalariados pesquisados o seu algoritmo deverá apresentar a quantidade de 
assalariados com salário abaixo do salário mínimo e a quantidade assalariados com salário acima do salário mínimo*/

int validaSexo(char sexo) {
    if (sexo == 'M' || sexo == 'F')
    {
        return 1;
    } else {
        return 0;
    }   
}

float validaSalario(float salario){
    if (salario > 1)
    {
        return 1;
    } else
    {
        return 0;
    }   
}

void classificaSalario(float salario, char classificacao){
    if (salario < 1400)
    {
       printf("ABAIXO\n"); 
    }else if (salario > 1400)
    {
        printf("ACIMA\n");
    }else
    {
        printf("IGUAL\n");
    }   
}

void mostraClassificacao(char sexo, float salario) {
    char classificacao[7];
    classificaSalario(salario, &classificacao);

    printf("Sexo: %s\n", sexo);
    printf("Salario: R$ %.2f\n", salario);
    printf("Classificacao: %s do salario minimo\n", classificacao);

int main()
{
    int funcionarios,abaixo=0,acima=0;

    printf("Informe a quantidade de funcionarios: ");
    scanf("%d", &funcionarios);

    for (int i = 0; i < funcionarios; i++)
    {
        char sexo;
        float salario;

        do
        {
            printf("Informe o sexo(M/F): ");
            scanf("%c", &sexo);
        } while (!validaSexo(sexo));
        
        do
        {
            printf("informe o salario: ");
            scanf("%f", &salario);
        } while (!validaSalario(salario));

        mostraClassificacao(sexo,salario);

        if (salario < 1400)
        {
           abaixo++;
        }else if (salario > 1400)
        {
            acima++;
        }
        
        printf("Quantidade de assalariados abaixo do salario minimo: %d\n", abaixo);
        printf("Quantidade de assalariados acima do salario minimo: %d\n", acima);
        
    }
    


    return 0;
}

