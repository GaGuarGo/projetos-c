#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int valorA;
	printf("Insira o valor da hora/aula: [R$] \n");
	scanf("%d", &valorA);
	
	int numAulas;
	printf("Insira a quantidade de aulas: \n");
	scanf("%d", &numAulas);
	
	int desconto;
	printf("Insira o desconto do INSS [%%] \n");
	scanf("%d", &desconto);
	
	int salBruto;
	salBruto = numAulas*valorA;
	
	float mDesconto;
	float mDesconto2;
	mDesconto = 100 - desconto;
	mDesconto2 = mDesconto/100;
	
	
	float salLiq;
	salLiq = mDesconto2*salBruto;
	
	printf("salLiq=%.2f", salLiq);
	
	
	system("pause");
	return(0);
}