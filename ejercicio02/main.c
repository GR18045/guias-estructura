#include <stdio.h>
//programa para eliminar un elemento
//create: GR18045
int main() {
    int tamanio,posicion,numero;
    printf("ingrese el tamaño del vector\n");
    scanf("%d",&tamanio);
    int vector[tamanio];
    //se llena el  vector
    for(int contador=0;contador<tamanio;contador++){
        printf("ingrese numero\n");
        scanf("%d",&numero);
        vector[contador]=numero;
    }
    printf("ingrese la posicion del elemento que desea eliminar \n");
    scanf("%d",&posicion);
    //valida que no sea un indice que no exista
    if(posicion<0||posicion>tamanio){
        printf("posicion incorrecta\n");
    }else{
        printf("eliminara el la posicion %d %s %d %s %d",posicion,"vector[",posicion,"]=",vector[posicion-1]);
        vector[posicion-1]=0;
    }
    return 0;
}