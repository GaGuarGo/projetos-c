#include <stdio.h>

int main() {
	
	int i, indice;
	float num, soma, media;
	printf("Digite a quantidade de numeros desejada:\n");
	scanf("%d", &i);
	
	for( indice = 1 ; indice <= i; indice++){
		
		printf("Digite o %d° numero\n", indice);
		scanf("%f", &num);
		
		soma = soma + num;
	}
	
	media = soma/i;
	
	printf("\nA MEDIA DESSES VALORES E: %.1f", media);
	
	return 0;
}
