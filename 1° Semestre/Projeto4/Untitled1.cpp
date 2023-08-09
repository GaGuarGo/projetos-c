#include <stdlib.h>
#include <stdio.h>

int main() {
	
	int valor;
	printf("Digite o valor do produto:[R$]\n");
	scanf("%d", &valor);
	int quant;
	printf("Digite a quantidade do produto: \n");
	scanf("%d", &quant);
	
	int valorBruto; 
	valorBruto = valor * quant;
	
	
	char estado[2];
	printf("Digite o estado que recebera o produto:[Sigla]\n");
	scanf("%s", &estado);
	
	int imposto = 7;
	
	if(estado == "mg"){
		imposto = 7;
	} else if(estado == "sp"){
		imposto = 12;
	} else if(estado == "rj"){
		imposto = 15;
	} else if(estado == "ms"){
		imposto = 8;
	} else {
		printf("Estado nao compativel\n");
	}
	
	float impostoD;
	impostoD = imposto/100;
	
	float porc;
	porc = 1 + impostoD;
	
	float resultado;
	resultado = (valorBruto) * porc;
	
	
	printf("O valor cobrado sob a importacao eh: %.2f \n", resultado);
	
	system("pause");
	return(0);
	

}
