#include <stdio.h>

int main()
{
	double A,total=0;
	int B;
	scanf("%lf %d",&A,&B);
 	if(B<0)
	{
		B=-B;
		A=-A;
	}
	for (int i=0;i<B;i++)
	{
		total+=A;
	}
	printf("%g\n",total);
}
