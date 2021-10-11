// suma.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.

// mi primera funcion
int sumaDatos(int a, int b) {

    int resultado;
    resultado = a + b;






    return resultado;
}





#include <iostream>

int main()

{
    /*sumar dos numeros, estos numeros pedirpor por teclado*/
    int idato1;
    int idato2;
    int iresultado;

    printf("\n ----- SUMA DE DATOS [Dos datos]-----\n");

    //lectura de datos
    printf("Ingresa tu primer numero:");
    scanf_s("%d", &idato1); // entrada de datos tipo numerico por teclado

    printf("Ingresa tu segundo numero:");
    scanf_s("%d", &idato2); // entrada de datos tipo numerico por teclado

    //Operacion
    iresultado = sumaDatos(idato1,idato2);

    //imprimir el resultado
    printf("el resultado de la suma es:, %d", iresultado);

    return 0;
}

