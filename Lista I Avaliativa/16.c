#include <stdio.h>
#include <stdlib.h>

int main(){
    int n; 
    
    printf("tamanho do vetor: ");
    scanf("%d", &n);
    int i, v[n], v2[n], prod=0;
    for (i=0; i<n; i++){
        v[i]=1+rand()%10;
        v2[i]=1+rand()%10;
    }
    printf("\nX:\n");
    for (i = 0; i < n; i++){
        printf("%d\t", v[i]);
    }
    printf("\nY:\n");
    for (i = 0; i < n; i++){
        printf("%d\t", v2[i]);
    }
    for (i=0; i<n; i++){
        prod+=(v[i]*v2[i]);
    }
    printf("Produto escalar: %d", prod);

    return 0;
}
