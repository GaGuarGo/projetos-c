#include <stdio.h>

int main() {
	
	int i, n,a, alunos, materias;
	float nota, somaNotas, aproveitamento;
	
	float aprov[i];
	
	printf("Digite a quantidade de alunos:\n");
	scanf("%d", &alunos);
	
	for( i = 0; i < alunos; i++){
		
		printf("\n#### ALUNO %d ####\n", i + 1);
		
		printf("Digite quantas materias foram cursadas semestre passado: \n");
		scanf("%d", &materias);
		
		for(n = 1; n <= materias; n++){
			
			printf("Nota da %do Materia:\n", n);
			scanf("%f", &nota);
			
			somaNotas = nota + somaNotas;
		}
		
		aproveitamento = somaNotas/materias;
		aprov[i] = aproveitamento;
		somaNotas = 0;
		materias = 0;
	}
	
	
	for(a = 0; a < alunos; a++){
		
		printf("\n##### Aluno %d #####", a + 1);
		printf("\nAPROVEITAMENTO: %.1f%%", aprov[a] * 10);
		
	}
	
	
	return 0;
}