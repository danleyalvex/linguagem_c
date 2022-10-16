#include <stdio.h>

int main () {
    int a,b,c;
    int vetor[3];
    
    for(int i = 0; i < 3; i++ ){
    printf("digite os valor %d: ", i + 1);
    scanf("%d", vetor[i]);
    }

    for(int i = 3; i > 0; i--){
        printf("%d", vetor[i]);
    }
    

    
}