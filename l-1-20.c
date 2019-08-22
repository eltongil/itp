#include <stdio.h>
#include <math.h>

int main(){
	double  total=0;
	int i;
	for (i=1;i<=100;i++)
	{
		printf("%d \t",i);
		total+=i;
	}
	printf("Média = %g \n ",total/i);
}
