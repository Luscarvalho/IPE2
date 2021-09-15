#include <stdio.h>
#include <stdlib.h>
#define n 15
#define m 5

int main(){
    int l, c, M[n][m], cont=0, i=0, j=0;
    
    for(l=0;l<n;l++){
        for(c=0;c<m;c++){
            M[l][c] = 1 + rand() % 10;
        }
    }
    for(l=0;l<n;l++){
        for(c=0;c<m;c++){
            printf("%3.d",M[l][c]);
        }
            printf("\n");
    }
    
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            for(l=0;l<n;l++){
                for(c=0;c<m;c++){
                    if(M[i][j]==M[l][c]){
                        cont++;
                    }
                }
            }
            printf("O numero %d aparece %d vezes\n", M[i][j], cont);
            cont=0;
        }
    }
    return 0;
}