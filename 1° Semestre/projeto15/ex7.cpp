#include <stdio.h>

int main() {
	
	int i, aux, linhas;
	
	printf("Digite o numero de linhas desejada:\n");
	scanf("%d", &linhas);
	
	if( linhas > 20 || linhas < 1){
		printf("MAXIMO DE LINHAS: 20\nMINIMO DE LINHAS: 1!!");
	} else {
		
		for( i = 1; i <= linhas; i++){
		
			for(aux = linhas - i; aux >= 1; aux--){
				printf(" ");
			}
			
			for(aux = 1; aux <= i; aux++){
				
				if( aux == 1){
					printf("*");
				} else {
					printf("*");
					printf("*");
				}
			}
			
			printf("\n");
		}
		
	}
	
	return 0;
}