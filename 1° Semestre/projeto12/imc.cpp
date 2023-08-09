#include <stdio.h>
#include <math.h>

int main() {
	
	
	float peso, imc, altura;
	
	printf("Digite sua altura: [m]\n");
	scanf("%f", &altura);
	printf("Digite seu peso: [Kg]\n");
	scanf("%f", &peso);
	
	float altura2 = altura*altura;
	imc = peso / altura2;
	
	if(imc < 18.5){
		printf("Voce esta abaixo do peso!");
		printf("\nIMC: %.2f", imc);
	} else if ( imc < 25){
		printf("Voce esta saudavel!");
		printf("\nIMC: %.2f", imc);
	} else if(imc < 30) {
		printf("Voce esta com sobrepeso!");
		printf("\nIMC: %.2f", imc);
	} else if(imc < 35){
		printf("Voce esta com Obesidade grau 1!");
		printf("\nIMC: %.2f", imc);
	} else if(imc < 40){
		printf("Voce esta com Obesidade grau 2!");
		printf("\nIMC: %.2f", imc);
	} else {
		printf("Voce esta com Obesidade Morbida!");
		printf("\nIMC: %.2f", imc);
	}
	
	return 0;
}
