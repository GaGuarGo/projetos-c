#include <stdio.h>

int main() {
	
	float lado1, lado2, lado3;
	
	printf("Digite o tamanho do primeiro lado:\n");
	scanf("%f", &lado1);
	printf("Digite o tamanho do segundo lado:\n");
	scanf("%f", &lado2);
	printf("Digite o tamanho do terceiro lado:\n");
	scanf("%f", &lado3);
	
	if( lado1 == lado2 && lado3 == lado2 && lado2 == lado1 ){
		printf("O triangulo e EQUILATERO!");
	} else if( lado1 == lado2 || lado3 == lado2 || lado3 == lado1 ){
		printf("O triangulo e ISOCELES!");
	} else {
		printf("O triangulo e ESCALENO!");
	}
		
	return 0;
}