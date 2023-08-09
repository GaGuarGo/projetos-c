#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
const UINT Latin1_Codepage = 65001;

int main() {
	
	SetConsoleOutputCP(Latin1_Codepage);
	
	int n, i;
	int*  vetor;
	
	printf("Digite o tamanho inicial do vetor:\n");
	scanf("%d", &n);
	
	// Alocação inicial do vetor
	vetor =(int*)malloc(n *sizeof(int));
	
	// Verificação se a alocação foi bem-sucedida
	if(vetor == NULL) 
	{
		printf("Falha na alocação de memória.\n");
		return 1;
	}
	
	printf("Digite os elementos do vetor:\n");
	for(i =0; i <n; i++) 
	{
		scanf("%d", &vetor[i]);
	}
	
	
	printf("Vetor original:\n");
	for(i =0; i <n; i++) 
	{
		printf("%d", vetor[i]);
	}
	
	printf("\n");
	
	// Realocação do vetor para um novo tamanho
	
	int novoTamanho;
	printf("Digite o novo tamanho do vetor: \n");
	scanf("%d", &novoTamanho);
	
	vetor =(int*)realloc(vetor, novoTamanho *sizeof(int));
	
		if(vetor == NULL) 
	{
		printf("Falha na alocação de memória.\n");
		return 1;
	}
	
	// Preenchendo os elementos adicionais do vetor
	
	printf("Digite os elementos adicionais do vetor:\n");
	for(i =n; i <novoTamanho; i++) 
	{
		scanf("%d", &vetor[i]);
	}
	
	
	printf("Vetor realocado:\n");
	for(i =0; i <novoTamanho; i++) 
	{
		printf("%d", vetor[i]);
	}
	
	printf("\n");
	
	// Liberação da memória alocada
	free(vetor);
	return 0;
	
}