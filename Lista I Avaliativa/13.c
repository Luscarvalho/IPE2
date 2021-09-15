#include <stdio.h>
#include <stdlib.h>
#define n 30

int main(){
    int i, v[n], v2[n], num;
    for (i=0; i<n; i++){
        v[i]=1+rand()%10;
    }
    printf("\nV1\n");
    for (i = 0; i < n; i++){
        printf("%d\t", v[i]);
    }
    printf("Deseja multiplicar por quantos?\n->");
    scanf("%d", &num);

    for (i=0; i<n; i++){
            v2[i]=(v[i]*num);
    }
    printf("\n\nNÚMEROS MULTIPLICADOS\n");
    for (i = 0; i < n; i++){
        printf("%d\t", v2[i]);
    }
    return 0;
}