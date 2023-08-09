#include <stdlib.h>
#include <stdio.h>

int main() {
	
	printf("-------------------------------------\n\n");
	printf("ALUNOS ENVOLVIDOS:\n");
	printf("Gabriel Guarnieri Gomes RGM:30385245\n");
	printf("Pedro Henrique Mendes RGM:30616051\n");
	printf("Vitor Gabriel Goncalves RGM:29037085\n");
	printf("\n-------------------------------------\n\n");
	
	float a1;
	float a2;
	char nome[15];
	char disciplina[35];

	printf("Qual eh o seu primeiro nome? \n");
	scanf("%s", &nome);
	//gets(nome);
	
	printf("\nQual a disciplina? \n");
	scanf("%s", &disciplina);


	printf("\nQual a sua nota da prova A1? \n");
	scanf("%f", &a1);
	while(a1 > 5 || a1 < 0 ) {
		printf("\nDigite uma nota valida! \n");
		printf("Qual a sua nota da prova A1? \n");
		scanf("%f", &a1);
	}

	printf("\nQual a sua nota da prova A2? \n");
	scanf("%f", &a2);
	while(a2 > 5 || a2 < 0) {
		printf("\nDigite uma nota valida! \n");
		printf("Qual a sua nota da prova A2? \n");
		scanf("%f", &a2);
	}

	float media;
	media = a1 + a2;

	if( media >= 6) {
		printf("\nO aluno %s foi aprovado na materia %s com media igual a %.1f \n", nome, disciplina, media);
	} else {
		printf("\nO aluno %s foi reprovado na materia %s \n", nome, disciplina);
		printf("NOTA FINAL %.1f \n", media);
	}
system("pause");
return 0;
}
