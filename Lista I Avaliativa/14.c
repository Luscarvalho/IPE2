#include <stdio.h>
#include <stdlib.h>
#define n 10

int main(){
    int v[n], i, j, aux;
    for (i = 0; i < n; i++){
        v[i] = 1+rand()%1000;
    }
    for(i = 0; i < n; i++){
        for(j = i + 1; j < n; j++){
            if(v[j] < v[i]){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
    printf("\nVetor ordenado:\n");
    for (i = 0; i < n; i++){
        printf("%d\t", v[i]);
    }
    return 0;
}
