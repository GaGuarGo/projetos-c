#include <stdio.h>
#include <stdlib.h>



int main() {

	float salarioMin;
	printf("Digite seu salario [R$]:");
	scanf("%f", &salarioMin);
	
	float precoWatt = salarioMin / 700;
	float consumoCasa;
	printf("Digite o consumo [KW]:");
	scanf("%f", &consumoCasa);
	
	
	float precoFinal = precoWatt * consumoCasa;
	float precoFinalD = precoFinal * 0.9;
	
	
	printf("Pre�o do KW e: precoWatt=%.2f\n", precoWatt);
	printf("Pre�o a ser pago e: precoFinal=%.2f\n", precoFinal);
	printf("Pre�o a ser pago com desconto e: precoFinalD=%.2f\n", precoFinalD);
	
	system("pause");
	return(0);
	
}
	
	

