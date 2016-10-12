/* 
 * File:   main.c
 * Author: carlostovar
 *
 * Created on 9 de octubre de 2016, 14:46
 */

#include <stdio.h>
#include <stdlib.h>

void Primero(){ float a,b,c,d,e;
    float prom,ganancia,total,capacidad,norma;
    printf("\t********Lineas de Produccion********\n\n");
    printf("Escribe la produccion de la linea 1: ");
    scanf("%f", &a);
    printf("Escribe la produccion de la linea 2: ");
    scanf("%f", &b);
    printf("Escribe la produccion de la linea 3: ");
    scanf("%f", &c);
    printf("Escribe la capacidad de cada linea de produccion: ");
    scanf("%f", &capacidad);
    total=a+b+c;
    norma=((total)*100)/(capacidad*3);
    printf("El porcentaje de la norma es: %.2f%%\n",norma);
    prom =(a+b+c)/3;
    printf("El promedio de las 3 lineas es: %.2f\n",prom);
    printf("Escribe el costo de cada unidad producida: ");
    scanf("%f", &d);
    printf("Escribe precio unitario del producto: ");
    scanf("%f", &e);
    ganancia=(total*e)-(total*d);
    printf("La ganancia es de: %.2f",ganancia);
}

void Segundo(){
    float a,b,c;
    int resultado;
    printf("\n\n\t********Promedio de 3 numeros********\n\n");
    printf("Escribe el primer numero: ");
    scanf("%f", &a);
    printf("Escribe el segundo numero: ");
    scanf("%f", &b);
    printf("Escribe el tercer numero: ");
    scanf("%f", &c);
    printf("\nEl promedio de los 3 numeros es: %.2f",(a+b+c)/3);
    resultado = a<0||b<0||c<0;
    printf("\nNegativo: %d",resultado);
}

void Tercero(){
    float a, b, c, d, e, salario, comp, promedio, comision, total;
    printf("\n\n\t********Calcular salario total********\n\n");
    printf("Ingresa el salario fijo: ");
    scanf("%f", &salario);
    printf("Escribe el importe de la primer venta: ");
    scanf("%f", &a);
    printf("Escribe el importe de la segunda venta: ");
    scanf("%f", &b);
    printf("Escribe el importe de la tercera venta: ");
    scanf("%f", &c);
    printf("Escribe el importe de la cuarta venta: ");
    scanf("%f", &d);
    printf("Escribe el importe de la quinta venta: ");
    scanf("%f", &e);
    promedio = (a+b+c+d+e)/5;
    comision = promedio * 0.09;
    int resultado;
    total = comision + salario;
    printf("Ingresa valor a comparar: ");
    scanf("%f",&comp);
    resultado = total>comp;      
    printf("El resultado de la comparacion con el valor dado es: %d\n", resultado);
    printf("El salario total es: %.2f",total);
}

/*
 * 
 */
int main(int argc, char** argv) {
    printf("\tTAREA 2\n");
    printf("\tSe ejecutaran los ejericios 7, 8 y 9 consecutivamente\n\n");
    Primero();
    Segundo();
    Tercero();
    
    return (EXIT_SUCCESS);
}

