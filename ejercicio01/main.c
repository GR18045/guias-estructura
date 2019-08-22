#include <stdio.h>

int main() {
    int tamanio,numero;
    printf("ingrese el tamaño del vector\n");
    scanf("%d",&tamanio);
    int vector2[tamanio];
    int vector[tamanio];
    //se llena el primer vector
    for(int contador=0;contador<tamanio;contador++){
        printf("ingrese numero\n");
        scanf("%d",&numero);
        vector[contador]=numero;
    }
    // se copia el primer vector en el segundo vector
    for(int contador=0;contador<tamanio;contador++){
        vector2[contador]=vector[contador];
    }
    //se imprimen los dos vectores
    for(int contador=0;contador<tamanio;contador++){
        printf("%d ",vector[contador]);
        printf("%d  ",vector2[contador]);
        printf("\n");
    }
    return 0;
}