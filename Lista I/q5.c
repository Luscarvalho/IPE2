/*Questão 5. Crie um programa que preencha dois vetores A e B. Crie um terceiro vetor para
armazenar a soma dos valores de A com os valores de B. Mostre o resultado.*/

#include <stdio.h>
#include <stdlib.h>
#define N 10

int main(){
    int v1[N], v2[N], v3[N], i;
    for (i=0; i<N; i++){
        v1[i]=rand()%100;
        v2[i]=rand()%100;
    }
    
    for (i=0; i<N; i++)
        printf("%d\t", v1[i]);

    printf("\n--------------------------------------------------------------------\n");

    for (i=0; i<N; i++)
        printf("%d\t", v2[i]);

    printf("\n\n\n---SOMA DOS VETORES---\n\n\n");

    for (i=0; i<N; i++)
        v3[i]=v1[i]+v2[i];

    for (i=0; i<N; i++)
        printf("%d\t", v3[i]);
}