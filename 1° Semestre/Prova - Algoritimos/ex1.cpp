#include <stdio.h>

int main() {
	
	
	float n1;
	float n2;
	float n3;
	float n4;
	
	printf("Digite o primeiro numero: \n");
	scanf("%f", &n1);
	printf("Digite o segundo numero: \n");
	scanf("%f", &n2);
	printf("Digite o terceiro numero: \n");
	scanf("%f", &n3);
	printf("Digite o quarto numero: \n");
	scanf("%f", &n4);
	
	if( n4 > n3 && n3 > n2 && n2 > n1){
		printf("Em Ordem!");
	} else {
		printf("Desordenado!");
	}
	
	
	
	return 0;
}
