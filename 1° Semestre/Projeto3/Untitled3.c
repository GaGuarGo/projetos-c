#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	
	int i, ini, limite, soma;
	
	ini = 2;
	limite = 6;
	soma = 0;
	
	
	for (i >= ini; i <= limite;){
		if((i % 2) != 0){
			soma = soma + i;
		}else {
			i = i + 1;
	  } 
	  	printf("A soma os numeros eh:%d \n", soma);
	}
	


	
	system("pause");
	return(0);
}
