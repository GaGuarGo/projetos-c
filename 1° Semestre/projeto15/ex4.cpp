#include <stdio.h>

int main() {
	

	int num; 
	int numMenor = 1000;
	
	for( int i = 1; i <= 10; i++){
		
		printf("Digite o %d° numero: \n", i);
		scanf("%d", &num);
		
		if( numMenor > num){
			numMenor = num;
		}
	}

	printf("MENOR NUMERO: %d !", numMenor);
	
	return 0;
}
