#include <stdio.h>
#include <stdlib.h>

float main(){
	
	int primeiroN;
	printf("Digite o primeiro numero:\n");
	scanf("%d", &primeiroN);
	
	int segundoN;
	printf("Digite o segundo numero:\n");
	scanf("%d", &segundoN);
	
	int terceiroN;
	printf("Digite o terceiro numero:\n");
	scanf("%d", &terceiroN);
	
	int soma;
	soma = (primeiroN + segundoN + terceiroN);
	float media;
	media = soma/3;
	
	printf("media=%.1f", media);
	
}