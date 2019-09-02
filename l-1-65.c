#include <stdio.h>

int main()
{
	int X;
	do{
		scanf("%d",&X);
		printf("%d\n",X*X);
	}while(X%6);
}
