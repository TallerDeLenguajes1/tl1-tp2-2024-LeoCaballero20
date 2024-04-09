#include <stdio.h>
#include <stdlib.h>

int main() {
    // codigo a completar
#define N 20
int i;
double vt[N], *punt;
punt = vt;
for(i = 0;i<N; i++)
{
*(punt+i)=1+rand()%100;
printf("%f ", *(punt+i));
}

}