float sumarOperandos(float x,float y) // Función que calcula la suma de dos números flotantes.
{
    float suma; // Declaración de la variable "suma", cuyo valor será la suma de de los valores "x" e "y".
    suma=x+y; // Valor de la variable "suma".
    printf("\nLa suma de %.2f y %.2f es igual a %.2f.\n",x,y,suma); // Mensaje donde se indica el resultado final, con solo dos decimales.
    return 0; // Valor de retorno de la función.
}

float restarOperandos(float x,float y) // Función que calcula la resta de dos números flotantes.
{
    float resta; // Declaración de la variable "resta", cuyo valor será la resta de los valores "x" e "y".
    resta=x-y; //Valor de la variable "resta".
    printf("\nLa resta de %.2f y %.2f es igual a %.2f.\n",x,y,resta); // Mensaje donde se indica el resultado final, con solo dos decimales.
    return 0; // Valor de retorno de la función.
}

float dividirOperandos(float x,float y)
{
    float cociente; // Declaración de la variable "cociente", cuyo valor será el cociente de los valores "x" e "y".
    if(y==0) // Condición donde el valor de la variable "y" es igual a 0.
    {
        printf("\nLa division por el numero 0 no es posible\n"); // Sentencia que indica el error al dividir por 0.
    }
    else // Condición donde el valor de la variable "y" no es igual a 0.
    {
        cociente=x/y; // Valor de la variable "cociente".
        printf("\nEl cociente de %.2f y %.2f es igual a %.2f.\n",x,y,cociente); // Mensaje donde se indica el resultado final, con solo dos decimales.
        return 0; // Valor de retorno de la función.
    }
}

float multiplicarOperandos(float x,float y)
{
    float multiplicacion; // Declaración de la variable "multiplicacion", cuyo valor será la multiplicacion de los valores "x" e "y".
    multiplicacion=x*y; //Valor de la variable "multiplicacion".
    printf("\nLa multiplicacion de %.2f por %.2f es igual a %.2f.\n",x,y,multiplicacion); // Mensaje donde se indica el resultado final, con solo dos decimales.
    return 0; // Valor de retorno de la función.
}

int factorial(int x)
{
    int i; // Declaración de la variable "i", que será utilizada para la cantidad de iteraciones y condiciones del for.
    int aux=1; // Declaración y valor de la variable "aux", que se utilizará para guardar los valores de cada iteración del for.
    for(i=1;i<x+1;i++) // Cantidad de iteraciones que se realizarán (desde i=1 hasta el valor de la variable "x").
    {
        aux=aux*i; // Valor que tomará la variable "aux" luego de cada iteración.
    }
    printf("\nEl factorial de %d es igual a %d.\n",x,aux); // Mensaje donde se indica el resultado final, con solo dos decimales.
    return aux; // Valor de retorno de la función.
}
