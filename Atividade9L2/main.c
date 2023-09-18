/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   main.c
 * Author: lucas
 *
 * Created on 13 de Setembro de 2023, 19:34
 */

#include <stdio.h>

int main() {
    int matriz1[2][3] /*= {1, 0, 2, -1, 3, 1}*/, matriz2[3][2]/* = {3, 1, 2, 1, 1, 0}*/, matrizResult[2][2];

    printf("Digite os dados da primeira matriz: ");
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &matriz1[i][j]);
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %d |", matriz1[i][j]);
        }
        printf("\n");
    }
    printf("Digite os dados da segunda matriz: ");
    for(int i=0; i<3;i++){
        for(int j=0; j<2; j++){
            scanf("%d", &matriz2[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf(" %d |", matriz2[i][j]);
        }
        printf("\n");
    }
    int aux1 = 0, aux2 = 0;
    printf("Resultado da multiplicacao das matrizes\n");

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                matrizResult[i][j] = 
                        (matriz1[i][j] * matriz2[j][k])     + 
                        (matriz1[i][j+1] * matriz2[j+1][k]) + 
                        (matriz1[i][j+2] * matriz2[j+2][k]);
                printf(" %d |", matrizResult[i][j]);
            }
            break;
        }
        printf("\n");
    }

    return 0;
}

