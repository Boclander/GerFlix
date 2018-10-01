#include <stdio.h>
#include <stdlib.h>
#include "Serie.h"
#include <string.h>

/*
    int idSerie;
    char nombre[50];
    char genero[20];
    int cantidadTemporadas;
    int estado;

*/

void inicializarSeriesEstado(eSerie series[], int cant)
{
    int i;

    for(i=0; i<cant; i++)
    {
        series[i].estado = 0;
    }
}


void inicializarSeriesHardCode(eSerie series[])
{
    int id[5] = {100,101,102,103,104};
    char nombre[][50]={"TBBT","TWD","GOT","BB","LCDP"};
    char genero[][50]={"Comedia","Terror","Suspenso","Policial","Policial"};
    int cantidad[5] = {10,9,7,5,2};

    int i;

    for(i=0; i<5; i++)
    {
        series[i].idSerie=id[i];
        series[i].cantidadTemporadas=cantidad[i];
        series[i].estado = 1;
        strcpy(series[i].nombre, nombre[i]);
        strcpy(series[i].genero, genero[i]);
    }
}

void mostrarListaSeries(eSerie listaDeSeries[], int cant)
{
    int i;

    printf("%4s %20s %20s %10s %6s\n", "ID", "Nombre", "Genero", "Temporadas", "Estado");
    printf("\n");

    for(i=0; i<cant; i++)
    {
        printf("%4d %20s %20s %10d %6d\n", listaDeSeries[i].idSerie, listaDeSeries[i].nombre,
               listaDeSeries[i].genero, listaDeSeries[i].cantidadTemporadas,
               listaDeSeries[i].estado);
    }
}

int retornarIndiceSerie(eSerie listaDeSerie[], int cantidad, eSerie unaSerie)
{
    int i;
    int retorno = -1;

    for(i=0; i<cantidad; i++)
    {
        if(listaDeSerie[i].idSerie == unaSerie.idSerie)
        {
            retorno=1;
            break;
        }
    }
    return retorno;
}

int retornarIndiceSerieInt(eSerie listaDeSerie[], int cantidad, int idSerieParametro)
{
    int i;
    int retorno = -1;

    for(i=0; i<cantidad; i++)
    {
        if(listaDeSerie[i].idSerie == idSerieParametro)
        {
            retorno=1;
            break;
        }
    }
    return retorno;
}
