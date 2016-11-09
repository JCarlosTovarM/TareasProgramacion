/* 
 * File:   main.c
 * Author: carlostovar
 *
 * Created on 9 de noviembre de 2016, 0:03
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

void transpuesta(){
	//Tamaño de la Matriz NxM(Filas por Columnas)
  int n,m,i,j;
  printf("\n Ingresa las dimensiones de la Matriz: ");
  printf("\n N: ");
  scanf("%d",&n);
  printf("\n M: ");
  scanf("%d",&m);

  int matriz[n][m];
	
	//Llenar valores de la matriz 
  	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
      		printf("\n Ingresa valor para la posicion [%d][%d]: ",i,j);
      		scanf("%d",&matriz[i][j]);
            }
  	}

	// Se imprime la matriz Original
  	printf("\n\n Matriz: ");
  		for(i=0;i<n;i++){
    		printf("\n");
    			for(j=0;j<m;j++){
   					printf("[%d]\t",matriz[i][j]);
    			}
  		}
  		
  	//Se invierten las filas por las columnas y se imprime la matriz transpuesta

  	printf("\n\n Matriz Transpuesta: ");
  		for(i=0;i<m;i++){
    		printf("\n");
    			for(j=0;j<n;j++){
				 	printf("[%d]\t",matriz[j][i]);
    			}
  		}
}

void mover(int n, int source, int medium, int dest){
	if(n == 1){
            printf("%d --> %d\n", source, dest);
	}
	else{
            mover(n-1, source, dest, medium);                       
            printf("%d --> %d\n", source, dest);
            mover(n-1, medium, source, dest);                        
	}	
}	

int Obtenerfactorial(int n){
	int a;
  int fact=1;
  for (a = 1; a <= n; a++){
      	fact = fact * a;
    }
  return fact;
}

void coeficientes(){
	 
	int acumulador=1,factorialpotencia;
  	int potenciaPoli, numvariables, variable;
  	int coeficiente, i;

  	printf("\n Introduce la Potencia Polinomial (<13): ");
  	scanf("%d",&potenciaPoli);
  		if(potenciaPoli>13)
    		coeficientes();
  			printf("\n Introduce el número de variables (<13); ");
  			scanf("%d",&numvariables);
  				if(numvariables>13)
    			coeficientes();
  				factorialpotencia = Obtenerfactorial(potenciaPoli);
					for(i=0;i<numvariables;i++){
    					printf("\n Introduce la variable %d: ",i+1);
    					scanf("%d",&variable);
    					acumulador*=Obtenerfactorial(variable);
 					}
  					coeficiente = (potenciaPoli)/(acumulador);
  					printf("\n El coeficiente monomial es; %d",coeficiente);
  
}
int main(int argc, char** argv) {
    
    int n;
	printf("\n\t\t **********TORRE DE HANOI************\n");
	printf("Ingresa el numero de discos:");
	scanf("%d", &n);
	mover(n, 1, 2, 3);
	printf("\n\t\t **********Dada una matriz, obtener su transpuesta************\n");	
	transpuesta();
	printf("\n\t\t **********COEFICIENTES POLINOMIALES************\n");
	coeficientes();

    return (EXIT_SUCCESS);
}

