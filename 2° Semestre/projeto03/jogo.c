#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <time.h>
const UINT Latin1_Codepage = 65001;


int main() {
	
	SetConsoleOutputCP(Latin1_Codepage);
	
	
	srand(time(NULL));
	int numeroSecreto = rand() % 1000 + 1;
	
	printf("Preparado para jogar ADIVINHAÇÃO?\n");
	
	int* tentativas;
	char opcao[1];
	
	int n = 1;
	
	while(1) {
		
		if(n == 1) {
			tentativas = (int*)malloc(n *sizeof(int));
		}
		else {
			tentativas =(int*)realloc(tentativas, n *sizeof(int));
		}
	
	
	printf("Digite um número :");
	scanf("%d", &tentativas[n-1]);
		

	if(tentativas[n-1] == numeroSecreto){
		
		printf("Parabéns você ACERTOU!!!!\n");
		printf("Número de tentivas: %d\n", n);
		printf("Valores Tentados: \n");
		for(int i = 0; i < n; i++) {
			printf("%d ,", tentativas[i]);
		}
		
		printf("\n Você deseja jogar novamente VENCEDOR ? [y/n]");
		scanf("%c", &opcao);
		if(opcao == "y"){
			numeroSecreto = rand() % 1000 + 1;
			return 1;
		} else {
			
			return -1;
			
		}
		
		return -1;
	} else {
		
		if(tentativas[n-1] > numeroSecreto) {
			printf("Digite um número MENOR!\n");
		} else {
			printf("Digite um número MAIOR!\n");
		}
		n++;
	}
}
}