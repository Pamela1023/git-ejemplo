#include <stdio.h>
#include <stdlib.h>
int main() {
    char mensaje[100];
    int desplazamiento;
    printf("Introduzca un mensaje de texto en mayúsculas (sin espacios ni caracteres especiales): ");
    scanf("%s", mensaje);
    printf("Introduzca un número fijo de desplazamiento: ");
    scanf("%d", &desplazamiento);
    for (int i = 0; mensaje[i] != '\0'; i++) {
        mensaje[i] = (mensaje[i] - 'A' + desplazamiento) % 26 + 'A';
    }
    printf("El mensaje encriptado es: %s\n", mensaje);
    return 0;
}