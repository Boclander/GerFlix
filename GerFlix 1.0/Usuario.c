#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Usuario.h"

void inicializarUsuariosEstado(eUsuario usuarios[], int cant)
{
    int i;

    for(i=0; i<cant; i++)
    {
        usuarios[i].estado = 0;
    }
}
void inicializarUsuariosHardCode(eUsuario usuarios[])
{

    int id[15] = {1000,1001,1002,1003,1004, 1005,1006,1007,1008,1009, 1010,1011,1012,1013,1014};
    char nombre[][50]= {"Juan","Maria","Pedro","Vanesa","Jose","Luisa","Laura","Marcelo","German","Victoria","Dafne","Antonela","Gisele","Dario","Pedro"};

    int serie[15] = {100,100,101,101,102,100,100,103,101,102,103,101,100,100,101};



    int i;

    for(i=0; i<15; i++)
    {
        usuarios[i].idUsuario=id[i];
        usuarios[i].idSerie=serie[i];
        usuarios[i].estado = 1;
        strcpy(usuarios[i].nombre, nombre[i]);

    }
}

void mostrarUnUsuario(eUsuario unUsuario)
{
    printf("%4d %20s %12d %6d\n", unUsuario.idUsuario, unUsuario.nombre,
                                  unUsuario.idSerie, unUsuario.estado);
}

void mostrarListaUsuarios(eUsuario listaDeUsuarios[], int cant)
{
    int i;

    printf("%4s %20s %12s %6s\n", "ID", "Nombre", "ID Serie", "Estado");

    for(i=0; i<cant; i++)
    {
        mostrarUnUsuario(listaDeUsuarios[i]);
    }
}

int printmenu (void)
{
    int opcion;

    printf("===========================================================\n");
    printf("1.Mostrar lista de series       2.Mostrar lista de usuarios\n");
    printf("===========================================================\n");
    printf("\n");
    printf("Ingrese una opcion: ");
    scanf("%d", &opcion);

    return opcion;
}

void mostrarUsuarioConSuSerie(eUsuario listaDeUsuarios[], int cantUsuarios,
                              eSerie listaDeSeries[], int cantSeries)

{
    int i;
    int indiceSerie;

    for(i=0; i<cantUsuarios; i++)
    {
        mostrarUnUsuario(listaDeUsuarios[i]);
        indiceSerie=retornarIndiceSerieInt(listaDeSeries, cantSeries, listaDeUsuarios[i].idSerie);
        mostrarUnaSerie(listaDeSeries[indiceSerie]);
    }
}

int retornarIndiceUsuario(eUsuario listaDeUsuario[], int cantidad, eUsuario unUsuario)
{
    int i;
    int retorno = -1;

    for(i=0; i<cantidad; i++)
    {
        if(listaDeUsuario[i].idUsuario == unUsuario.idUsuario)
        {
            retorno=1;
            break;
        }
    }
    return retorno;
}
