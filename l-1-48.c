#include <stdio.h>

int main()
{
	double S,N;
	scanf("%lf",&N);
	S=0;
	for(double i=1;i<N;i++)
	{
		S+=i/(N-i);
	}
	printf("%g\n",S);
}
