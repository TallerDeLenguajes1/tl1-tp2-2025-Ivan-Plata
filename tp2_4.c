#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct compu
{
    int velocidad;
    int anio;
    int cantidad_nucleos;
    char *tipo_cpu;
};
typedef struct compu compu;

void listarPCs(compu pcs[], int cantidad);

int main()
{
    srand(time(NULL));

    compu pcs[5];
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core",
                         "Pentium"};

    for (int i = 0; i < 5; i++)
    {
        pcs[i].velocidad = 1 + rand() % 3;
        pcs[i].anio = 2015 + rand() % 9;
        pcs[i].cantidad_nucleos = 1 + rand() % 8;
        pcs[i].tipo_cpu = tipos[rand() % 6];
    }

    listarPCs(pcs, 5);

    return 0;
}

void listarPCs(compu pcs[], int cantidad)
{
    for (int i = 0; i < cantidad; i++)
    {
        printf("--------------------Computadora %d------------------------\n", i + 1);
        printf("Velocidad de procesamiento de %d GHz\n", pcs[i].velocidad);
        printf("Fabricada en %d\n", pcs[i].anio);
        printf("Cantidad de nucleos: %d\n", pcs[i].cantidad_nucleos);
        printf("tipo de procesador: %s\n", pcs[i].tipo_cpu);
    }
}
