#include <stdlib.h>
#include <stdio.h>

main(){
	
	int idade;
	int anoAtual;
	int anoN;
	
	printf("Digite sua idade:\n");
	scanf("%d", &idade);
	
	printf("Digite o ano atual:\n");
	scanf("%d", &anoAtual);
	
	anoN = (anoAtual - idade);
	
	printf("Seu ano de nascimento eh: %d", anoN);
	
	system("pause");
	return(0);
	
}
