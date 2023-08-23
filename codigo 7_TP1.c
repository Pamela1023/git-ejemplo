#include <stdio.h>


int main() {
    int num, factorial = 1;

    printf("Ingrese un número: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }

    printf("El factorial de %d es: %d", num, factorial);

    return 0;

}