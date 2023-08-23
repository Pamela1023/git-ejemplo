#include <stdio.h>


int main() {
    int num, i, j;

    printf("Ingrese un numero: ");
    scanf("%d", &num);

    printf("\nTabla de multiplicar del %d:\n", num);

    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= 10; j++) {
            printf("%d x %d = %d\t", num, i * j, i * j);
        }
        printf("\n");
    }

    return 0;

}