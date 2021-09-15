#include <stdio.h>
#include <stdlib.h>
#define n 100
int main(){
    int i, v[n], maior, menor, posmaior, posmenor;
    for (i=0; i<n; i++){
        v[i]=1+rand()%200;
    }
    for (i=0; i<n; i++){
        printf("%d\t", v[i]);
    }
    maior=v[0];
    menor=n-1;
    for (i=0; i<n; i++){
        if (v[i]>maior){
            maior=v[i];
            posmaior=i;
        }
        else if (v[i]<menor){
            menor=v[i];
            posmenor=i;
        }
    }
    printf("\nO maior número é: %d, na posição %d", maior, posmaior);
    printf("\n\nO menoor número é: %d, na posição %d", menor, posmenor);
}