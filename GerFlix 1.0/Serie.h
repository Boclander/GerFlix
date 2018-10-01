
typedef struct
{
    int idSerie;
    char nombre[50];
    char genero[20];
    int cantidadTemporadas;
    int estado;
}eSerie;

void inicializarSeriesEstado(eSerie[], int);
void inicializarSeriesHardCode(eSerie[]);
void mostrarUnaSerie////////
void mostrarListaSeries(eSerie[], int);
int retornarIndiceSerie(eSerie[], int, eSerie);
int retornarIndiceSerieInt(eSerie[], int, int);

