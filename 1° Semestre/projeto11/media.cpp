#include <stdio.h>

int main() {
	
	float p1, p2, media;
	
	printf("Digite a nota da primeira prova:\n");
	scanf("%f", &p1);
	printf("Digite a nota da segunda prova:\n");
	scanf("%f", &p2);
	
	media = (p1 + p2)/2;
	
	if(media >= 5){
		printf("APROVADO!");
	}else {
		printf("REPROVADO! \nFaltou %.1f pontos para passar!", 5 - media);
	}
	
	return 0;
}