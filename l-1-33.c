#include <stdio.h>

int main()
{
	int A,B;
	scanf("%d %d",&A,&B);
	do
	{
		A-=B;
	}while(A>=B);
	printf("Resto = %d\n",A);
}
