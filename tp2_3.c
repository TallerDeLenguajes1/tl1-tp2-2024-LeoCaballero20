#include <stdio.h>
#include <stdlib.h>

int main () {
#define N 5
#define M 7
int i,j;
int mt[N][M];
int *p;
p = mt;
for(i = 0;i<N; i++)
{
for(j = 0;j<M; j++)
{
 *(p+(i*M+j))=1+rand()%100;
 printf("%3d ", *(p+(i*M+j)));
 /*Otra forma
 *p=1+rand()%100;
 printf("%3d ", *p);
 p++; */
} 
printf("\n");
}

printf("Testeando matriz\n");
for(i = 0;i<N; i++)
{
for(j = 0;j<M; j++)
{
 printf("%3d ",mt[i][j]);
} 
printf("\n");
}

}