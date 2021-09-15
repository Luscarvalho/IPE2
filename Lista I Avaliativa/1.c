#include <stdio.h>
#include <stdlib.h>
#define n 50

int main(){
    int v[n], i, cont=0;
    for (i=0; i<n; i++){
        v[i]=1+rand()%10;
    }
    for (i=0; i<n; i++){
        printf("%d\t", v[i]);
    }
    for (i=0; i<n; i++){
        if (v[i]%2==0){
            cont++;
        }
    }
    printf("\nA quantidade de números pares no vetor é: %d", cont);
}