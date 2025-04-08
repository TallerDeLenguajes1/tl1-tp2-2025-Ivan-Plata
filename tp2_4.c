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

void mostrarMasVieja(compu pcs[], int cantidad);

void mostrarMasVeloz(compu pcs[], int cantidad);

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
    mostrarMasVieja(pcs, 5);
    mostrarMasVeloz(pcs, 5);

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

void mostrarMasVieja(compu pcs[], int cantidad)
{
    int vieja;
    int aux = 3000;
    for (int i = 0; i < cantidad; i++)
    {

        if (pcs[i].anio < aux)
        {
            vieja = i;
            aux = pcs[i].anio;
        }
    }
    printf("\n\n---------------La computadora mas vieja------------------------\n");
    printf("--------------------Computadora %d------------------------\n", vieja + 1);
    printf("Velocidad de procesamiento de %d GHz\n", pcs[vieja].velocidad);
    printf("Fabricada en %d\n", pcs[vieja].anio);
    printf("Cantidad de nucleos: %d\n", pcs[vieja].cantidad_nucleos);
    printf("tipo de procesador: %s\n", pcs[vieja].tipo_cpu);
}

void mostrarMasVeloz(compu pcs[], int cantidad)
{
    int veloz;
    int aux = 0;
    for (int i = 0; i < cantidad; i++)
    {

        if (pcs[i].velocidad > aux)
        {
            veloz = i;
            aux = pcs[i].velocidad;
        }
    }
    printf("\n\n---------------La computadora mas veloz------------------------\n");
    printf("--------------------Computadora %d------------------------\n", veloz + 1);
    printf("Velocidad de procesamiento de %d GHz\n", pcs[veloz].velocidad);
    printf("Fabricada en %d\n", pcs[veloz].anio);
    printf("Cantidad de nucleos: %d\n", pcs[veloz].cantidad_nucleos);
    printf("tipo de procesador: %s\n", pcs[veloz].tipo_cpu);
}