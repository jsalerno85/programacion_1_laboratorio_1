float sumarOperandos(float x,float y)
{
    float suma;
    suma=x+y;
    printf("\nLa suma de %.2f y %.2f es igual a %.2f.\n",x,y,suma);
    return 0;
}

float restarOperandos(float x,float y)
{
    float resta;
    resta=x-y;
    printf("\nLa resta de %.2f y %.2f es igual a %.2f.\n",x,y,resta);
    return 0;
}

float dividirOperandos(float x,float y)
{
    float cociente;
    if(y==0)
    {
        printf("\nLa division por el numero 0 no es posible\n");
    }
    else
    {
        cociente=x/y;
        printf("\nEl cociente de %.2f y %.2f es igual a %.2f.\n",x,y,cociente);
        return 0;
    }
}

float multiplicarOperandos(float x,float y)
{
    float multiplicacion;
    multiplicacion=x*y;
    printf("\nLa multiplicacion de %.2f por %.2f es igual a %.2f.\n",x,y,multiplicacion);
    return 0;
}

int factorial(int x)
{
    int i;
    int aux=1;
    for(i=1;i<x+1;i++)
    {
        aux=aux*i;
    }
    printf("\nEl factorial de %d es igual a %d.\n",x,aux);
    return aux;
}
