#include <stdio.h>

int main() {
	
	float somaT, somaP, notaF;
	int i;
	
	
	for(i = 1; i <= 4; i++) {
		
		if(i <= 2){
			printf("Digite a %dª nota da prova pratica:\n", i);
			scanf("%f", &somaP);
			
			somaP = somaP + somaP;
			
		}else {
			printf("Digite a %dª nota da prova teoria:\n", i);
			scanf("%f", &somaT);
			
			somaT = somaT + somaT;
		}
	
	}
	
	notaF = (0.4* (somaP/2) ) +(0.6* (somaT/2) );
	printf("A nota final e: %.1f", notaF);
	
	
	return 0;
}
