#include <stdio.h>
#include <stdlib.h>
/*
 * Receba ou gere uma matriz N por M e conte quantos números iguais a X existem na matriz.
 *  X deve ser informado pelo usuário.
 */

int main(int argc, char** argv) {
    int nLinhas, nColunas, contador=0,numSelecionado;
    printf("Digite o numero de linhas e colunas da matriz respectivamente: ");
    scanf("%d%d", &nLinhas, &nColunas);
    int matriz[nLinhas][nColunas];
    printf("Digiteo valor dos elementos da matriz: ");
    
    for (int i = 0; i < nLinhas; i++) {
        for (int j = 0; j < nColunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("Digite o o valor do numero para ver quantas vezes ele se repete: ");
    scanf("%d", &numSelecionado);
    
    for (int i = 0; i < nLinhas; i++) {
        for (int j = 0; j < nColunas; j++) {
            printf("%d |\t", matriz[i][j]);
            if (matriz[i][j] == numSelecionado ) {
                contador++;
            }
        }
        printf("\n");
    }
    printf("O elemento %d comparado aparece na matriz %d vez(es)", numSelecionado, contador);


    return (EXIT_SUCCESS);
}
