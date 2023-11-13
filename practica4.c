/*
Nombre del archivo: practica4.c
Autor: Daniel Rios Rodriguez
Fecha de creación: 12 de Noviembre de 2023
Descripción: este codigo contiene 3 opciones a realizar, te da los numeros de la sucesion fibonacci de tu eleccion,
te saca el factorial de un numero y te genera el triangulo de pascal,.
*/

#include <stdio.h>
#include <stdlib.h>
// caso 1
void fibonacci1(int a);
// caso 2
void fibonacci2(int a);
// caso 3
int factorial(int a);
int pascal(int a, int b);

int main()
{
    // inicio
    int n, act, repe;
    // caso 3
    int fila, i, j, pas;
    printf("QUE ACTIVIDAD QUIERES VER?\n");
    scanf("%d", &act);
    switch (act)
    {
    case 1:
    repetir:
        system("cls");
        printf("CUANTAS VECES QUIERES REPETIR EL PROGRAMA\n");
        scanf("%d", &n);
        fibonacci1(n);
        printf("\n2QUIERES PONER OTRO NUMERO?\n1=SI\n2=NO\n");
        scanf("%d", &repe);
        if (repe == 1)
        {
            goto repetir;
        }
        else
        {
            printf("GRACIAS POR PROBAR EL CODIGO\n");
        }
        break;
    case 2:
    repetir2:
        system("cls");
        printf("CUANTAS VECES QUIERES REPETIR EL PROGRAMA\n");
        scanf("%d", &n);
        fibonacci2(n);
        printf("\nQUIERES PONER OTRO NUMERO?\n1=SI\n2=NO\n");
        scanf("%d", &repe);
        if (repe == 1)
        {
            goto repetir2;
        }
        else
        {
            printf("GRACIAS POR PROBAR EL CODIGO\n");
        }
        break;
    case 3:
    repetir3:
        system("cls");
        printf("CUANTAS FILAS TENDRA EL TRIANGULO DE PASCAL?\n");
        scanf("%d", &fila);
        for (i = 0; i < fila; i++)
        {
            for (j = 0; j < fila - i; j++)
            {
                printf(" ");
            }
            for (j = 0; j <= i; j++)
            {
                pas = pascal(i, j);
                printf("%d ", pas);
            }
            printf("\n");
        }
        printf("\nQUIERES PONER OTRO NUMERO?\n1=SI\n2=NO\n");
        scanf("%d", &repe);
        if (repe == 1)
        {
            goto repetir3;
        }
        else
        {
            printf("GRACIAS POR PROBAR EL CODIGO\n");
        }
        break;
    }
    return 0;
}
/*
Función: fibonacci1
Descripción: Calcula y muestra los primeros 'a' términos de la serie de Fibonacci sin utilizar recursión.
Parámetros:
- a: Número de términos a imprimir.
Valor de retorno: Ninguno (void).
*/
void fibonacci1(int a);
void fibonacci1(int a)
{
    int i, ante = 0, despu = 1, suma;
    for (i = 0; i < a; i++)
    {
        suma = ante + despu;
        printf("%d, ", ante);
        ante = despu;
        despu = suma;
    }
}
/*
Función: fibonacci2
Descripción: Calcula y muestra el término 'n' de la serie de Fibonacci utilizando una función recursiva.
Parámetros:
- a: Número de términos a imprimir.
Valor de retorno: Ninguno (void).
*/
void fibonacci2(int a)
{
    int ante = 0, despu = 1, suma;
    suma = ante + despu;
    printf("%d, ", ante);
    ante = despu;
    despu = suma;

    return fibonacci2(a - 1);
}
/*
Función: factorial
Descripción: Calcula el factorial de un número entero.
Parámetros:
- a: Número entero para el cual se calculará el factorial.
Valor de retorno: El factorial de 'a'.
*/
int factorial(int a)
{
    int i, fac = 1;
    for (i = 1; i <= a; i++)
    {
        fac = fac * i;
    }
    return fac;
}
/*
Función: pascal
Descripción: Calcula el coeficiente binomial (n choose k) para dos números enteros.
Parámetros:
- a: Número entero n.
- b: Número entero k.
Valor de retorno: El coeficiente binomial de 'a' y 'b'.
*/
int pascal(int a, int b)
{
    return factorial(a) / (factorial(b) * factorial(a - b));
}