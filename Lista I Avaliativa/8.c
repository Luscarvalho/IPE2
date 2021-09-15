#include <stdio.h>
#include <stdlib.h>
#define n 50

int main(){
    int i, j=0, k=0, a[n], b[n], c[n];
    for (i=0; i<n; i++){
        a[i]=1+rand()%100;
    }
    for (i = 0; i < n; i++){
        if(a[i]%2==0){
            c[j]=a[i];
            j++;
        }
        else{
            b[k]=a[i];
            k++;
        }
    }
    printf("\nImpares\n\n");
    for (i=0; i<k; i++){
        printf("%d\t", b[i]);
    }
    printf("\n\nPares\n");
    for (i=0; i<j; i++){
        printf("%d\t", c[i]);
    }
}
