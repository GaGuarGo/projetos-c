#include <stdio.h>

int main() {
	
	float num;
	int i;
	
	for(i = 1; i <= 10; i++){
		
		printf("Digite o %d° numero:\n", i);
		scanf("%f", &num);
		
		printf("O Dobro e: %.1f \n", num * 2);
	}
	
	
	
	return 0;
}
