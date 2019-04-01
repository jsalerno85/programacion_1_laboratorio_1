#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
int sumarOperandos(int x,int y);

int main()
{
    char seguir='s';
    int opcion=0;
    int A;
    int B;

    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=%d)\n",A);
        printf("2- Ingresar 2do operando (B=%d)\n",B);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf("Ingrese primer operando: ");
                scanf("%d",A);
                //printf("\nSeguir? S/N");
                break;
            case 2:
                printf("Ingrese segundo operando: ");
                scanf("%d",B);
                //printf("\nSeguir? S/N");
                break;
            case 3:
                void sumarOperandos(int A,int B);
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                break;
            case 8:
                break;
            case 9:
                seguir = 'n';
                break;
        }


    }
    return 0;
}

int sumarOperandos(int x,int y)
{
    int suma;
    suma=(x,y);
    printf("La suma de %d y %d es igual a %d",x,y,suma);
    return suma;
}
