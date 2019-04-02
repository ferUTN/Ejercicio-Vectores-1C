#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

void cargarVector(int vec[], int largo){
    int i;
    for(i= 0; i<largo; i++){
        printf("Ingrese un numero entero: ");
        scanf("%d", &vec[i]);
    }
    printf("\n");
}

void imprimirVector(int vec[], int largo){
    int i;
    for(i= 0; i<largo; i++){
        printf("%d ", vec[i]);
    }
    printf("\n");
}

int buscarMaximo(int vec[], int largo){
    int primerValor= 1;
    int maximo;
    int i;
    for(i=0;i<largo;i++){
        if(primerValor || vec[i] > maximo){
            maximo= vec[i];
            primerValor= 0;
        }
    }
    return maximo;
}

int buscarMinimo(int vec[], int largo){
    int primerValor= 1;
    int minimo;
    int i;
    for(i=0;i<largo;i++){
        if(primerValor || vec[i] < minimo){
            minimo= vec[i];
            primerValor= 0;
        }
    }
    return minimo;
}

int buscarValor(int vec[], int largo, int valor){
    int indice= -1;
    int i;
    for(i=0; i< largo; i++){
        if(vec[i] == valor){
            indice= i;
            break; //Ya no sigo buscando
        }
    }
    return indice;
}
