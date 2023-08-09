#include <stdio.h>

int main( ){
	
	float n1,n2;
	
	printf("Digite um numero qualquer:\n");
	scanf("%f", &n1);
	printf("Digite outro numero qualquer:\n");
	scanf("%f", &n2);
	
	if(n1 == n2){
		printf("Os dois numeros sao iguais!");
	}
	else if(n1 > n2){
		printf("O maior numero e: %.1f", n1);
	} else {
		printf("O maior numero e: %.1f", n2);
	}
	
	return 0;
}