#include <stdio.h>
#include <math.h>

int main(){
	double  total=0;
	for (double i=1;i<=100;i++)
	{
		printf("%g³=%g \n",i,pow(i,1/3));
		total+=pow(i,1/3);
	}
	printf("Total = %g \n ",total);
}
