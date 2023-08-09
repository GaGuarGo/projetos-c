#include <stdlib.h>
#include <stdio.h>

int main() {
	
	float dist, tempo, vel;
	
	printf("Digite a distancia percorrida: [Km]\n");
	scanf("%f", &dist);
	
	printf("Digite o tempo gasto no percurso: [h]\n");
	scanf("%f", &tempo);
	
	vel = dist/tempo;
	
	printf("A velocidade durante o percurso em Km/h e: %.2f", vel);
	
	
	return 0;
}