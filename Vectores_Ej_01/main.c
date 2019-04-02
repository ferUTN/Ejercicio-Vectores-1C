#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

#define T 5 //Cantidad de elementos del vector

int main(){

    int numeros[T];
    printf("--Carga de un vector con %d numeros enteros--\n",T);
    cargarVector(numeros, T);
    printf("\n--Numeros ingresados--\n");
    imprimirVector(numeros, T);

    printf("El maximo es: %d\n", buscarMaximo(numeros,T));
    printf("El minimo es: %d\n", buscarMinimo(numeros,T));

    int numBuscado;
    printf("\nIngrese un numero entero a buscar en el vector: ");
    scanf("%d", &numBuscado);

    int indice= buscarValor(numeros,T,numBuscado);
    if(indice>=0){
        printf("\nEl %d se encuentra en el indice %d del vector\n",numBuscado, indice);
    }else{
        printf("\nEl %d no se encuentra en el vector\n", numBuscado);
    }

    system("pause");
    return 0;
}
