#include <stdlib.h>

int main() {
    
    float n1, n2, media, nota;
    float somaM = 0;
    int quant;
    int i = 1;
    
    /*
    printf("Digite o valor da primeira nota: \n");
    scanf("%f", &n1); 
    printf("Digite o valor da segunda nota: \n");
    scanf("%f", &n2);
    
    media = (n1 + n2)/2;
    
    printf("A media geral eh: %.2f", media);
    */
    
    printf("Digite a quantidade de provas: \n");
    scanf("%d", &quant);
    
    do {       
        
    printf("Digite a notas da prova %d: \n", i);
    scanf("%f", &nota);
    

   somaM = nota + somaM;
    i++;    
    }while( i <= quant);
    
    media = somaM/quant;
    printf("A media geral eh: %.1f", media);
    
    
    return 0;
}
