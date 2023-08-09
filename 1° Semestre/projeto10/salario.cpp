#include <stdio.h>

int main() {
	
	float horas, valorH, boni, salario;
	
	printf("Digite a Quantidade de horas trabalhadas no mês: [h]\n");
	scanf("%f", &horas);
	
	printf("Digite o valor da hora: [R$]\n");
	scanf("%f", &valorH);
	
	salario = horas * valorH;
	
	if(salario < 1500){
		boni = 1.15;
	} else {
		boni = 1.05;
	}
	

	printf("O salário líquido e R$ %.2f", salario * boni);
	
	return 0;
}