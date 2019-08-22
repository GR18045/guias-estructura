#include <stdio.h>
#include <math.h>
#include "math.h"
//programa para calcular media, varianza y desviacion tipica de un vector
//create: GR18045

int main() {
    float numero=0,suma=0,media=0,varianza=0,desviacion=0,sumaC=0;
    int tamanio=0;
    printf("ingrese el tamaño del vector\n");
    scanf("%d",&tamanio);
    float vector[tamanio];
    //se llena el  vector
    for(int contador=0;contador<tamanio;contador++){
        printf("ingrese numero\n");
        scanf("%f",&numero);
        vector[contador]=numero;
    }
    //calcular la media
    for(int contador=0;contador<tamanio;contador++){
        suma=suma+vector[contador];
    }
    media=suma/tamanio;
    //calcular varianza
    for(int contador=0;contador<tamanio;contador++){
        sumaC=sumaC+pow((vector[contador]-media),2);
    }
    varianza=sumaC/tamanio;
    //calcular desviacion tipica
    desviacion=sqrt(varianza);
    printf("la media: %f %s %f %s %f",media,"varianza: ", varianza,"desviacion: ", desviacion);
    return 0;
}