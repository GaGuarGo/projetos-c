#include <stdio.h>

int main() {
	
	int numFilhos, qtdFilhos, i;
	float salario, qtdSalario, mediaSalario, mediaFilhos;
	float percentSalario, qtdPessoasSal;
	float maiorSalario = 0;
	
	for (i = 1; i <= 15; i++){
		
		printf("\n## PESSOA %d ##\n", i);
		
		printf("Digite sua quantidade de filhos:\n");
		scanf("%d", &numFilhos);
		
		printf("Digite seu salário: [R$]\n");
		scanf("%f", &salario);
		
		
		if(salario > maiorSalario){
			maiorSalario = salario;
		}
		
		if( salario <= 500){
			qtdPessoasSal++;
		}
		
		qtdFilhos = numFilhos + qtdFilhos;
		qtdSalario = salario + qtdSalario;
		
	}
	
	mediaSalario = qtdSalario/15;
	mediaFilhos = qtdFilhos/15;
	percentSalario = qtdPessoasSal/15;
	
	printf("\n #################### \nMedia do Salario: %.2f\n", mediaSalario);
	printf("Media da quantidade de filhos: %.2f\n", mediaFilhos);
	printf("Maior salario registrado: %.2f\n", maiorSalario);
	printf("Porcentagem das pessoas com salarios inferiores a R$ 500: %.2f%%\n", percentSalario * 100);

	
	return 0;
}
