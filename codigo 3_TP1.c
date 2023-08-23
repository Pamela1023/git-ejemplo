#include <stdio.h>

#include <string.h>


int main() {
    char str[100];
    int i, len;

    printf("Ingrese una cadena de texto: ");
    fgets(str, 100, stdin);

    len = strlen(str);

    printf("\nLa cadena de texto ingresada tiene %d caracteres.\n", len);

    return 0;

}