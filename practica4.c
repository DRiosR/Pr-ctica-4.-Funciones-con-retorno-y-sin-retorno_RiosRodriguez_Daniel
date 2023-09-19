/*
Práctica 4. Funciones con retorno y sin retorno
Daniel Rios Rodiguez
18 de septiembre de 2023
1. Fibonacci sin Recursión: Crea un programa que calcule y muestre los primeros n
términos de la serie de Fibonacci sin utilizar recursión.
2. Fibonacci con Recursión: Crea un programa en C que calcule y muestre el término
n de la serie de Fibonacci utilizando una función recursiva.
3. Triángulo de Pascal: Crea un programa en C que genere y muestre las primeras n
filas del Triángulo de Pascal.
*/
#include <stdio.h>
#include <stdlib.h>
//caso 1
void fibonacci1(int a);
//caso 2
void fibonacci2(int a);
//caso 3
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

void fibonacci2(int a)
{
    int ante = 0, despu = 1, suma;
    suma = ante + despu;
    printf("%d, ", ante);
    ante = despu;
    despu = suma;

    return fibonacci2(a - 1);
}

int factorial(int a)
{
    int i, fac = 1;
    for (i = 1; i <= a; i++)
    {
        fac = fac * i;
    }
    return fac;
}
int pascal(int a, int b)
{
    return factorial(a) / (factorial(b) * factorial(a - b));
}