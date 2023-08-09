#include <stdio.h>

int main() {
	
	
	float num,soma, media;
	int i, maior10, negativo;
	
	for( i = 1; i<=3; i++){
		
		printf("Digite o %d numero: \n", i);
		scanf("%f", &num);
		
		soma = soma + num;
		media = soma/i;
		if(num >= 10){
			maior10++;
		}
		if(num < 0 ){
			negativo++;
		}
		
	}
	printf("O resultado da soma e: %.0f\n", soma);
	printf("A media dos numeros e: %.2f\n", media);
	printf("A Quantidade de numeros negativos e: %d\n", negativo);
	printf("A Quantidade de numeros maiores que 10 e: %d\n", maior10);
	
	return 0;
}
