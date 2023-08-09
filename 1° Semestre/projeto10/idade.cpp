#include <stdio.h>

int main() {
	
	int idade;
	
	printf("Digite sua idade:\n");
	scanf("%d", &idade);
	
	if( idade < 2){
		printf("Você é um bebe!");
	} else if( idade < 12){
		printf("Você é uma criança");
	} else if(idade < 18){
		printf("VocÊ é um adolescente");
	} else if(idade < 24){
		printf("Você é um  jovem!");
	} else if( idade < 60){
		printf("Você é um adulto");
	} else if( idade < 90){
		printf("Você é um idoso!");
	} else {
		printf("MATUSALÉM, FAZENDO HORA EXTRA!");
	}
	
	return 0;
}
