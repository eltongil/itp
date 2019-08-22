#include <stdio.h>
#include <math.h>

int main()
{
	double ent;
	for (int i=1;i<=8;i++)
	{
		printf("valor %d : ",i);
		scanf("%lf",&ent);
	printf("log(%g) = %g\n",ent,log10(ent));
	}
}

