#include <stdio.h>

int main(){
	float  total=0;
	for (float i=1;i<=100;i++)
	{
		printf("%g/2=%g \n",i,i/2);
		total+=i/2;
	}
	printf("Total = %g \n ",total);
}
