/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   main.c
 * Author: lucas
 *
 * Created on 10 de Setembro de 2023, 13:45
 */

#include <stdio.h>
#include <stdlib.h>
#include "matrizLib.h"
#include <windows.h>
/*
 * 
 */
int main(int argc, char** argv) {
    int matriz1[100][100], nLinhas1, nColunas1,matriz2[100][100],nLinhas2, nColunas2, somaMatriz[100][100];
    printf("Digite o numero de linhas e colunas da primeira matriz 1 respectivamente: ");
    scanf("%d%d", &nLinhas1, &nColunas1);
    printf("Digite o numero de linhas e colunas da primeira matriz 2 respectivamente: ");
    scanf("%d%d", &nLinhas2, &nColunas2);
    while(nLinhas1 != nLinhas2 || nColunas1 != nColunas2){
        printf("Digite um novo valor para as linhas e colunas para a matriz 1: ");
        scanf("%d%d", &nLinhas1, &nColunas1);
        printf("Digite um novo valor para as linhas e colunas para a matriz 2: ");
        scanf("%d%d", &nLinhas2, &nColunas2);
    }
    geraMatriz(matriz1,nLinhas1,nColunas1);
    printMatriz(matriz1, nLinhas1,nColunas1);
    Sleep(1000);
    geraMatriz(matriz2,nLinhas2,nColunas2);
    printMatriz(matriz2, nLinhas2,nColunas2);
    
    for(int i=0; i<nLinhas1; i++){
        for(int j=0; j<nColunas1; j++){
            somaMatriz[i][j] = matriz1[i][j]+matriz2[i][j];
        }
    }
    for(int i=0; i<nLinhas1; i++){
        for(int j=0; j<nColunas1; j++){
            printf(" %d |", somaMatriz[i][j]);
        }
        printf("\n");
    }
    
    return (EXIT_SUCCESS);
}

