#include <stdio.h>
#include <stdlib.h>
#define n 10

int main(){
    int i, j=n-1, a[n], b[n], soma=0;
    for (i=0; i<n; i++){
        a[i]=1+rand()%15;
    }
    for (i=0; i<n; i++){
        printf("%d\t%d\n", a[i]);
    }
    for(i = 0; i < n; i++){
        a[i] = b[j];
        j--;
    }
    printf("\nSoma total: %d", soma);
}