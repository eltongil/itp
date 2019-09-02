#include <stdio.h>

int main()
{
	double X;
	do{
		scanf("%lf",&X);
		printf("%g x 3 =  %g\n",X,X*3);
	}while(X!=-999);
}
