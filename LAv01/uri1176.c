#include <stdio.h>

int main()
{
	unsigned int T,N,X;
	unsigned long long int fibo[61];
	fibo[0]=0;
	fibo[1]=1;
	for(X=2;X<61;X++)
		fibo[X] = fibo [X-1] + fibo [X-2];

	scanf("%d",&T);
	for(T;T>0;T--)
	{
		scanf("%d",&N);
		printf("Fib(%d) = %llu\n",N,fibo[N]);
	}
}
