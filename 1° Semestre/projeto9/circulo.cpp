#include <stdio.h>
#include <math.h>

main() {
	
	
	float raio;
	
	double pi, circ;
	
	printf("Digite o tamanho do raio da circunferencia [cm]: ");
	scanf("%f", &raio);
	
	pi = 2 * asin(1.0);
	circ = 2*pi*raio;
	
	printf("O perimetro da circunferencia e: %.1f", circ);
	
	return 0;
}
