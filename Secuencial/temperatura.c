#include<stdio.h>
int main()
{
	float tgc,tgf;
	printf("Ingrese la temperatura en grados celcius:");
	scanf("%f",&tgc);
	tgf=(tgc*1.8)+32;
	printf("La temperatura en grados fahrenheit es %.2f\n",tgf);
}
