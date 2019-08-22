#include <stdio.h>

int main()
{
	double H,N;
	scanf("%lf",&N);
	H=0;
	for(double i=1;i<N;i++)
	{	
		int j=i;
		if(j%2)
			H+=1/i;
		else
			H-=1/i;
	}
	printf("%g\n",H);
}
