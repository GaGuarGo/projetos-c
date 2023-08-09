#include <stdio.h>

int main() {
	
	int idade;
	int sexo;
	float altura, pesoIdeal;
	
	printf("Digite sua idade:\n");
	scanf("%d", &idade);
	
	if( idade > 12 && idade < 65){
		
		printf("Digite seu sexo || \"1\" para Homem e \"2\" para mulher:\n");
		scanf("%d", &sexo);
		
		printf("Digite sua altura: [m]\n");
		scanf("%f", &altura);
		
		if(sexo == 1){
		 pesoIdeal = (72.7 * altura) - 62;
		}else {
		 pesoIdeal = (62.1 * altura) - 48.7;
		}
		
		printf("\n\nO seu peso Ideal e: %.1f\n", pesoIdeal);
		printf("MARGEM DE ERRO: \n -%1.f \n -%.1f", pesoIdeal * 1.05, pesoIdeal * 0.95);
		
	} else {
		printf("Esse indice nao pode ser usado para essas idades!");
	}
	
	return 0;
}