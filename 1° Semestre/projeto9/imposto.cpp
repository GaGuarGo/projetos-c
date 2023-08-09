#include <stdio.h>

int main() {
	
	float salL, salB;
	
	printf("Digite o valor do salario bruto: [R$] \n");
	scanf("%f", &salB);
	
	salL = salB * 0.63;
	
	printf("O valor do salario liquido e: R$ %.2f", salL);
	
	return 0;
}
