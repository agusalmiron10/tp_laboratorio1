#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "funciones aritmeticas.h"


int main()
{


    int opcion;
    int numeroUno;
    int numeroDos;
    int suma;
    int multiplicar;
    int resta;
    float dividir;
    int factorialA;
    int factorialB;
    int terminar;

     terminar=1;
    while(terminar==1)

    {
        printf("\n**1.Ingrese su primer  numero**\n**2.Ingrese su  segundo numero**\n**3.Calcular**\n**4.Mostrar operacion**\n**5.Salir**\n");
        printf("\nElija su  opcion: ");
        scanf("%d", &opcion);

        while(opcion<1 || opcion>5)
        {
            printf("Error, esa opcion no se encuentra disponible, reingrese la opcion que desee.\n");
            printf("\n1.Ingresar primer numero**\n**2.Ingresar segundo numero**\n**3.Calcular**\n**4.Mostrar operacion \n5.Salir**\n");
            printf("Elija la opcion: ");
            scanf("%d", &opcion);

        }


        switch(opcion)
        {


            case 1:
                    printf("Ingrese su primer numero: ");
                    scanf("%d", &numeroUno);
                    printf("\nA=%d\n", numeroUno);

            break;

            case 2:
                    printf("Ingrese su  segundo numero: ");
                    scanf("%d", &numeroDos);
                    printf("\nB=%d\n", numeroUno);
            break;

            case 3:
                    factorialA= FactorizarNumero(numeroUno);
                    factorialB= FactorizarNumero(numeroDos);

                    suma= SumarNumeros(numeroUno,numeroDos);
                    resta= RestarNumeros(numeroUno,numeroDos);

                    multiplicar= MultiplicarNumeros(numeroUno,numeroDos);

                    dividir= DividirNumeros(numeroUno,numeroDos);
                    system("cls");
                    printf("se realizo con exito \n");
                    printf("\n");
                    printf("Precione cualquier tecla para volver ...");
                    getch();
                    system("cls");
                    break;

            case 4:

                   if (numeroUno<0 )
                    {
                         printf("\nEl factorial de %d es: no se puede factorizar un numero negativo", numeroUno);



                    }

                    else{

                         printf("\nEl factorial de %d es: %d ", numeroUno, factorialA );


                    }


                     if (numeroDos<0 )
                    {
                         printf("\n El factorial de %d es: no se puede factorizar un numero negativo",numeroDos);



                    }

                    else{

                         printf("\n  El factorial de %d es: %d",  numeroDos,factorialB);


                    }




                    printf("\nEl resultado de %d+%d es: %d",numeroUno, numeroDos, suma);


                    printf("\nEl resultado de %d-%d es: %d",numeroUno, numeroDos, resta);


                    printf("\nEl resultado de %d*%d es: %d",numeroUno, numeroDos, multiplicar);

                    if (numeroDos==0)
                    {
                        printf("Error,No es posible dividir por 0, vuelva a ingresar los numeros.\n");

                    }


                    printf("\nEl resultado de %d/%d es: %.2f\n",numeroUno, numeroDos, dividir);

            break;

            case 5:
                    printf("\nGracias vuelva nuevamente \n");
                    terminar=0;
            break;

        }
    }

    return 0;
}
