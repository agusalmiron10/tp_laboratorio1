
#include <stdio.h>
#include <stdlib.h>
#include "funciones aritmeticas.h"


int SumarNumeros(int primerNumeroSuma,int segundoNumeroSuma)
{
    int suma;

    suma= primerNumeroSuma + segundoNumeroSuma;

    return suma;

}

int RestarNumeros(int primerNumeroResta,int segundoNumeroResta)
{
    int resta;
    resta= primerNumeroResta - segundoNumeroResta;
    return resta;

}

int MultiplicarNumeros(int primerNumeroMultiplicar,int segundoNumeroMultiplicar)
{
    int multiplicar;
    multiplicar= primerNumeroMultiplicar * segundoNumeroMultiplicar;
    return multiplicar;
}

float DividirNumeros(float primerNumeroDividir,int segundoNumeroDividir)
{
    float dividir;
    dividir= primerNumeroDividir / segundoNumeroDividir;
    return dividir;
}

long int FactorizarNumero(int numeroFactorial)
{
    int factorial;

    if(numeroFactorial==0)
    {
      return 1;
    }else
    {
       factorial=numeroFactorial*FactorizarNumero(numeroFactorial-1);
    }

    return factorial;

}
