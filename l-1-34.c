#include <stdio.h>

int main()
{
	int A,B,quo=0;;
	scanf("%d %d",&A,&B);
	do
	{
		A-=B;
		quo++;
	}while(A>=B);
	printf("Quociente = %d\n",quo);
}
