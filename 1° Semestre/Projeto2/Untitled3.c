#include <stdio.h>
#include <conio.h>

main(){
	
	int homem1;
	printf("Digite a idade do primeiro Homem: \n");
	scanf("%d", &homem1);
	
	int homem2;
	printf("Digite a idade do segundo Homem: \n");
	scanf("%d", &homem2);
	
	int mulher1;
	printf("Digite a idade da primeira Mulher: \n");
	scanf("%d", &mulher1);
	
	int mulher2;
	printf("Digite a idade da primeira Mulher: \n");
	scanf("%d", &mulher2);
	
	int soma;
	int produto;
	
	if(homem1 > homem2 && mulher1 > mulher2 ){
		soma = homem1 + mulher2;
		produto = homem2 * mulher1;
		printf("Soma das idades: %d\n", soma);
		printf("Produto idades: %d\n", produto);
	} else if(homem2 > homem1 && mulher2 > mulher1) {
		soma = homem2 + mulher1;
		produto = homem1 * mulher2;
		printf("Soma das idades: %d\n", soma);
		printf("Produto idades: %d\n", produto);
	}
	
	else if(homem1 > homem2 && mulher2 > mulher1) {
		soma = homem1 + mulher1;
		produto = homem2 * mulher2;
		printf("Soma das idades: %d\n", soma);
		printf("Produto idades: %d\n", produto);
	} 
	else if(homem2 > homem1 && mulher1 > mulher2) {
		soma = homem2 + mulher1;
		produto = homem1 * mulher1;
		printf("Soma das idades: %d\n", soma);
		printf("Produto idades: %d\n", produto);
	}
	else if(homem1 ==homem2 || mulher1 == mulher2){
		printf("NAO PODE HAVER IDADES IGUAIS!\n");
	}else if(homem1 == homem2 && mulher1==mulher2){
		printf("NAO PODE HAVER IDADES IGUAIS!\n");
	}

}
