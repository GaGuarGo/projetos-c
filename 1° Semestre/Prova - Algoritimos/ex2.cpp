#include <stdio.h>

int main() {
	
	float salario, salarioAumentado;
	
	printf("Digite seu salario:\n");
	scanf("%f", &salario);
	
	if(salario <= 1000){
		
		salarioAumentado = salario * 1.03;
		printf("FAIXA A, aumento de R$%.2f ", salarioAumentado - salario);
		
	} else if(salario > 1000 && salario <= 5000) {
		
		salarioAumentado = salario * 1.04;
		printf("FAIXA B, aumento de R$%.2f ", salarioAumentado - salario);
		
	} else if( salario > 5000 && salario <= 10000){
		
		salarioAumentado = salario * 1.05;
		printf("FAIXA C, aumento de R$%.2f ", salarioAumentado - salario);
		
	} else {
		
		salarioAumentado = salario * 1.06;
		printf("FAIXA D, aumento de R$%.2f ", salarioAumentado - salario);
		
	}
	
	
	return 0;
}
