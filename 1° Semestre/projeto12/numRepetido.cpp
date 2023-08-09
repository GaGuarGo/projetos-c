#include <stdio.h>

int main() {
	
	float n1,n2,n3;
	
	printf("Digite o primeiro numero:\n");
	scanf("%f", &n1);
	printf("Digite o segundo numero:\n");
	scanf("%f", &n2);
	printf("Digite o terceiro numero:\n");
	scanf("%f", &n3);
	
	if(n1 == n2 || n2 == n1){
		printf("O numero %.1f esta se repetindo!", n1);
	} else if( n1 == n3 || n3 == n1){
		printf("O numero %.1f esta se repetindo!", n1);
	} else if( n2 == n3 || n3 == n2){
		printf("O numero %.1f esta se repetindo!", n2);
	} else if( n1 == n2 && n2 == n3){
		printf("Todos os numeros sao iguais!");
	}
	
	
	return 0;
}