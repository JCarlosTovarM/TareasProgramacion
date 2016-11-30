/* 
 * File:   main.c
 * Author: carlostovar
 *
 * Created on 23 de noviembre de 2016, 13:35
 */

#include <stdio.h>
#include <stdlib.h>

 struct nodo {
        int numero;
        struct nodo *siguiente;
        };
 
 struct nodo *primero, *ultimo;
 
  void mostrar_menu() {
      printf("\n\n\t\tMenú:\n\t======================\n\n");
      printf("1.- Añadir elementos\n");
      printf("2.- Sumar Pares\n");
      printf("3.- Añadir elementos buscando su existencia\n");
      printf("4.- Mostrar Ultimo Elemento de la Lista\n\n");
      printf("5.- Salir\n\n");
      printf("Escoge una opción: ");
 }

 
 void anadir_elemento() {
      struct nodo *nuevo;
      int elemento;
      /* reservamos memoria para el nuevo elemento */
      nuevo = (struct nodo *) malloc (sizeof(struct nodo));
      if (nuevo==NULL) printf( "No hay memoria disponible!\n");
      printf("\nNuevo elemento:\n");
      printf("Ingresa un numero: "); 
      fflush(stdout);
      scanf("%d",&elemento);
      nuevo->numero=elemento;
      //gets(nuevo->numero);
      /* el campo siguiente va a ser NULL por ser el último elemento
         de la lista */
      nuevo->siguiente = NULL;
 
      /* ahora metemos el nuevo elemento en la lista. lo situamos
         al final de la lista */
      /* comprobamos si la lista está vacía. si primero==NULL es que no
         hay ningún elemento en la lista. también vale ultimo==NULL */
      if (primero==NULL) {
         printf( "Primer elemento\n");
         primero = nuevo;
         ultimo = nuevo;
         }
      else {
           /* el que hasta ahora era el último tiene que apuntar al nuevo */
           ultimo->siguiente = nuevo;
           /* hacemos que el nuevo sea ahora el último */
           ultimo = nuevo;
      }
 }
 
 void mostrar_lista() {
      struct nodo *auxiliar; /* lo usamos para recorrer la lista */
      int i;
      i=0;
      auxiliar = primero;
      printf("\nMostrando la lista completa:\n");
      while (auxiliar!=NULL) {
            printf( "Numero: %d\n",
                    auxiliar->numero);
            auxiliar = auxiliar->siguiente;
            i++;
      }
      if (i==0) printf( "\nLa lista está vacía!!\n" );
 }
 
 void sumar_pares() {
      struct nodo *auxiliar; /* lo usamos para recorrer la lista */
      int i;
      i=1;
      auxiliar = primero;
      printf("\nLa lista es la siguiente:\n");
      int suma;
      suma=0;
      while (auxiliar!=NULL) {
            printf( "Posicion %d Numero: %d\n",i ,  auxiliar->numero);
            auxiliar = auxiliar->siguiente;
            i++;
            if(i%2==0){
                suma=suma+auxiliar->numero;
            }
      }
      printf("La suma de los numeros en posiciones pares es: %d",suma);
      if (i==1) printf( "\nLa lista está vacía!!\n" );
 }
 
 void ultimo_elemento() {
      struct nodo *auxiliar; /* lo usamos para recorrer la lista */
      int i;
      i=0;
      auxiliar = ultimo;
      while (auxiliar!=NULL) {
            printf( "El ultimo elemento en la lista es el numero: %d\n" ,  auxiliar->numero);
            auxiliar = auxiliar->siguiente;
            i++;
      }
      if (i==0) printf( "\nLa lista está vacía!!\n" );
 }
  void buscar() {
      struct nodo *auxiliar; /* lo usamos para recorrer la lista */
      int i,j;
      int n;
      printf("Ingresa el numero que quieres insertar");
      scanf("%d",&n);
      i=0;
      j=0;
      auxiliar = primero;
      while (auxiliar) {
          if(auxiliar->numero==n){
              printf("El elemento ya se encuentra en la lista");
              j++;
          }
          auxiliar = auxiliar->siguiente;
            i++;
      }       
      if (j==0) printf("El elemento no se encuentra en la lista");
      anadir_elemento();
 }

int main(int argc, char** argv) {
    
    int opcion;
 
     primero = (struct nodo *) NULL;
     ultimo = (struct nodo *) NULL;
     do {
         mostrar_menu();
         scanf("%d",&opcion);
             switch ( opcion ) {
                case 1: anadir_elemento();
                       break;
                case 2: sumar_pares();
                        break;
                 case 3: buscar();
                        break;
                 case 4: ultimo_elemento();
                         break;
                case 5: exit(1);
                         break;
                         default: printf( "Opción no válida\n" );
             }
     } while (opcion!='5');

    return (EXIT_SUCCESS);
}

