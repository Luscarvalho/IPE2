#include <stdio.h>
#include <stdlib.h>
#define n 10

int main(){
    int i, x[n], y[n], z[n];
    for (i=0; i<n; i++){
        x[i]=1+rand()%20;
        y[i]=1+rand()%20;
    }
    for (i=0; i<n; i++){
        z[i]=(x[i]-y[i]);
    }
    printf("X\n\n");
    for (i=0; i<n; i++){
        printf("%d\t", x[i]);
    }
    printf("\n\nY\n\n");
    for (i=0; i<n; i++){
        printf("%d\t", y[i]);
    }
    printf("\nA diferença entre X e Y é:\n");
    for (i=0; i<n; i++){
        printf("%d\t", z[i]);
    }
    for (i=0; i<n; i++){
        z[i]=(x[i]+y[i]);
    }
    printf("A soma entre X e Y é:\n");
    for (i=0; i<n; i++){
        printf("%d\t", z[i]);
    }
    for (i=0; i<n; i++){
        z[i]=(x[i]*y[i]);
    }
    printf("\nO produto entre X e Y é:\n");
    for (i=0; i<n; i++){
        printf("%d\t", z[i]);
    }
    return 0;
}