#include <stdio.h>

int main() {
	
	float num;
	int i;
	
	printf("Digite um número para saber a Tabuada:\n");
	scanf("%f", &num);
	
	for(i = 1; i <= 10; i++ ){
		
		printf(" %.0f X %d = %.0f \n", num, i, num * i);
		
	}
	
	
	return 0;
}
