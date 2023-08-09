#include <stdlib.h>
#include <stdio.h>

typedef struct Contato {
	struct Contato* ptr_ant;
	          struct Contato* ptr_prox;
	          int id;
	          char Nome[50];
	          char Endereco[50];
	          char Telefone[11];

	      
} Contato;

void dls_store (
	struct Contato *i,
		struct Contato **start,
			struct Contato **last
			)


{

	struct address *old, *p;


	if(*last==NULL) {   /* primeiro elemento da lista */
		i->next = NULL;
		i->prior = NULL;
		*last = i;
		*start = i;
		return;
	}
	p = *start;
	/  * começa no topo da lista */
	old = NULL;
	while(p) {
		if(strcmp(p->name, i->name)<O) {

			old = p;
			p = p->next;
		} else {
			if (p->prior) {
				p->prior->next i;
				i->next = p;
				i->prior = p->prior;
				p->prior= i;
				return;
			}
			i->next = p; /* novo primeiro elemento */
			i->prior = NULL;


			p->prior = i;
			*start = i;
			return;
		}
	}
	old->next i; /* coloca no final */
	i->next = NULL;
	i->prior = old;
	*last = i;
}


void ordenarLista(FILE *file) {



}

void cadastrarContato(FILE *file) {
	Contato contato;

	printf("Informe o ID do contato: ");
	scanf("%d", &contato.id);
	printf("Informe o nome do contato: ");
	scanf("%[^\n]", contato.Nome);
	printf("Informe o salario do contato: ");
	scanf("%[^\n]", &contato.Endereco);
	printf("Informe o Telefone do contato: ");
	scanf("%[^\n]", &contato.Telefone);


	// Posiciona o indicador de arquivo no final d arquivo

	fwrite(&contato, sizeof(Contato), 1, file); // Grava os dados do funcionario no arquivo
}


int main() {


	// Abre o arquivo no modo de leitura e escrita binária
	FILE *file = fopen("listaContatos.txt", "ab+");
	if (file == NULL) {
		printf("Erro ao abrir o arquivo.\n");
		return 1;
	}

	int opcao, id;

	do {
		printf("Escolha uma opcao:\n");
		printf("1. Cadastrar Contato\n");
		printf("2. Buscar Contato\n");
		printf("3. Listar Contatos\n");
		printf("0. Sair\n");
		scanf("%d", &opcao);
		switch (opcao) {
		case 1:

			break;
		case 2:
			printf("Informe o ID do funcionario a ser buscado: ");
			scanf("%d", &id);

			break;

		case 3:

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