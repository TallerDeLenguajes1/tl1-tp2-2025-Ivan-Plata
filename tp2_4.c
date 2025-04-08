#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct compu
{
    int velocidad;
    int anio;
    int cantidad_nucleos;
    char *tipo_cpu;
} typedef compu;

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
        pcs[i].tipo_cpu = tipos[rand() + 6];
    }

    return 0;
}