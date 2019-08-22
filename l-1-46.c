#include <stdio.h>

int main()
{
	double H,N;
	scanf("%lf",&N);
	H=0;
	for(double i=1;i<=N;i++)
	{
		H+=1/i;
	}
	printf("%g\n",H);
}
