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
    listaDeCompus[i].anio = 2015+rand()%10;
    listaDeCompus[i].cantidad = 1+rand()%8;
    listaDeCompus[i].tipo_cpu = tipos[rand()%6];
}

mostrarCompus(listaDeCompus);
mostrarPcMasVieja(listaDeCompus);
mostrarPcMasRapida(listaDeCompus);

}

void mostrarCompus(compu * lista) {
    for (int i=0;i<5;i++) {
        printf("Compu número %d:\n",i+1);
        printf("Velocidad de procesamiento en GHz: %d\n", lista[i].velocidad);
        printf("Año de fabricación: %d\n", lista[i].anio);
        printf("Cantidad de núcleos: %d\n", lista[i].cantidad);
        printf("Tipo de procesador: %s\n\n", lista[i].tipo_cpu);
    }  
}

void mostrarPcMasVieja(compu * lista) {
    int aux = 2025;
    int iMasVieja;
    compu masVieja;
    for (int i=0;i<5;i++) {
        if (lista[i].anio<aux) {
            aux = lista[i].anio;
            masVieja = lista[i];
            iMasVieja = i;
        }
    }
    printf("La PC más vieja es la compu número %d:\n",iMasVieja+1);
    printf("Velocidad de procesamiento en GHz: %d\n", masVieja.velocidad);
    printf("Año de fabricación: %d\n", masVieja.anio);
    printf("Cantidad de núcleos: %d\n", masVieja.cantidad);
    printf("Tipo de procesador: %s\n\n", masVieja.tipo_cpu);
}

void mostrarPcMasRapida(compu * lista) {
    int aux = 1;
    int iMasRapida;
    compu masRapida;
    for (int i=0;i<5;i++) {
        if (lista[i].velocidad>aux) {
            aux = lista[i].velocidad;
            masRapida = lista[i];
            iMasRapida = i;
        }
    }
    printf("La PC más rápida es la compu número %d:\n",iMasRapida+1);
    printf("Velocidad de procesamiento en GHz: %d\n", masRapida.velocidad);
    printf("Año de fabricación: %d\n", masRapida.anio);
    printf("Cantidad de núcleos: %d\n", masRapida.cantidad);
    printf("Tipo de procesador: %s\n\n", masRapida.tipo_cpu);
}