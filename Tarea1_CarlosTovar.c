/* 
 * File:   main.c
 * Author: carlostovar
 *
 * Created on 3 de octubre de 2016, 9:25
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
        
        int actual=1;
        int anterior=0;
        int cuenta=1;
        int suma;
       
        printf("********Serie de Fibonacci*********\n");
        
        printf("%d\n",anterior);// La serie comienza en 0
        printf("%d\n",actual);// Se imprime por default el 1
        
        suma=actual+anterior; // Se realiza la primera iteracion sumando 0+1
        anterior=actual;
        actual=suma;
        cuenta=cuenta+1;
        printf("%d\n",actual);
        
        suma=actual+anterior;
        anterior=actual;
        actual=suma;
        cuenta=cuenta+1;
        printf("%d\n",actual);
        
        suma=actual+anterior;
        anterior=actual;
        actual=suma;
        cuenta=cuenta+1;
        printf("%d\n",actual);
        
        suma=actual+anterior;
        anterior=actual;
        actual=suma;
        cuenta=cuenta+1;
        printf("%d\n",actual);
      
        suma=actual+anterior;
        anterior=actual;
        actual=suma;
        cuenta=cuenta+1;
        printf("%d\n",actual);
        
        suma=actual+anterior;
        anterior=actual;
        actual=suma;
        cuenta=cuenta+1;
        printf("%d\n",actual);
        
        suma=actual+anterior;
        anterior=actual;
        actual=suma;
        cuenta=cuenta+1;
        printf("%d\n",actual);
        
        suma=actual+anterior;
        anterior=actual;
        actual=suma;
        cuenta=cuenta+1;
        printf("%d\n",actual);
        
        suma=actual+anterior;
        anterior=actual;
        actual=suma;
        cuenta=cuenta+1;
        printf("%d\n",actual);
    
    return (EXIT_SUCCESS);
}

