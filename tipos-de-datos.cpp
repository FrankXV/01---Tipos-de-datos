// tipos de datos
#include <iostream>
#include <stdio.h>

int main() {

    char a = 'e'; // Tamaño 1byte y un rango igual a : 0 a 255
    short b = -15 ; // Tamaño= 2 bytes Rango = -128 a 127
    int c = 1024; // Tamaño = 2 bytes rango = -32768 a 32767
    unsigned int d = 128;// tamaño 2 bytes Rango: 0 a 65535
    long e = 123456; // Tamaño = 8bytes Rango = 9.223.372.036.854.775.808 hasta 9.223.372.036.854.775.807
    float f = 15.678; // Tamaño = 4 bytes
    double g = 1213121265412612.67222; // tamaño de = 8 Bytes

    printf("El elemento es : %c \n", a);
    printf("El elemento es : %i \n", b);
    printf("El elemento es : %i \n", c);
    printf("El elemento es : %i \n", d);
    printf("El elemento es : %li \n", e);
    printf("El elemento es : %.2f \n", f); // al poner .2 en el porcentaje donde se establece el tipo de dato, se establece el numero de  decimales a mostrar
    printf("El elemento es : %lf \n", g);
    return 0;
}
