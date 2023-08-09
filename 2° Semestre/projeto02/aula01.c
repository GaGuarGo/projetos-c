#include <windows.h>
#include <iostream>
#include <stdlib.h>


const UINT Latin1_Codepage = 1252;
using namespace std;
int main(int argc, char *argv[])
{
	char umaLetra = 'A';
	int umNumero = 97;
	SetConsoleOutputCP( Latin1_Codepage );
	printf("É uma letra \'%c\', mas podeser o número %d\n", umaLetra, umaLetra);
	printf("É o número %d mas pode ser uma letra \'%c\'\n", umNumero, umNumero);
	system("PAUSE");
	return 0;
}