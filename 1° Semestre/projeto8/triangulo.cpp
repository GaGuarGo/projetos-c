#include <stdlib.h>
#include <stdio.h>

int main() {
	
	float base, altura, area;
	
	printf("Digite o tamanho da base do triangulo: [cm]\n");
	scanf("%f", &base);
	
	printf("Digite o tamanho da altura do triangulo: [cm]\n");
	scanf("%f", &altura);
	
	area = (base*altura)/2;
	
	printf("A area do triangulo e: %.1f", area);
	
	return 0;
}