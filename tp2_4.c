#include <stdio.h>
#include <stdlib.h>

typedef struct {
int velocidad;//entre 1 y 3 GHz
int anio;//entre 2015 y 2023
int cantidad;//entre 1 y 8
char *tipo_cpu; //valores del arreglo tipos
} compu;

int main () {

compu listaDeCompus[5];
char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
srand (time(NULL));
for (int i=0;i<5;i++) {
    listaDeCompus[i].velocidad = 1+rand()%3;
    listaDeCompus[i].anio = 2015+rand()%2023;
    listaDeCompus[i].cantidad = 1+rand()%8;
    listaDeCompus[i].tipo_cpu = tipos[rand()%5];
}

mostrarCompus(listaDeCompus);

}

void mostrarCompus(compu lista[]) {
    for (int i=0;i<5;i++) {
        printf("Compu número %d:\n",i+1);
        printf("Velocidad de procesamiento en GHz: %d\n", lista[i].velocidad);
        printf("Año de fabricación: %d\n", lista[i].anio);
        printf("Cantidad de núcleos: %d\n", lista[i].cantidad);
        printf("Tipo de procesador: %d\n", lista[i].tipo_cpu);
    }
}
