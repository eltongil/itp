#include <stdio.h>

int main()
{
	int V[15],P[5],I[5],p=0,i=0,k=0,j=0;

	for(k;k<15;k++)
		scanf("%d",&V[k]);
	for(k=0;k<15;k++)
	{
		if(V[k]%2)
		{
			I[i++]=V[k];
			if(i==5)
			{
				i=0;
				for (j=0;j<5;j++)
					printf("impar[%d] = %d\n",j,I[j]);
			}
		}
		else
		{
			P[p++]=V[k];
			if(p==5)
			{
				p=0;
				for (j=0;j<5;j++)
					printf("par[%d] = %d\n",j,P[j]);
			}
		}
	}
	for (j=0;j<i;j++)
		printf("impar[%d] = %d\n",j,I[j]);
	for (j=0;j<p;j++)
		printf("par[%d] = %d\n",j,P[j]);

}
