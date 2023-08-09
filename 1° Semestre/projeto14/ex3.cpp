#include <stdio.h>

int main() {
	
	int i, num;
	
	for( i = 1; i <= 10; i++){
		
		printf("Digite o %d° número:\n", i);
		scanf("%d", &num);
		
		if(num > 0){
			printf("NUMERO POSITIVO!\n");
		} else if( num < 0 ){
			printf("NUMERO NEGATIVO!\n");
		} else {
			printf("NUMERO NULO!\n");
		}
		
	}
	
	return 0;
}
