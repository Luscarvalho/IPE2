#include <stdio.h>
#include <stdlib.h>
#define n 12

int main(){
    int l, c, m[n][n], soma=0, num, res;
    float media=0;
    for (l=0; l<n; l++){
        for (c=0; c<n; c++){
            m[l][c]=1+rand()%20;
        }
    }
    for (l=0; l<n; l++){
        for (c=0; c<n; c++){
            printf ("%3.d", m[l][c]);
        }
        printf("\n");
    }
    printf("Qual coluna:\n->");
    scanf("%d", &num);
    printf("Voce quer:\nS-somar\nM-media\n->");
    scanf("%d", &res);
    if (res==1){
        for (l=0; l<n; l++){
            for (c=0; c<n; c++){
                if(c == num-1){
                    soma+=m[l][c];
                }
            }
        }
        printf("\n%d", soma);
    }
    else if (res==2){
        for (l=0; l<n; l++){
            for (c=0; c<n; c++){
                if(c == num-1){
                    soma+=m[l][c];
                }
            }
        }
        media=(soma/n);
        printf("\n%f", media);
    }
    else{
        printf("\nOpção invalida");
    }
    return 0;
}