#include <stdio.h>

int main() {
	
	int ano;
	
	printf("Digite um ano qualquer:\n");
	scanf("%d", &ano);
	
	if( ano % 4 == 0 && ano % 100 > 0 || ano % 400 == 0){
		printf("%d e um ano BISSEXTO!", ano);
	}else {
		printf("%d nao e um ano BISSEXTO!", ano);
	}
	
	return 0;
}