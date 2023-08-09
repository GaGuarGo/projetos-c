#include <stdio.h>

int main() {
	
	float num;
	printf("Digite um numero qualquer:\n");
	scanf("%f", &num);
	
	if(num > 0 && num < 10){
		printf("Este numero esta entre 0 e 9!");
	} else {
		printf("Este numero nao esta entre 0 e 9!");
	}
	
	return 0;
}