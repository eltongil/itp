#include <stdio.h>

int main()
{
	int N,prod=1;
	scanf("%d",&N);
	for (N;N>1;N--)
		prod*=N;
	printf("%d\n",prod);
}

