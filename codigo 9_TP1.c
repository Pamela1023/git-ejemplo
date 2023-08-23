#include <stdio.h>


int main() {
    int n, t1 = 0, t2 = 1, nextTerm = 0;

    printf("Ingrese el número de términos de la serie de Fibonacci: ");
    scanf("%d", &n);

    printf("Los primeros %d términos de la serie de Fibonacci son: ", n);

    if (n <= 0) {
        printf("Ingrese un número positivo.");
    } else if (n == 1) {
        printf("%d", t1);
    } else if (n == 2) {
        printf("%d %d", t1, t2);
    } else {
        printf("%d %d", t1, t2);

        for (int i = 3; i <= n; i++) {
            nextTerm = t1 + t2;
            printf(" %d", nextTerm);
            t1 = t2;
            t2 = nextTerm;
        }
    }

    return 0;

}