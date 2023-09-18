/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   main.c
 * Author: lucas
 *
 * Created on 10 de Setembro de 2023, 12:31
 */

#include <stdio.h>
#include <stdlib.h>
#include "matrizLib.h"
/*
 * 
 */
int main(int argc, char** argv) {
    int matriz[100][100], nLinhas, nColunas;
    printf("Digite o numero de linhas e colunas respectivamente: ");
    scanf("%d%d", &nLinhas, &nColunas);
    geraMatriz(matriz,nLinhas,nColunas);
    printMatriz(matriz, nLinhas,nColunas);
    printf("Diagonal principal da matriz: ");
    for(int i=0; i<nLinhas; i++){
        for(int j=0; j<nColunas; j++){
           if(i == j ){
               printf("%d |\t", matriz[i][j]);
           } 
        }
    }
    return (EXIT_SUCCESS);
}

