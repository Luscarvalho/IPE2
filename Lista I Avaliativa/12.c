#include <stdio.h>
#include <stdlib.h>
#define n 10

int main(){
    int i, v[n], v2[n], v3[n];
    for (i=0; i<n; i++){
        v[i]=1+rand()%10;
        v2[i]=1+rand()%10;
    }
    printf("\nV1\n");
    for (i = 0; i < n; i++){
        printf("%d\t", v[i]);
    }
    printf("\nV2\n");
    for (i = 0; i < n; i++){
        printf("%d\t", v2[i]);
    }
    for (i=0; i<n; i++){
            v3[i]=(v[i]*v2[i]);
    }
    printf("\nV3\n");
    for (i = 0; i < n; i++){
        printf("%d\t", v3[i]);
    }
    return 0;
}