#include <stdio.h>

int main() {
	
	int minutos;
	float conta;
	
	printf("Digite os minutos utilizados esse mes:\n");
	scanf("%d", &minutos);
	
	if(minutos > 50){
		conta = 50 + ((minutos-50) * 1.50);
	} else {
		conta = 50;
	}
	
	printf("Sua conta ficou: %.1f", conta);
	
	return 0;
}