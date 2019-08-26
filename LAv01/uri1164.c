#include <stdio.h>

int main()
{
	unsigned int N,X,total,i;

	scanf("%d",&N);
	for(N;N>0;N--)
	{
		scanf("%d",&X);
		total=0;
		for(i=1;i<X;i++)
			total += X%i==0?i:0;
		if (total == X)
			printf("%d eh perfeito\n",X);
		else
			printf("%d nao eh perfeito\n",X);
	}
}
