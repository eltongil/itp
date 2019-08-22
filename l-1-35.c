#include <stdio.h>

int main()
{
	int A,B,cont=0,min;
	scanf("%d %d",&A,&B);
	min=A<B?A:B;
	for(min;min>1;min--)
	{
		if (A%min==0 && B%min==0)
		{
			cont++;
			break;
		}
	}
	if(cont)
		printf("Não são primos entre si.\n");
	else
		printf("São primos entre si. \n");
}
