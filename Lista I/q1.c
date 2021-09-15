/*Questão 1. Crie um programa que preenche um vetor de inteiros de 100 números, 
colocando 0 nas posições par e 1 ímpar. Utilize para o tamanho do vetor, 
uma variável ou uma constante pelo #define.*/

#include <stdio.h>
#define N 100

int main(){
    int v[N], i;

    for (i=0; i<N; i++){
        if (i%2==0)
            v[i]=0;
        else
            v[i]=1;
    }

    for (i=0; i<N; i++)
        printf("%d\n", v[i]);
}