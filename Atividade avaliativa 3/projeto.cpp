#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define maximo 1000

struct Usuario {
    int id, vacina;
    char nome[50],email[50],sexo[15],endereco[100];
    double altura;
};

struct Usuario usuarios[maximo];
int numUsuarios = 0;


int gerarId() {
    srand(time(NULL));
    return rand();
}

void cadastrarUsuario() {
    Usuario usuario;

    usuario.id = gerarId();

    printf("Digite o nome completo do usuario: ");
    scanf(" %[^\n]s", usuario.nome);

    printf("Digite o email do usuario: ");
    scanf(" %[^\n]s", usuario.email);

    if (strstr(usuario.email, "@") == NULL) {
        printf("Email invalido!\n");
        return;
    }

    printf("Digite o sexo do usuario (Feminino, Masculino ou Indiferente): ");
    scanf(" %[^\n]s", usuario.sexo);

    if (strcmp(usuario.sexo, "Feminino") != 0 && strcmp(usuario.sexo, "Masculino") != 0 &&
        strcmp(usuario.sexo, "Indiferente") != 0) {
        printf("Sexo invalido!\n");
        return;
    }

    printf("Digite o endereco do usuario: ");
    scanf(" %[^\n]s", usuario.endereco);

     printf("Digite a altura do usuario (entre 1 e 2 metros): ");
    scanf("%lf", &usuario.altura);

    printf("O usuario foi vacinado? (Digite 1 para sim ou 0 para nao): ");
    scanf("%d", &usuario.vacina);

    usuarios[numUsuarios] = usuario;
    numUsuarios++;

    printf("O Id e %d", usuario.id);
}

void editarUsuario() {
    int id;
    int encontrado = 0;

    printf("Digite o ID do usuario a ser editado: ");
    scanf("%d", &id);

    for (int i = 0; i < numUsuarios; i++) {
        if (usuarios[i].id == id) {
            printf("Digite o novo nome completo do usuario: ");
            scanf(" %[^\n]s", usuarios[i].nome);

            printf("Digite o novo email do usuario: ");
            scanf(" %[^\n]s", usuarios[i].email);

            printf("Digite o novo sexo do usuario (Feminino, Masculino ou Indiferente): ");
            scanf(" %[^\n]s", usuarios[i].sexo);

            printf("Digite o novo endereco do usuario: ");
            scanf(" %[^\n]s", usuarios[i].endereco);

            printf("Digite a nova altura do usuario (entre 1 e 2 metros): ");
            scanf("%lf", &usuarios[i].altura);

            printf("O usuario foi vacinado? (Digite 1 para sim ou 0 para nao): ");
            scanf("%d", &usuarios[i].vacina);

            printf("Usuario editado com sucesso!\n");
            encontrado = 1;
            break;
        }
    }
        if (!encontrado) {
        printf("Usuario nao encontrado.\n");
    }
}

void deletarUsuario() {
    int usuarioId;
    printf("Digite o ID do usuário que deseja excluir: ");
    scanf("%d", &usuarioId);

    int userIndex = -1;
    for (int i = 0; i < numUsuarios; i++) {
        if (usuarios[i].id == usuarioId) {
            userIndex = i;
            break;
        }
    }

    if (userIndex == -1) {
        printf("Usuário não encontrado.\n");
        return;
    }

    for (int i = userIndex; i < numUsuarios - 1; i++) {
        usuarios[i] = usuarios[i + 1];
    }

    numUsuarios--;

    printf("Usuário excluído com sucesso!\n");
}

void buscar() {
    char email[1000];
    int encontrado = 0;

    printf("Digite o email do usuario a ser buscado: ");
    scanf(" %[^\n]s", email);

    for (int i = 0; i < numUsuarios; i++) {
        if (strcmp(usuarios[i].email, email) == 0) {
            printf("Usuario encontrado:\n");
            printf("ID: %d\n", usuarios[i].id);
            printf("Nome: %s\n", usuarios[i].nome);
            printf("Email: %s\n", usuarios[i].email);
            printf("Sexo: %s\n", usuarios[i].sexo);
            printf("Endereco: %s\n", usuarios[i].endereco);
            printf("Altura: %.2lf\n", usuarios[i].altura);
            printf("Vacinado: %s\n", usuarios[i].vacina ? "Sim" : "Nao");
            encontrado = 1;
            break;
        }
    }
    if (!encontrado) {
        printf("Usuario nao encontrado.\n");
    }
}

void printar() {
    for (int identificador = 0; identificador < numUsuarios; identificador++) {
        printf("ID: %d\n", usuarios[identificador].id);
        printf("Nome: %s\n", usuarios[identificador].nome);
        printf("Email: %s\n", usuarios[identificador].email);
        printf("Sexo: %s\n", usuarios[identificador].sexo);
        printf("Endereço: %s\n", usuarios[identificador].endereco);
        printf("Altura: %.2f\n", usuarios[identificador].altura);
        printf("Vacina: %s\n", usuarios[identificador].vacina ? "Sim" : "Não");
        printf("--------------------\n");
    }
}

void Backup() {
    FILE *arquivo;
    arquivo = fopen("backup.txt", "w");

    for (int i = 0; i < numUsuarios; i++) {
        fprintf(arquivo, "%d\n", usuarios[i].id);
        fprintf(arquivo, "%s\n", usuarios[i].nome);
        fprintf(arquivo, "%s\n", usuarios[i].email);
        fprintf(arquivo, "%s\n", usuarios[i].sexo);
        fprintf(arquivo, "%s\n", usuarios[i].endereco);
        fprintf(arquivo, "%.2lf\n", usuarios[i].altura);
        fprintf(arquivo, "%d\n", usuarios[i].vacina);
    }

    fclose(arquivo);
}

void Restauracao() {
    FILE *arquivo;
    arquivo = fopen("backup.txt", "r");

    numUsuarios = 0;
    Usuario usuario;

    while (!feof(arquivo) && numUsuarios < maximo) {
        fscanf(arquivo, "%d\n", &usuario.id);
        fscanf(arquivo, "%[^\n]\n", usuario.nome);
        fscanf(arquivo, "%[^\n]\n", usuario.email);
        fscanf(arquivo, "%[^\n]\n", usuario.sexo);
        fscanf(arquivo, "%[^\n]\n", usuario.endereco);
        fscanf(arquivo, "%lf\n", &usuario.altura);
        fscanf(arquivo, "%d\n", &usuario.vacina);

        usuarios[numUsuarios] = usuario;
        numUsuarios++;
    }

    fclose(arquivo);
}

int main() {
    char opcao;

    do {
        printf("Selecione uma opcao:\n");
        printf("a - Cadastrar usuario\n");
        printf("b - Editar usuario\n");
        printf("c - Excluir usuario\n");
        printf("d - Buscar usuario por email\n");
        printf("e - Imprimir usuarios cadastrados\n");
        printf("f - Fazer backup dos usuarios cadastrados\n");
        printf("g - Restaurar dados dos usuarios\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf(" %c", &opcao);

        switch (opcao) {
            case 'a':
                cadastrarUsuario();
                break;
            case 'b':
                editarUsuario();
                break;
            case 'c':
                deletarUsuario();
                break;
            case 'd':
                buscar();
                break;
            case 'e':
                printar();
                break;
            case 'f':
                Backup();
                break;
            case 'g':
                Restauracao();
                break;
            case 0:
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }

        printf("\n");
    } while (opcao != '0');

    return 0;
}
