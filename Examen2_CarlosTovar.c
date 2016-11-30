/* 
 * File:   main.c
 * Author: carlostovar
 *
 * Created on 30 de noviembre de 2016, 7:19
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int patron[2][2];
	int matriz[10][10];
	int i,j;
	int ok;
	ok=0;
	
  	printf("\n\nLa matriz aleatoria es:\n\n");
  	//llenar aleatoriamente 
  	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
      		matriz[i][j]=rand()%10;//Agrega numero aleatorio a la posicion ij de la matriz
      		printf("%d\t",matriz[i][j]);//imprime elemento de la matriz en pantalla
            }
             printf("\n\n");//para dejar espacios entre filas.
  	}

    srand(time(0));//numeros Aleatorios en funcion del tiempo
    
	//Llenar valores de la matriz 
  	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
      		printf("\n Ingresa valor para la posicion [%d][%d]: ",i,j);
      		scanf("%d",&patron[i][j]);
            }
  	}
  	
  		for(i=0;i<10;i++){
			for(j=0;j<10;j++){
      			if(matriz[i][j]==patron[0][0]&&matriz[i][j+1]==patron[0][1]&&matriz[i+1][j]==patron[1][0]&&matriz[i+1][j+1]==patron[1][1])
      			ok++;
            }
  	}
  	
  	if(ok!=0)
  	printf("La encontre!");
  	else
  	printf("no la encontre");

    return (EXIT_SUCCESS);
}

