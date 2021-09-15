/*Questão 4. Preencha um array com 50 elementos utilizando a função rand( ). Verifique o maior
elemento presente no vetor. Mostre o valor e a posição do maior elemento.*/

#include <stdio.h>
#include <stdlib.h>
#define N 50

int main(){
    int v[N], i, maior, pos;

    for (i=0; i<N; i++)
        v[i]=rand()%100;

    for (i=0; i<N; i++)
        printf("%d\t", v[i]);

    maior=v[0];

    for (i=0; i<N; i++){
        if (v[i]>maior){
            maior=v[i];
            pos=i;
        }
    }
    printf("\nMaior número: %d\nPosição: %d", maior, pos);
}