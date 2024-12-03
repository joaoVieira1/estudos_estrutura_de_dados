#include <stdio.h>
#include <math.h>

int buscaBinaria(int array[], int valor, int inicio, int fim);

int main(){

    int A[10] = {0, 1, 2, 3, 6, 8, 10, 17, 20, 23};

    int indice = buscaBinaria(A, 20, 0, 10);

    printf("%d\n", A[indice]);

    return 0;
}

//retorna o índice aonde o valor informado a ser buscado está armazenado
int buscaBinaria(int array[], int valor, int inicio, int fim){

    while(inicio <= fim){

        int meio = floor((inicio + fim) / 2);

        if(array[meio] > valor){
            fim = meio - 1;
        }else if(array[meio] < valor){
            inicio = meio + 1;
        }else{
            return meio;
        }

    }

}