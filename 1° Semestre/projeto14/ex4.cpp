#include <stdio.h>

int main() {
	
	int num1, num2, numero;
	
	printf("Digite o primeiro numero: \n");
	scanf("%d", &num1);
	printf("Digite o segundo numero: \n");
	scanf("%d", &num2);
	
	printf("\n\nOs n�meros nesse intervalo s�o: \n");
	
	if(num1 > num2 || num1 == num2){
		printf("Digite um intervalo v�lido");
	} else {
		
	numero = num1;
	
	while( numero < num2 - 1){
		
		numero++;
		printf("%d\n", numero);
	 }
	
	}
	return 0;
}
