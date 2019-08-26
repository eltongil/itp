#include <stdio.h>

int main()
{
	unsigned int T,N[1000],i,x;
	scanf("%d",&T);
	x=0;
	for (i=0;i<1000;i++)
	{
		N[i] = x++;
		if(x==T)
			x=0;
		printf("N[%d] = %d\n",i,N[i]);
	}
}
