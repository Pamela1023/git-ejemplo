#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
  // Declaración de variables
  int dados, suma, opcion;
  FILE *archivo;
  // Inicialización de variables
  srand(time(NULL));
  suma = 0;
  opcion = 0;
  // Bucle principal del juego
  while (opcion != 3) {
    // Lanzamiento de los dados
    dados = rand() % 6 + 1;
    dados = rand() % 6 + 1;
    // Suma de las caras
    suma = dados + dados;
    // Comprobación de la suma
    if (suma == 8) {
      printf("¡Has ganado!\n");
      opcion = 3;
    } else if (suma == 7) {
      printf("Has perdido.\n");
      opcion = 3;
    } else {
      printf("La suma de las caras es %d. Puedes seguir lanzando.\n", suma);
      opcion = 1;
    }
    // Guardado de los datos en el archivo
    archivo = fopen("juego8.txt", "a");
    fprintf(archivo, "%d\n", suma);
    fclose(archivo);
  }
  // Visualización del historial de datos
  if (opcion == 2) {
    archivo = fopen("juego8.txt", "r");
    while (!feof(archivo)) {
      fscanf(archivo, "%d\n", &suma);
      printf("%d\n", suma);
    }
    fclose(archivo);
  }
  return 0;
}