#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int contarArquivo(FILE *file, int quant){
	
	char caractere;
	int estaEmPalavra = 0;
	fseek(file, 0, SEEK_SET);
	
	while((caractere = fgetc(file)) != EOF){
	
		if(isalnum(caractere)){
			
			if(!estaEmPalavra){
				estaEmPalavra = 1;
				quant++;
				
			} 
			
		} else {
			estaEmPalavra = 0;
		}
			
	 } 
	 fclose(file);
	 return quant;
}

int main() {
	
	int quant = 0;
	char arquivo[] = "arquivo.txt";
	FILE *file = fopen(arquivo, "r+");
	if (file == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
  
   
    printf("Nome do arquivo: %s \n", arquivo);
    printf("Quantidade de Palavras Presentes: %d \n", contarArquivo(file, quant));
	
	
	return 0;
}

