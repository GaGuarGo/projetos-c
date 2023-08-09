#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <locale.h>

void menu() {
	
	printf("==========================\n");
	printf("          SYSTEM          \n");
	printf("==========================\n\n\n");
	//system("pause");
	_sleep(100);
	
	printf("Orientação:.....\n");
	printf("Explodindo o computador em .... \n");
	
	_sleep(1000); printf("1.");
	_sleep(1000); printf("2.");
	_beep(341, 2000);
	
}

void som() {
	
	int i = 2;
	
	do{
		
		_beep(341, 2000);
		_sleep(1000);
	} while (i > 0);
	
}

int main() {
	
	setlocale(LC_ALL, "portuguese");
	
	//menu();
	
	//som();
	//system("calc");
	//system("color D0");
	system("date /t");
	printf("ORIENTAÇÃO");
	
	return 0;
}

