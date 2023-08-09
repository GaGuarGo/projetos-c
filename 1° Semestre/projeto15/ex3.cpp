#include <stdio.h>

int main() {
	
	int i, indice, qtdPos = 0;
	float num, soma, media;
	printf("Digite a quantidade de numeros desejada:\n");
	scanf("%d", &i);
	
	for( indice = 1 ; indice <= i; indice++){
		
		printf("Digite o %d° numero\n", indice);
		scanf("%f", &num);
		
		if( num > 0){
			soma = soma + num;
			qtdPos++;
		}
	}
	
	media = soma/qtdPos;
	
	printf("\nA MEDIA DOS VALORES POSITIVOS E: %.1f", media);
	
	return 0;
}
