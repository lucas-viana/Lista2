/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   main.c
 * Author: lucas
 *
 * Created on 10 de Setembro de 2023, 23:03
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int tamanhoLinha, tamanhoColuna;
    
    printf("Digite o tamanho de linhas e colunas das matrizes respectivamente: \n");
    scanf("%d%d", &tamanhoLinha, &tamanhoColuna);
    
    float matriz1[tamanhoLinha][tamanhoColuna], matriz2[tamanhoLinha][tamanhoColuna],matrizResultado[tamanhoLinha][tamanhoColuna];
    
    printf("Entre com os valores da matriz 1: ");
    
    for(int i=0; i<tamanhoLinha; i++){
        for(int j=0; j<tamanhoColuna;j++){
            scanf("%f", &matriz1[i][j]);
        }
    }
    
    printf("Entre com os valores da matriz 2: ");
    
    for(int i=0; i<tamanhoLinha; i++){
        for(int j=0; j<tamanhoColuna;j++){
            scanf("%f", &matriz2[i][j]);
        }
    }
    
    printf(" Entre com a opcao desejada: \n 1- Somar as duas matrizes. \n 2- Subtrair a primeira matriz da segunda. \n 3- Adicionar uma constante as duas matrizes. \n 4- Imprimir as matrizes.\n");
    int opcao=0;
    scanf("%d",&opcao);
    if(opcao == 1){
        for(int i=0; i<tamanhoLinha; i++){
            for(int j=0; j<tamanhoColuna;j++){
                matrizResultado[i][j] = matriz1[i][j] + matriz2[i][j];
            }
        }
        
        for(int i=0; i<tamanhoLinha; i++){
            for(int j=0; j<tamanhoColuna;j++){
                printf(" %.2f |", matrizResultado[i][j]);
            }
            printf("\n");
        }
    }
    
    else if(opcao == 2){
        for(int i=0; i<tamanhoLinha; i++){
            for(int j=0; j<tamanhoColuna;j++){
                matrizResultado[i][j] = matriz2[i][j] - matriz1[i][j];
            }
        }
        
        for(int i=0; i<tamanhoLinha; i++){
            for(int j=0; j<tamanhoColuna;j++){
                printf(" %.2f |", matrizResultado[i][j]);
            }
            printf("\n");
        }
    }
    
    else if(opcao == 3){
        printf("Digite o valor de uma constante para ser adicionado nas duas matrizes: \n");
        float constante=0;
        scanf("%f", &constante);
        for(int i=0; i<tamanhoLinha; i++){
            for(int j=0; j<tamanhoColuna;j++){
                matriz1[i][j] += constante;
            }
        }
        for(int i=0; i<tamanhoLinha; i++){
            for(int j=0; j<tamanhoColuna;j++){
                matriz2[i][j] += constante;
            }
        }
        for(int i=0; i<tamanhoLinha; i++){
            for(int j=0; j<tamanhoColuna;j++){
                printf(" %.2f |", matriz1[i][j]);
            }
            printf("\n");
        }
        
        printf("_______________________________\n\n");
        
        for(int i=0; i<tamanhoLinha; i++){
            for(int j=0; j<tamanhoColuna;j++){
                printf(" %.2f |", matriz2[i][j]);
            }
            printf("\n");
        }
    }
    
    else if(opcao == 4){
        for(int i=0; i<tamanhoLinha; i++){
            for(int j=0; j<tamanhoColuna;j++){
                printf(" %.2f |", matriz1[i][j]);
            }
            printf("\n");
        }
        
        printf("_______________________________\n\n");
        
        for(int i=0; i<tamanhoLinha; i++){
            for(int j=0; j<tamanhoColuna;j++){
                printf(" %.2f |", matriz2[i][j]);
            }
            printf("\n");
        }
    }
    return (EXIT_SUCCESS);
}

