#include<stdio.h>
#include<math.h>

#define PI 3.14159265

void Modulo(float v1, float v2){
	float  modulo;
	modulo=sqrt((v1*v1)+(v2*v2));
	printf("El modulo del vector es: %.2f\n",modulo);
	
}

float Producto(float vx1, float vy1, float vx2, float vy2, float* res){
	float resultado = *res;
	resultado=(vx1*vx2)+(vy1*vy2);
	*res = resultado;
	return resultado;
}

void Angulo(){
	float vx1, vy1, vx2, vy2, angulo;
	printf("Ingrese el valor de la componente x del vector 1: ");
	scanf("%f",&vx1);
	printf("Ingrese el valor de la componente y del vector 1: ");
	scanf("%f",&vy1);
	printf("Ingrese el valor de la componente x del vector 2: ");
	scanf("%f",&vx2);
	printf("Ingrese el valor de la componente y del vector 2: ");
	scanf("%f",&vy2);
	float producto;
	producto = (vx1*vx2)+(vy1*vy2);
	float modulo1, modulo2;
	modulo1 = sqrt((vx1*vx1)+(vy1*vy1));
	modulo2 = sqrt((vx2*vx2)+(vy2*vy2));
	angulo=acos(producto/(modulo1*modulo2));
	printf("El angulo en radianes es: %f\n", angulo);	
	double val, grados;
	val = 180.0 / PI;
	grados = angulo * val;
	printf("El angulo es: %.1f %c", grados, 167);
}

int main(){
	float vx1, vy1, vx2, vy2, v1, v2;
	printf("\n\t\t**************Modulo de un vector en R2***************\n\n");
	printf("Ingrese el valor de la componente x: ");
	scanf("%f",&v1);
	printf("Ingrese el valor de la componente y: ");
	scanf("%f",&v2);
	Modulo(v1,v2);
	
	printf("\n\t\t**************Producto Punto de dos vectores en R2***************\n\n");
	printf("Ingrese el valor de la componente x del vector 1: ");
	scanf("%f",&vx1);
	printf("Ingrese el valor de la componente y del vector 1: ");
	scanf("%f",&vy1);
	printf("Ingrese el valor de la componente x del vector 2: ");
	scanf("%f",&vx2);
	printf("Ingrese el valor de la componente y del vector 2: ");
	scanf("%f",&vy2);
	float n = 15.5;
	printf("El resultado del producto punto de dos vectores es:%.2f\n\n ", Producto(vx1, vy1, vx2, vy2, &n));
	
	printf("\n\t\t**************Angulo entre dos vectores en R2***************\n\n");
	Angulo();
}
