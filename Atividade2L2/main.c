#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
    int nLinhas, nColunas, menor=0;
    printf("Digite o numero de linhas e colunas da matriz respectivamente: ");
    scanf("%d%d", &nLinhas, &nColunas);
    int matriz[nLinhas][nColunas];
    printf("Digiteo valor dos elementos da matriz: ");
    
    for (int i = 0; i < nLinhas; i++) {
        for (int j = 0; j < nColunas; j++) {
            scanf("%d", &matriz[i][j]);
            if(i ==0 && j == 0){
                menor = matriz[i][j];
            }
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
            }
        }
    }

    for (int i = 0; i < nLinhas; i++) {
        for (int j = 0; j < nColunas; j++) {
            printf("%d |\t", matriz[i][j]);
        }
        printf("\n");
    }
    printf("O maior elemento da matriz e o numero: %d", menor);


    return (EXIT_SUCCESS);
}

