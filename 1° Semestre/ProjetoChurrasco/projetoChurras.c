#include <stdio.h>
#include <math.h>

int main()	
{
	//Declaracao Variareis
	int homem,homemNB,mulher,mulherNB,crianca;
	int cerveja,cervejah,cervejam;
	float horas,suco,picanha,linguicaApimentada,contrafile,queijoCoalho,queijoCoalhom,queijoCoalhoh,queijoCoalhoc;
	float paoAlho,paoAlhom,paoAlhoh,paoAlhoc;
	
	//Entrada de Dados
	printf("\n Quantidade de homens: ");
	scanf("%i",&homem);
	printf("\n Quantidade de homens que nao bebem cerveja: ");
	scanf("%i",&homemNB);
	
	printf("\n Quantidade de mulheres: ");
	scanf("%i",&mulher);
		printf("\n Quantidade de mulheres que nao bebem cerveja: ");
	scanf("%i",&mulherNB);
	
	printf("\n Quantidade de criancas: ");
	scanf("%i",&crianca);
	
	printf("\n Tempo de duracao do churrasco: ");
	scanf("%f",&horas);
	
	
	//RazaoLogica
	cervejah=(((homem-homemNB)*4)*horas);
	cervejam=(((mulher-mulherNB)*2)*horas);
	cerveja=cervejah+cervejam;
	suco=((crianca+homemNB+mulherNB)*0.2)*horas;
	
	
	queijoCoalhom= mulher*0.03*(horas/2);
	queijoCoalhoh= homem*0.03*(horas/2);
	queijoCoalhoc= crianca*0.01*(horas/2);
	queijoCoalho= (queijoCoalhom+queijoCoalhoh+queijoCoalhoc)/0.5;
	
	paoAlhom= mulher*0.5*(horas/2);
	paoAlhoh= homem*0.3*(horas/2);
	paoAlhoc= crianca*0.2*(horas/2);
	paoAlho= paoAlhom+paoAlhoh+paoAlhoc;
	
	//ResultadoChurras
	printf("\n Quantidade de cerveja consumida pelos homens: %.1i latas",cervejah);
	printf("\n Quantidade de cerveja consumida pelas mulheres: %.1i latas",cervejam);	
	printf("\n Quantidade de suco consumido pelas criancas: %.1f l",suco);	
	printf("\n Quantidade de queijo coalho consumido no Churras: %.0f pcts",ceil(queijoCoalho));
	printf("\n Quantidade de p�o de alho consumido no Churras: %.0f pcts",ceil(paoAlho));

		return 0;
	
}
