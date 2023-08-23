#include <stdio.h>
int main() {
    float mpg, kpl;
    printf("Introduzca la cantidad de millas por galón imperial: ");
    scanf("%f", &mpg);
    kpl = 4.54609188 / mpg;
    printf("La cantidad de kilómetros por litro es: %.2f\n", kpl);
    return 0;
}