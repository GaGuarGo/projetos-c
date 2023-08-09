#include <stdio.h>
typedef struct
{
    int id;
    char nome[50];
    float salario;
} Funcionario;


void cadastrarFuncionario(FILE *file)
{
    Funcionario funcionario;
    printf("Informe o ID do funcionario: ");
    scanf("%d", &funcionario.id);
    printf("Informe o nome do funcionario: ");
    scanf("%[^\n]", funcionario.nome);
    printf("Informe o salario do funcionario: ");
    scanf("%f", &funcionario.salario);
    // Posiciona o indicador de arquivo no final d arquivo
    fseek(file, 0, SEEK_END);
    fwrite(&funcionario, sizeof(Funcionario), 1, file); // Grava os dados do funcionario no arquivo
}

void buscarFuncionario(FILE *file, int id)
{
    Funcionario funcionario;
    int encontrado = 0;
    // Posiciona o indicador de arquivo no início do arquivo
    fseek(file, 0, SEEK_SET);
    while (fread(&funcionario, sizeof(Funcionario), 1, file) == 1)
    {
        if (funcionario.id == id)
        {
            printf("Funcionario encontrado:\n");
            printf("ID: %d\n", funcionario.id);
            printf("Nome: %s\n", funcionario.nome);
            printf("Salario: %.2f\n", funcionario.salario);
            encontrado = 1;
            break;
        }
    }
    if (!encontrado)
    {
        printf("Funcionario com ID %d nao encontrado.\n", id);
    }
}
int main()
{
    // Abre o arquivo no modo de leitura e escrita binária
    FILE *file = fopen("funcionarios.bin", "ab+");
    if (file == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    
    int opcao, id;
    
    do
    {
        printf("Escolha uma opcao:\n");
        printf("1. Cadastrar funcionario\n");
        printf("2. Buscar funcionario\n");
        printf("0. Sair\n");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            cadastrarFuncionario(file);
            break;
        case 2:
            printf("Informe o ID do funcionario a ser buscado: ");
            scanf("%d", &id);
            buscarFuncionario(file, id);
            break;
        case 0:
            break;
        default:
            printf("Opcao invalida.\n");
        }
    } while (opcao != 0);
    fclose(file);
    return 0;
}
