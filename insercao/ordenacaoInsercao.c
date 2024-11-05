/*

         |
        1| 2  3  4  5  6
  vet: [5| 2, 4, 6, 1, 3]
         | 
ordenado   monte


O lado esquerdo do vetor estará sempre ordenado 
enquanto o lado direito é nosso monte, como se estivessimos 
com um baralho na mão e colocando as cartas em ordem.

Abre um espaço e insere o valor ordenado no vetor, trabalhando
com dois segmentos do vetor.

Algoritmo:

    para i de 2 até n:
        key = vet[i]
        j = i-1 

        enquanto j > 0 E vet[j] > key:
            vet[j+1] = vet[j]
            j = j-1

        vet[j+1] = key;
*/

/*
#include <stdio.h>

int main(){

    int vetor[6] = {5, 2, 4, 6, 1, 3};


    for(int i = 1; i < 6; i++){
        int key = vetor[i];

        int j = i-1;

        while(j >= 0 && vetor[j] > key){
            vetor[j+1] = vetor[j];
            j -= 1;
        }

        vetor[j+1] = key;
    }

    for(int i = 0; i < 6; i++){
        printf("%d ", vetor[i]);
    }

    return 0;
}
*/

