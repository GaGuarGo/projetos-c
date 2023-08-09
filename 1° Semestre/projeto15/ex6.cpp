#include <stdio.h>

int main() {
	
	int i, sexo, qtdHomens = 0, qtdMulheres, sexoMaiorAltura;
	float altura, somaAlturaM, mediaAlturaM, maiorAltura = 0;
	
	for( i = 1; i <= 3; i++){
		
		printf("\n###### PESSOA %d ######\n", i);
		
		printf("Digite sua altura: [m]\n");
		scanf("%f", &altura);
		
		printf("Digite seu sexo: 1[Homem] 2[Mulher]\n");
		scanf("%d", &sexo);
		
		if( sexo == 2){
			qtdMulheres++;
			somaAlturaM = altura + somaAlturaM;
		} else {
			qtdHomens++;
		}
		
		if(altura > maiorAltura){
			maiorAltura = altura;
			sexoMaiorAltura = sexo;
		}
		
	}
	
	mediaAlturaM = somaAlturaM/qtdMulheres;
	
	printf("\n####################\n");
	printf("NUMERO HOMENS: %d", qtdHomens);
	printf("\nMEDIA ALTURA MULHERES: %.2f", mediaAlturaM);
	if(sexoMaiorAltura == 2){
		printf("\n MAIOR Altura: %.2f  Sexo: Mulher", maiorAltura);
	} else {
		printf("\n MAIOR Altura: %.2f  Sexo: Homem", maiorAltura);
	}
	
	
	return 0;
}