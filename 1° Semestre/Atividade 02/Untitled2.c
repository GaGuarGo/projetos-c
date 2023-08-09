#include <stdlib.h>
#include <stdio.h>
#include <math.h>

main () {
	
 int vo, ang;
 int g = 10;
 
 printf("Digite a velocidade inical do projetil [m/s]\n");
 scanf("%d", &vo);
 
 printf("Digite o angulo entre o plano e o canhao\n");
 scanf("%d", &ang);

 float s;
 
 s = ( vo * vo * sin(2 * ang))/g;
 
 printf("O alcance do Projetil eh[m]: %.2f", s);


}
