#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 main() {
	
	int ultimaAparicao = 1986;
	int intervalo = 75;
	int ind = 1;
	int ano;
	int proxAno;
	 
	 
	printf("Digite o ano atual:\n");
	scanf("%d", &ano);
	
/*
	if ( (ano - ultimaAparicao) % intervalo > 0 ){
		
	float dif = ano - ultimaAparicao;
	
	// calcular quantas vezes temos que somar 75 anos desde a ultima apariçao	
	ind = ceil(dif/75);
	proxAno = (intervalo * ind) + ultimaAparicao;
	
		printf("A proxima passagem do cometa vai ser em %d", proxAno);
		printf("\nAnos que faltam: %d anos", proxAno - ano);	
		
	}	else {
		printf("Esse e o ano do cometa!");
	}
	*/
	
	do {
		
		ultimaAparicao = ultimaAparicao + 75;
	
	} while ( ultimaAparicao < ano);
	
	printf("Ano do Cometa: %d", ultimaAparicao);
	
	
	
	return 0;
}
