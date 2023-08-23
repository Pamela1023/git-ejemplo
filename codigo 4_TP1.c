#include<stdio.h>

int main()
{
    float angulo;
    int n = 0, potencia = 0, factorial = 0, Factorialn = 1, producto = 0;
    printf("Ingrese el angulo: ");
    scanf("%f", &angulo); 
    n = 4;
    if (n % 2 == 0)
    {
        potencia = 1;
    }
    else
    {
        potencia = -1;
    }
    for (int i = 0; i < n; i++)
    {
        factorial = (2 * i) + 1; 
        for (int l = 1; l <= factorial; l++)
        {
            Factorialn = Factorialn * l;
        }
    }   
    printf("Resultado: potencia = %d, Factorialn = %d\n", potencia, Factorialn);
    return 0;
}
