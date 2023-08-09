#include <stdio.h>

int main( ){
	
	float salarioB, salarioA;
	
	printf("Digite o salario Bruto: \n");
	scanf("%f", &salarioB);
	
	if( salarioB >= 1000){
		salarioA = salarioB * 1.05;
	} else {
		salarioA = salarioB * 1.07;
	}
	
	printf("O salario com aumento e: %.1f", salarioA);
	
	return 0;
}