#include <stdio.h>
#include <ctype.h>

int main() {
    char texto[1000];
    int i;

    printf("Digite um texto: ");
    fgets(texto, sizeof(texto), stdin);

    for (i = 0; texto[i] != '\0'; i++) {
        if (islower(texto[i])) {
            texto[i] = toupper(texto[i]);
        } else if (isupper(texto[i])) {
            texto[i] = tolower(texto[i]);
        }
    }

    printf("Texto convertido: %s\n", texto);

    return 0;
}