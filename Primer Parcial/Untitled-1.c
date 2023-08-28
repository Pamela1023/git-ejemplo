#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nombre[50];
    int puntuacion;
} Jugador;

void jugarAdivinanzas(int *puntuacion) {
    printf("Adivinanza 1:\n");
    printf("Con una manguera, casco y escalera, apago el fuego de la hoguera. ¿Quién soy?\n");
    char respuesta1[100];
    scanf(" %[^\n]", respuesta1);
    if (strcmp(respuesta1, "el bombero") == 0) {
        (*puntuacion)++;
    }

    printf("Adivinanza 2:\n");
    printf("Es el héroe de la comunidad y la cuida noche y día para conservar la seguridad.\n");
    char respuesta2[100];
    scanf(" %[^\n]", respuesta2);
    if (strcmp(respuesta2, "el policia") == 0) {
        (*puntuacion)++;
    }

    printf("Tu puntuación actual es: %d\n", *puntuacion);
}

void verHistorial(Jugador jugadores[], int numJugadores) {
    printf("\nHistorial de jugadores:\n");
    for (int i = 0; i < numJugadores; i++) {
        printf("Jugador: %s - Puntuación: %d\n", jugadores[i].nombre, jugadores[i].puntuacion);
    }
}

void borrarHistorial() {
    FILE *archivo = fopen("salida.txt", "w");
    if (archivo != NULL) {
        fclose(archivo);
        printf("Historial de jugadores borrado.\n");
    } else {
        printf("No se pudo abrir el archivo para borrar el historial.\n");
    }
}

int main() {
    int opcion, puntuacion = 0, numJugadores = 0;
    Jugador jugadores[100]; // Supongamos un máximo de 100 jugadores

    FILE *archivo = fopen("salida.txt", "a");

    if (archivo == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return 1;
    }

    printf("¡Bienvenido al Juego de Adivinanzas!\n");

    do {
        printf("\nMenú:\n");
        printf("1. Jugar a las adivinanzas\n");
        printf("2. Ver el historial de jugadores\n");
        printf("3. Borrar historial de jugadores\n");
        printf("4. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                jugarAdivinanzas(&puntuacion);
                break;
            case 2:
                verHistorial(jugadores, numJugadores);
                break;
            case 3:
                borrarHistorial();
                numJugadores = 0; // Reiniciar el número de jugadores en el historial
                break;
            case 4:
                if (numJugadores < 100) {
                    // Guardar el nombre y puntuación del jugador actual en el historial
                    printf("Ingrese su nombre: ");
                    scanf("%s", jugadores[numJugadores].nombre);
                    jugadores[numJugadores].puntuacion = puntuacion;
                    numJugadores++;

                    // Guardar en el archivo
                    fprintf(archivo, "Jugador: %s - Puntuación: %d\n", jugadores[numJugadores - 1].nombre, jugadores[numJugadores - 1].puntuacion);

                    fclose(archivo);
                } else {
                    printf("Número máximo de jugadores alcanzado.\n");
                }
                break;
            default:
                printf("Opción no válida. Seleccione nuevamente.\n");
        }
    } while (opcion != 4);

    fclose(archivo);

    return 0;
}
