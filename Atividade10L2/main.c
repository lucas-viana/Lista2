/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   main.c
 * Author: lucas
 *
 * Created on 17 de Setembro de 2023, 09:36
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int nCasos = 0, matriz[300][1000],coordenadaX,coordenadaY, verificador=0;
    
    for(int i=0;i<300;i++){
        for(int j=0;j<1000; j++){
            matriz[i][j] = 0;
        }
    }
    
    scanf("%d", &nCasos);
    while(nCasos < 2 && nCasos > 500000){
        scanf("%d", &nCasos);
        printf("Digite um valor dentro de uma faixa valida.\n ");
    }
    
    for(int i=0; i<nCasos; i++){
        scanf("%d%d",&coordenadaX,&coordenadaY);
        while(coordenadaX<0 && coordenadaX>500 || coordenadaY<0 && coordenadaY>500){
            scanf("%d%d",&coordenadaX,&coordenadaY);
            printf("Digite um valor dentro de uma faixa valida.\n ");
        }
        matriz[coordenadaX][coordenadaY] += 1;
    }
    
    for(int i=0;i<300;i++){
        for(int j=0;j<1000; j++){
            if(matriz[i][j] == 2){
                verificador += 1;
            }
        }
    }
    
    if(verificador != 0){
        printf("1");
    }
    else printf("0");
    return (EXIT_SUCCESS);
}

