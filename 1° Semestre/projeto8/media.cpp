#include <stdlib.h>
#include <stdio.h>


int main () {
	
	float nota1, nota2, resultado;
	
	
	
	printf("Digite a primeira nota:\n");
	scanf("%f", &nota1);
	
	printf("Digite a segunda nota:\n");
	scanf("%f", &nota2);
	
	resultado = (nota1 + nota2)/2;
	
	printf("A media e: %.1f", resultado);
	
	
	
	return 0;
}