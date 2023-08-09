#include <stdio.h>

int main() {
	
	int i;
	float teoria, lab, media;
	
	for (i = 1; i <=2; i++){
		
		printf("\n\nPara o Aluno %d digite:\n", i);
		
		printf("Media das notas de teoria:\n");
		scanf("%f", &teoria);
		printf("Media das notas de laboratorio:\n");
		scanf("%f", &lab);	
		
		media = (teoria * 0.6) + (teoria * 0.4);
		if( media >= 6){
			printf("O ALUNO %d FOI APROVADO!", i);
		} else {
			printf("O ALUNO %d FOI REPROVADO!", i);
		}
	
	}
	
	return 0;
}
