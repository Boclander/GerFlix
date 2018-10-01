#include <stdio.h>
#include <stdlib.h>
#include "Usuario.h"
#define TAMSERIE 5
#define TAMUSUARIO 15

int main()
{
    int opcion;

    eSerie listaDeSeries[TAMSERIE];
    eUsuario listaDeUsuarios[TAMUSUARIO];

    inicializarSeriesEstado(listaDeSeries, TAMSERIE);
    inicializarSeriesHardCode(listaDeSeries);

    inicializarUsuariosEstado(listaDeUsuarios,TAMUSUARIO);
    inicializarUsuariosHardCode(listaDeUsuarios);
do{
    system("cls");
    opcion=printmenu();

    switch(opcion)
    {
    case 1:
        system("cls");
        mostrarListaSeries(listaDeSeries, TAMSERIE);
        system("pause");
        break;
    case 2:
        system("cls");
        mostrarListaUsuarios(listaDeUsuarios, TAMUSUARIO);
        system("pause");
        break;
    case 3:
        system("cls");
        //mostrarUsuarioConSuSerie(listaDeUsuarios, TAMUSUARIO, listaDeSeries, TAMSERIE);

        system("pause");
        break;
    }
  }
  while(opcion != 5);


/*  1. Mostrar el listado de series
    2. Mostrar el listado de usuarios
    3. Mostrar el listado de Usuarios con el nombre de la serie que ve
    4. Mostrar por cada serie, el nombre de los usuarios que la ven.
*/




    return 0;
}
