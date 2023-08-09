#include <stdio.h>

int main() {
	
	float num;
	printf("Digite um numero qualquer:\n");
	scanf("%f", &num);
	
	if(num > 0){
		printf("Esse numero e POSITIVO!");
	} else {
		printf("Esse numero e NEGATIVO!");
	}
	
	
	return 0;
}