#include<stdio.h>
#include<math.h>
int main()
{
	float x;
	printf("Ingrese un numero real:");
	scanf("%f",&x);
	printf("El cuadrado es %.2f\n",pow(x,2));
	printf("La raiz cuadrada es %.2f\n",sqrt(x));
}
