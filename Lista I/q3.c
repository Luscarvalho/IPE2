/*Questão 3. Crie um programa que preencha um vetor de 50 posições, depois multiplique cada
valor do vetor por um valor inteiro lido do usuário, mantendo os novos valores no mesmo vetor.
Mostre o resultado.*/

#include <stdio.h>
#include <stdlib.h>
#define N 50

int main(){
    int v[N], i, num;

    for (i=0; i<N; i++)
        v[i]=rand()%100;

    printf("--------------------------------------------------------------------------\n");
    for (i=0; i<N; i++)
        printf("%d\t", v[i]);
    printf("\n--------------------------------------------------------------------------");

    printf("\nDeseja multiplicar esses vallores por quantos?\n=>");
    scanf("%d", &num);

    for (i=0; i<N; i++)
        v[i]*=num;

    printf("--------------------------------------------------------------------------\n");
    for (i=0; i<N; i++)
        printf("%d\t", v[i]);
    printf("\n--------------------------------------------------------------------------");

}