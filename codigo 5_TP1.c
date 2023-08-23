#include <stdio.h>


int main() {
    int opcion;
    double temperatura, fahrenheit, celsius;

    printf("Ingrese la temperatura: ");
    scanf("%lf", &temperatura);

    printf("Ingrese la opcion (1 para Celsius a Fahrenheit, 2 para Fahrenheit a Celsius): ");
    scanf("%d", &opcion);

    if (opcion == 1) {
        fahrenheit = (temperatura * 9 / 5) + 32;
        printf("\n%.2lf grados Celsius equivale a %.2lf grados Fahrenheit\n", temperatura, fahrenheit);
    } else if (opcion == 2) {
        celsius = (temperatura - 32) * 5 / 9;
        printf("\n%.2lf grados Fahrenheit equivale a %.2lf grados Celsius\n", temperatura, celsius);
    } else {
        printf("\nOpcion invalida\n");
    }

    return 0;

}