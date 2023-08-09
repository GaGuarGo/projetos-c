#include <stdio.h>

int main() {
	
	float numerador, denominador;
	
	printf("Digite o numerador da divisao:\n");
	scanf("%f", &numerador);
	printf("Digite o denominador da divisao:\n");
	scanf("%f", &denominador);
	
	if( denominador == 0){
		printf("Nao e possivel realizar divisao por 0!");
	} else{
		printf("O resultado da divisao e: %.1f", numerador/denominador);
	}
	
	return 0;
}