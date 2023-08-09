#include <stdlib.h>
#include <stdio.h>

int main () {
	
	float cent, metros;
	
	printf("Digite o comprimento em metros [m]:\n");
	scanf("%f", &metros);
	
	cent = metros * 100;
	
	printf("A conversao em centimetros e: %.1f", cent);
	
	return 0;
}