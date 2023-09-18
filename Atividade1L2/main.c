#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
    int nLinhas, nColunas, maior=0;
    printf("Digite o numero de linhas e colunas da matriz respectivamente: ");
    scanf("%d%d", &nLinhas, &nColunas);
    int matriz[nLinhas][nColunas];
    printf("Digiteo valor dos elementos da matriz: ");
    
    for (int i = 0; i < nLinhas; i++) {
        for (int j = 0; j < nColunas; j++) {
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
    }

    for (int i = 0; i < nLinhas; i++) {
        for (int j = 0; j < nColunas; j++) {
            printf("%d |\t", matriz[i][j]);
        }
        printf("\n");
    }
    printf("O maior elemento da matriz e o numero: %d", maior);


    return (EXIT_SUCCESS);
}

