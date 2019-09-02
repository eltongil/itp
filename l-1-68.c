#include <stdio.h>

int main()
{
	int val=0;
	double total=0,cont;

	while(val>=0)
	{
		total+=val;
		scanf("%d",&val);
		if(val>0)cont++;
	}
	printf("%g\n",total/cont);
}
