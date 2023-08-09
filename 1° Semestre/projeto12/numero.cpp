#include <stdio.h>

int main() {
	
	float numero;
	printf("Digite um numero qualquer:\n");
	scanf("%f", &numero);
	
	if(numero < 0){
		printf("Esse numero e NEGATIVO!");
	} else if(numero == 0){
		printf("Esse numero e NULO!");
	} else {
		printf("Esse numero e POSITIVO!");
	}
	
	return 0;
}
