#include <stdio.h>
#include <conio.h>
int eleccion(){
    char opcion=0;
    printf("Seleccione el volumen que quiere seleccionar: ");
    printf("\n(c), cubo");
    printf("\n(e), esfera");
    printf("\n(t), piramide triangular");
    printf("\n(p), piramide cuadrada");
    printf("\n(S) Salir\n");
    scanf("%c", &opcion);
    return opcion;
}
int  main()
{
    char opcion_seleccionada=0;
    float volumen=0, lado=0, radio=0, altura=0, ancho=0;
    releccion: 
    opcion_seleccionada=0;
    printf("\n------------------------------------\n");
    opcion_seleccionada=eleccion();
    switch (opcion_seleccionada)
    {
    // Volumen de un cubo
    case ('c'):
        printf("Cual es el lado del cubo: ");
        scanf("%f", &lado);
        volumen=lado*lado*lado;
        printf("El volumen del cubo es: %0.2f", volumen);
        break;
    // Volumen de esfera
    case ('e'):
        printf("Cual es el radio de una esfera: ");
        scanf("%f", &radio);
        volumen=(1.3333333333)*(3.141592654)*radio*radio*radio;
        printf("El volumen de la esfera: %0.02f", volumen);
        break;
    // Volumen piramide triangular
    case ('t'):
        printf("Ingrese el lado de la base del triangulo: ");
        scanf("%f", &lado);
        printf("Ingrese el ancho o la altura de la base del triangulo: ");
        scanf("%f", &ancho);
        printf("Ingrese la altura de la piramide: ");
        scanf("%f", &altura);
        volumen=lado*ancho*0.5*altura;
        printf("El volumen es: %0.2f", volumen);
        break;
    // Volumen piramide cuadrada
    case ('p'):
        printf("Ingrese el lado de la base del cuadrado: ");
        scanf("%f", &lado);
        printf("Ingrese la altura de una piramide: ");
        scanf("%f", &altura);
        volumen=(lado*lado*altura)/3;
        printf("El volumen es: %0.2f", volumen);
        break;
    case ('s'):
        printf("Gracias por salir");
        break;
    default:
        printf("Opcion invalida");
        goto releccion;
        break;
    }
    getch();
    return 0;
}