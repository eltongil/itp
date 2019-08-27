#include <stdio.h>

int main()
{
	double X;
	unsigned int cont=0;
	do{
		scanf("%lf",&X);
		cont++;
	}while(X>0);
	printf("Foram digitados %d números.\n",cont);
}
