#include <stdio.h>
#include <stdlib.h>
#define n 10

void main(){
  int v[n], i, j, pal;

  for (i=0; i<n; i++) {
    v[i]=1+rand()%100;
  }

  i = 0;
  j = (n-1);
  pal = 1;
  while ((i < j) && (pal == 1)) {
    if (a[i] != a[j])
       pal = 0;
    else {
      i = i + 1;
      j = j - 1;
    }
  }
  if (pal == 1)
    printf("\nOs elementos do vetor formam um palindromo.");
  else 
    printf("\nOs elementos do vetor nao formam um palindromo.");
}