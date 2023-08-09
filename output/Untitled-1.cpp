#include <stdio.h>
#include <stdlib.h>

int main () {
    double num1, num2;
    system ("clear")
    printf("ingrese el primer numero: ");
    if (scanf("%if", &num1) != 1) {
        printf("Error: ingrese un numero real valido.\n");
        return 1;
    }
printf("Ingrese el segundo numero: ")
if (scanf("%if",&num2) != 1) {
    printf("Error: ingrese un numero real valido,\n");
    retunr 1;
}

double suma= num1 + num2;
double resta= num1 - num2;
double multiplicacion= num1 * num2
