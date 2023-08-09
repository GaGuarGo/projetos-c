#include <stdio.h>

int main() {

	float n1,n2, resultado;
	int op;

	printf("Digite o primeiro numero:\n");
	scanf("%f", &n1);
	printf("Digite o segundo numero:\n");
	scanf("%f", &n2);

	printf("Digite \"1\" para somar, \"2\" para subtrair, \"3\" para multiplicar ou \"4\" para dividir\n");
	scanf("%d", &op);
	
	if(op == 1){
		resultado = n1 + n2;
	} else if( op == 2){
		resultado = n1 - n2;
	} else if( op == 3){
		resultado = n1 * n2;
	} else {
		resultado = n1/n2;
	}
	
	printf("O resultado da operacao escolhida e: %.1f", resultado);

	return 0;
}