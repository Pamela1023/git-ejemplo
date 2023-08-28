#include <stdio.h>

float calcularIVA(float precio) {
    return precio * 0.12;
}

float calcularPrecioSinIVA(float precio) {
    return precio / 1.12;
}

int main() {
    float precio, iva, precioSinIVA;
    char continuar;

    FILE *archivo = fopen("iva.txt", "a");

    if (archivo == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return 1;
    }

    printf("¡Bienvenido al Calculador de IVA!\n");

    do {
        printf("Ingrese el precio en quetzales: ");
        scanf("%f", &precio);

        iva = calcularIVA(precio);
        precioSinIVA = calcularPrecioSinIVA(precio);

        fprintf(archivo, "Precio: %.2f  -  IVA: %.2f  -  Precio sin IVA: %.2f\n", precio, iva, precioSinIVA);

        printf("Precio: %.2f  -  IVA: %.2f  -  Precio sin IVA: %.2f\n", precio, iva, precioSinIVA);

        printf("¿Desea calcular otro precio? (s/n): ");
        scanf(" %c", &continuar);
    } while (continuar == 's' || continuar == 'S');

    fclose(archivo);

    archivo = fopen("iva.txt", "r");

    if (archivo != NULL) {
        printf("\nHistorial de cálculos:\n");
        char linea[100];
        while (fgets(linea, sizeof(linea), archivo) != NULL) {
            printf("%s", linea);
        }
        fclose(archivo);
    } else {
        printf("No se pudo abrir el archivo para mostrar el historial.\n");
    }

    return 0;
}
