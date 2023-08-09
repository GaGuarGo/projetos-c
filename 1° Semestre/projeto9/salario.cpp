#include <stdio.h>

int main() {
	
	int horas, horasE;
	float sal;
	
	printf("Digite o total de horas \"normais\" trabalhadas no mes:\n");
	scanf("%d", &horas);
	
	printf("Digite o total de horas extras trabalhadas no mes:\n");
	scanf("%d", &horasE);
	
	sal = (horasE * 15) + (horas * 10);
	
	printf("O valor do salario e: R$ %.1f", sal);
	
	return 0;
}
