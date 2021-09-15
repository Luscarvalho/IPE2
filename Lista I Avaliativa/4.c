#include <stdio.h>
#include <stdlib.h>
#define n 50

int main(){
    int i, j=n-1, a[n], b[n], soma=0;
    for (i=0; i<n; i++){
        a[i]=1+rand()%3;
        b[i]=1+rand()%3;
    }
    for (i=0; i<n; i++){
        printf("%d\t%d\n", a[i], b[i]);
    }
    for(i = 0; i < n; i++){
        soma += a[i] - b[j];
        j--;
    }
    printf("\nSoma total: %d", soma);
}