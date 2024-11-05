#include <stdio.h>
#include <errno.h>

int main(){

    int A[10] = {16, 14, 10, 8, 7, 9, 3, 2, 4, 1};

    for(int i = 0; i < 10; i++){
        int pai = (i-1) / 2;
        int filhoEsquerdo = (2 * i) + 1;
        int filhoDireito = (2 * i) + 2;

        if(i == 0){
            printf("No: %d, Pai: -, ", A[i]);
        }else{
            printf("No: %d, Pai: %d, ", A[i], A[pai]);
        }

        if(filhoEsquerdo < 10){
            printf("Filho esquerdo: %d, ", A[filhoEsquerdo]);
        }else{
            printf("Filho esquerdo: - ,");
        }

        if(filhoDireito < 10){
            printf("Filho direito: %d, ", A[filhoDireito]);
        }else{
            printf("Filho direito: -, ");
        }

        printf("\n");
    }


    return 0;
}