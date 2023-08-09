#include <stdio.h>

int main() {
	
	int start, end, number;
	
	printf("Digite o primeiro numero do intervalo: \n");
	scanf("%d", &start);
	printf("Digite o ultimo numero do intervalo: \n");
	scanf("%d", &end);
	printf("Digite um numero qualquer:\n");
	scanf("%d", &number);
	
	if( number > start && number < end){
		printf("O numero digitado esta dentro do intervalo digitado!");
	} else if(number == start || number == end){
		printf("O numero digitado esta na extremidade do intervalo digitado!");
	} else {
		printf("O numero digitado esta fora do intervalo digitado!");
	}
	
	return 0;
}
