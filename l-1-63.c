#include <stdio.h>

int main()
{
	double X,media=0;
	unsigned int cont=0;
	do{
		scanf("%lf",&X);
		media+=X;
		cont++;
	}while(X>0);
	media/=cont;
	printf("Média dos números digitados: %g.\n",media);
}
