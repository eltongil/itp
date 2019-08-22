#include <stdio.h>

int main()
{
	double A,total=1;
	int B;
	scanf("%lf %d",&A,&B);
	for (int i=0;i<B;i++)
	{
		total*=A;
	}
	printf("%g\n",total);
}
