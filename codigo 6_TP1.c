#include <stdio.h>


int main() {
    int ini, fin, cont = 0;

    printf("Ingrese el número inicial: ");
    scanf("%d", &ini);

    printf("Ingrese el número final: ");
    scanf("%d", &fin);

    for (int i = ini; i <= fin; i++) {
        if (i % 2 == 0) {
            cont++;
        }
    }

    printf("La cantidad de números pares en el rango dado es: %d", cont);

    return 0;

}