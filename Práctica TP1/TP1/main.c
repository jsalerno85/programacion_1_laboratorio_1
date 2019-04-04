#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

float sumarOperandos(float,float);
float restarOperandos(float,float);
float dividirOperandos(float,float);
float multiplicarOperandos(float,float);
int factorial(int);

int main()
{
    char seguir='s';
    int opcion=0;
    float A=0;
    float B=0;

    while(seguir=='s')
    {
        printf("\n1- Ingresar 1er operando (A=%.2f)\n",A);
        printf("2- Ingresar 2do operando (B=%.2f)\n",B);
        printf("3- Calcular la suma (A=%.2f+B=%.2f)\n",A,B);
        printf("4- Calcular la resta (A=%.2f-B=%.2f)\n",A,B);
        printf("5- Calcular la division (A=%.2f/B=%.2f)\n",A,B);
        printf("6- Calcular la multiplicacion (A=%.2f*B=%.2f)\n",A,B);
        printf("7- Calcular el factorial (A=%.2f)\n",A);
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf("\nIngrese primer operando: ");
                scanf("%f",&A);
                break;
            case 2:
                printf("\nIngrese segundo operando: ");
                scanf("%f",&B);
                break;
            case 3:
                sumarOperandos(A,B);
                break;
            case 4:
                restarOperandos(A,B);
                break;
            case 5:
                dividirOperandos(A,B);
                break;
            case 6:
                multiplicarOperandos(A,B);
                break;
            case 7:
                factorial(A);
                break;
            case 8:
                sumarOperandos(A,B);
                restarOperandos(A,B);
                dividirOperandos(A,B);
                multiplicarOperandos(A,B);
                factorial(A);
                break;
            case 9:
                seguir = 'n';
                break;
        }

    }
    return 0;
}
