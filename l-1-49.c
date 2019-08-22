#include <stdio.h>

int main()
{
	double S,N;
	scanf("%lf",&N);
	S=0;
	for(double i=1;i<N;i++)
	{
		S+=1/(i*i);
	}
	printf("%g\n",S);
}
