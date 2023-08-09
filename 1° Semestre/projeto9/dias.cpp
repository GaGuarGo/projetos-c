#include <stdio.h>

int main() {
	
	int ano = 2022;
	int anoN;
	float res;
	
	printf("Digite o ano em que voce nasceu: \n");
	scanf("%d", &anoN);
	
	res = (ano - anoN) * 365;
	printf("O numero de dias vividos e: %.1f", res);
	
	return 0;
}
