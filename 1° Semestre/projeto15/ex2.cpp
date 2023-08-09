#include <stdio.h>

int main(){
	
	int i, num;
	int neg, pos;
	
	for(i = 1; i <= 10; i++){
		
		printf("Digite o %d° numero:\n", i);
		scanf("%d", &num);
		
		if( num > 0){
			pos++;
		} else {
			neg++;
		}
		
	}
	
	printf("NEGATIVOS: %d\n", neg - 1);
	printf("POSITIVOS: %d\n", pos);
	
	return 0;
}
