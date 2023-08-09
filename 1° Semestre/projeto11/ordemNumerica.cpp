#include <stdio.h>

int main() {
	
	float n1,n2;
	
	printf("Digite um numero qualquer:\n");
	scanf("%f", &n1);
	printf("Digite outro numero qualquer:\n");
	scanf("%f", &n2);
	
	if(n1 > n2){
		printf("A ordem crescente e: %.1f, %.1f", n2, n1);
		return 0;
	}
	
	printf("A ordem crescente e: %.1f, %.1f", n1, n2);
	
	return 0;
}