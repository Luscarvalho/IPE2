/*Questão 2. Crie um programa preencha um vetor de 10 posições, depois calcule e mostre a soma
dos elementos do vetor.*/

#include <stdio.h>
#include <stdlib.h>
#define N 10

int main(){
    int v[N], soma=0,  i;

    for (i=0; i<N; i++)
        v[i]=rand()%20;

    for (i=0; i<N; i++)
        soma+=v[i];

    printf("%d", soma);
}