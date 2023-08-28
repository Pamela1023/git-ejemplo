#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void bubbleSort(int array[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

float calculateMean(int array[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += array[i];
    }
    return (float)sum / n;
}

float calculateMedian(int array[], int n) {
    bubbleSort(array, n);
    if (n % 2 == 0) {
        return (float)(array[n / 2 - 1] + array[n / 2]) / 2;
    } else {
        return array[n / 2];
    }
}

int calculateMode(int array[], int n) {
    int maxValue = 0, maxCount = 0;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (array[j] == array[i]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            maxValue = array[i];
        }
    }
    return maxValue;
}

float calculateStandardDeviation(int array[], int n, float mean) {
    float sum = 0;
    for (int i = 0; i < n; i++) {
        sum += pow(array[i] - mean, 2);
    }
    return sqrt(sum / n);
}

float calculateVariance(int array[], int n, float mean) {
    float sum = 0;
    for (int i = 0; i < n; i++) {
        sum += pow(array[i] - mean, 2);
    }
    return sum / n;
}

int main() {
    int calificaciones[5];
    printf("Ingrese 5 calificaciones (0-100):\n");

    for (int i = 0; i < 5; i++) {
        printf("Calificación %d: ", i + 1);
        scanf("%d", &calificaciones[i]);
    }

    FILE *archivo = fopen("salida.txt", "w");

    if (archivo == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return 1;
    }

    fprintf(archivo, "Historial de calificaciones:\n");
    for (int i = 0; i < 5; i++) {
        fprintf(archivo, "Calificación %d: %d\n", i + 1, calificaciones[i]);
    }
    fclose(archivo);

    float mean = calculateMean(calificaciones, 5);
    printf("Media: %.2f\n", mean);

    float median = calculateMedian(calificaciones, 5);
    printf("Mediana: %.2f\n", median);

    int mode = calculateMode(calificaciones, 5);
    printf("Moda: %d\n", mode);

    bubbleSort(calificaciones, 5);
    int range = calificaciones[4] - calificaciones[0];
    printf("Rango: %d\n", range);

    float stdDeviation = calculateStandardDeviation(calificaciones, 5, mean);
    printf("Desviación Estándar: %.2f\n", stdDeviation);

    float variance = calculateVariance(calificaciones, 5, mean);
    printf("Varianza: %.2f\n", variance);

    return 0;
}
