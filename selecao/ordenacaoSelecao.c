

/*
#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor[6] = {5, 2, 4, 6, 1, 3};

    for(int i = 0; i < 6; i++){
        int pos = i;
        for(int j = i+1; j < 6; j++){
            if(vetor[j] < vetor[pos]){
                pos = j;
            }
        }

        int aux = vetor[i];
        vetor[i] = vetor[pos];
        vetor[pos] = aux;
    }

    for(int i = 0; i < 6; i++){
        printf("[%d] ", vetor[i]);
    }

    return 0;
}
*/