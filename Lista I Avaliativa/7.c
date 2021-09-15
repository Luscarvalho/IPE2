#include <stdio.h>
#include <stdlib.h>
#define n 30

int main(){
    int i, j, a[n], b[n], soma=0, aux;
    for (i=0; i<n; i++){
        a[i]=1+rand()%100;
    }
    for (i = 0; i < n; i++){
        printf("%d\t", a[i]);
    }
    for (i=0; i<n; i++){
        b[i]=a[i];
    }
    for(i = 0; i < n; i++){
        for(j = i + 1; j < n; j++){
            if(b[j] < b[i]){
                aux = b[i];
                b[i] = b[j];
                b[j] = aux;
            }
        }
    }
    printf("Ordenado:\n\n");
    for (i = 0; i < n; i++){
        printf("%d\t", b[i]);
    }
}