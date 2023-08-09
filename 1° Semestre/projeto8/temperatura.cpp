#include <stdlib.h>
#include <stdio.h>

int main() {
	
	float celsius, fahr;
	
	printf("Digite a temperatura em Fahrenheits [°F]: \n");
	scanf("%f", &fahr);
	
	celsius = (fahr -32)/1.8;
	
	printf("A temperatura em Celsius [°C]: %.2f", celsius);
	
	
	return 0;
}