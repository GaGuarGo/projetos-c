#include <stdio.h>
#include <windows.h>
const UINT Latin1_Codepage = 65001;

int main() {
	
	SetConsoleOutputCP(Latin1_Codepage);
	
	int w[9];
	int* i = 5;
	
	w[0] = 17;
	w[i/2] = 9;
	w[2*i-2] = 95;
	w[i-1] = w[8]/2;
	w[i] = w[2];
	w[i + 1] = w[i]+ w[i-1];
	w[w[2]-2] = 78;
	w[w[i]-1] = w[1]*w[i];
		
	
for( i = 0; i < 9; i++){
	
	
	printf("O %d° elemento é: %d\n", i + 1, w[i]);
	
}
	 
	             
}