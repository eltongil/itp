#include <stdio.h>

int main()
{
	double X;
	unsigned int cont=0;
	do{
		scanf("%lf",&X);
		if(X<=200 && X>=100) cont++;
	}while(X!=0);
	printf("Foram digitados %d números entre 100 e 200.\n",cont);
}
