#include <stdio.h>
#include <math.h>

int main() {
	
	int homens, mulheres, criancas;
	int horas;
	float carne, pao, cerveja, refri, suco, queijo, paoAlho, linguica, frango;
	
	printf("\n ------------------------------------------------------------ \n LISTINHA DO CHURRASCO! \n ------------------------------------------------------------\n\n\n");
	
	printf("Digite a quantidade de Homens:\n");
	scanf("%d", &homens);
	printf("Digite a quantidade de Mulheres:\n");
	scanf("%d", &mulheres);
	printf("Digite a quantidade de Crianças:\n");
	scanf("%d", &criancas);
	printf("Digite a duração desse churrasco: [h]\n");
	scanf("%d", &horas);
	
	carne = (homens * 0.3) + (mulheres * 0.2) + (criancas * 0.1);
	linguica = ((homens + mulheres) * 0.04 + (criancas * 0.02)) * horas;
	frango = ((homens + mulheres) * 0.05 + (criancas * 0.02)) * horas;
	pao = (homens + mulheres + criancas) * 0.1 * horas;
	cerveja = (((homens + mulheres) * 3) * horas)/12;
	refri = criancas * 0.2 * horas;
	suco = criancas * 0.15 * horas;
	queijo = (((homens + mulheres) * 0.03) + (criancas * 0.01) ) * horas;
	//calculado em pacotes
	paoAlho = (((homens + mulheres) * 0.2) + criancas * 0.1) * horas/5;
	
	
	printf("Quantidade de Carne a ser comprada: %.1f Kg", carne);
	printf("\nQuantidade de Frango a ser comprada: %.1f Kg", frango);
	printf("\nQuantidade de Linguiça a ser comprada: %.1f Kg", linguica);
	printf("\nQuantidade de Queijo a ser comprada: %.1f Kg", queijo);
	printf("\nQuantidade de Pao de Alho a ser comprada: %.1f pcts", ceil(paoAlho));
	printf("\nQuantidade de Pao a ser comprada: %.1f unidades", ceil(pao));
	printf("\nQuantidade de Cerveja a ser comprada: %.1f fardos", cerveja);
	printf("\nQuantidade de Suco a ser comprada: %.1f L", suco);
	printf("\nQuantidade de Refri a ser comprada: %.1f L", refri);
	
	return 0;
}
