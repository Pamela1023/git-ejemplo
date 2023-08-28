#include <stdio.h>
#include <stdbool.h>

bool esPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int numero;
    char continuar;

    FILE *archivo = fopen("salida.txt", "a");

    if (archivo == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return 1;
    }

    printf("¡Bienvenido al Verificador de Números Primos!\n");

    do {
        printf("Ingrese un número: ");
        scanf("%d", &numero);

        bool esNumeroPrimo = esPrimo(numero);

        if (esNumeroPrimo) {
            fprintf(archivo, "%d es un número primo.\n", numero);
            printf("%d es un número primo.\n", numero);
        } else {
            fprintf(archivo, "%d es un número compuesto.\n", numero);
            printf("%d es un número compuesto.\n", numero);
        }

        printf("¿Desea verificar otro número? (s/n): ");
        scanf(" %c", &continuar);
    } while (continuar == 's' || continuar == 'S');

    fclose(archivo);

    archivo = fopen("salida.txt", "r");

    if (archivo != NULL) {
        printf("\nHistorial de verificaciones:\n");
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
