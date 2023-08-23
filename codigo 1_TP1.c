#include <stdio.h>
int main () {
    int op, uno, dos;
    do {
        printf(" --- Calculadora ---\n");
        printf("\n¿Qué desea hacer\n");
        printf("1) Sumar\n");
        printf("2) Multiplicar\n");
        printf("3) Salir\n");
        scanf("%d",&op);
    switch(op){
        case 1:
        printf("\tSumar\n");
        printf("introduzca los números a sumar separados por comas\n");
        scanf("%d, %d" ,&uno, &dos);
        printf("%d + %d = %d\n", uno, dos, (uno + dos));
        break;
        case 2:
        printf("\tMultiplicar\n");
        printf("introduzca los números a multiplicar separados por comas\n");
        scanf("%d, %d" ,&uno, &dos);
        printf("%d * %d = %d\n", uno, dos, (uno * dos));
        break;
        case 3:
        printf("\tSalir\n");
        break;
        default:
        printf("\tOpción inválida.\n");
    }
  } while (op !=3);
  return 0;
}  