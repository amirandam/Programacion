#include<stdio.h>
int main()
{
	int ns,nh,nm,s;
	printf("Ingrese un numero de segundos mayor de 3600:");
	scanf("%d",&ns);
	nh=ns/3600;
	ns=ns-nh*3600;
	nm=ns/60;
	s=ns-nm*60;
	printf("numero de horas %d\n",nh);
	printf("numero de mimnutos %d\n",nm);
	printf("numero de segundos %d\n",s);
}
