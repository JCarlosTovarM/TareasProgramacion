#include<stdio.h>
#include<math.h>

	void Triangulo(){ 
		float l1,l2,l3;
		printf("\n\t\t***********Calcular Tipo de Triangulo***************\n\n");
		printf("Escribe el primer lado del triangulo: ");
		scanf("%f",&l1);
		printf("Escribe el segundo lado del triangulo: ");
		scanf("%f",&l2);
		printf("Escribe el tercer lado del triangulo: ");
		scanf("%f",&l3);
		if(l1==l2&&l2==l3&&l1==l3){
			printf("Es equilatero\n");	
		}
		else 
			if((l1==l2)||(l3==l1)||(l2==l3)){
				printf("Es isosceles\n");
			}
		else 
			printf("Es escaleno\n");
	}
	
	void Serie(){
		int n,i;
		printf("\n\t\t***********Imprimir n terminos de la serie 2 1 4 3 6 5 8 7...***************\n\n");
		printf("Escribe n:");
		scanf("%d",&n);
		for(i=1; i<=n; i++){
			if(i%2!=0)
				printf("%d ",i+1);
			else
				printf("%d ",i-1);
		}
		printf("\n");
	}
	
	void Acarreo(){
		int n, n2, digito, digito2;
		int contador;
		contador=0;
		printf("\n\t\t***********Contar Acarreos de Suma***************\n\n");
		printf("Escribe el primer numero: ");
		scanf("%d",&n);
		printf("Escribe el segundo numero: ");
		scanf("%d",&n2);
		
		while(n){
    		digito = n % 10;
    		n /= 10;
    		digito2 = n2 % 10;
    		n2 /= 10;
    		if(digito+digito2>=10)
    		contador++;
		}
		printf("Los acarreos son: %d\n",contador);	
	}
	
		void AcarreoSuma(){
		int n, n2, digito, digito2;
		int contador;
		contador=0;
		printf("\n\t\t***********Contar Acarreos de Suma y Mostrar Resultado de Suma***************\n\n");
		printf("Escribe el primer numero: ");
		scanf("%d",&n);
		printf("Escribe el segundo numero: ");
		scanf("%d",&n2);
		printf("El resultado de la suma es: %d\n",n+n2);
		while(n){
    		digito = n % 10;
    		n /= 10;
    		digito2 = n2 % 10;
    		n2 /= 10;
    		if(digito+digito2>=10)
    		contador++;
		}
		printf("Los acarreos son: %d\n",contador);	
	}
	
	void SegundoMayor(){
		int a, b, c;
		printf("\n\t\t***********Calcular el segundo mayor de 3 numeros***************\n\n");
		printf("Escribe el primer numero: ");
		scanf("%d",&a);
		printf("Escribe el segundo numero: ");
		scanf("%d",&b);
		printf("Escribe el tercer numero: ");
		scanf("%d",&c);
		
		if((a>b&&a>c)&&(c<a&&c<b)){
			printf("El Segundo mayor es %d\n",b);
		}
		else if ((a<b&&a<c)&&(c>a&&c>b)){
			printf("El Segundo mayor es %d\n",b);		
		}
		else if((b<c&&b<a)&&(c>a&&c>b)){
			printf("El Segundo mayor es %d\n",a);
		}
		else if((b>c&&b>a)&&(c<a&&c<b)){
			printf("El Segundo mayor es %d\n",a);
		}
		else if((a>c&&a>b)&&(b<a&&b<c)){
			printf("El Segundo mayor es %d\n",c);
		}
		else if ((a<c&&a<b)&&(b>a&&b>c)){
			printf("El Segundo mayor es %d\n",c);
		}
	}
	
	void Rectangulo(){
		float a, b, d;
		printf("\n\t\t***********Rectangulo Dentro de una Circunferencia***************\n\n");
		printf("Escribe la base del rectangulo: ");
		scanf("%f",&b);
		printf("Escribe la altura del rectangulo: ");
		scanf("%f",&a);
		printf("Escribe el diametro del circulo: ");
		scanf("%f",&d);
		if(sqrt((a*a)+(b*b))<=d){
			printf("Si Cabe\n");
		}else{
			printf("No Cabe\n");
		}
	}
	
	void FormarTriangulo(){
		//Usar el teorema de la desigualdad triangular
			float a,b,c;
		printf("\n\t\t***********Calcular Si es posible la formacion de Triangulo dados sus lados***************\n\n");
		printf("Escribe el primer lado del triangulo: ");
		scanf("%f",&a);
		printf("Escribe el segundo lado del triangulo: ");
		scanf("%f",&b);
		printf("Escribe el tercer lado del triangulo: ");
		scanf("%f",&c);
		if(a>0||b>0||c>0){
			if((a+b)>c&&(a+c)>b&&(b+c)>a)
				printf("Si hay triangulo\n");
			else
			printf("No hay Triangulo\n");
		}	 
	}


int main(){
	Serie();
	Acarreo();
	AcarreoSuma();
	Triangulo();
	SegundoMayor();
	FormarTriangulo();
	Rectangulo();
	
}
