#include <stdio.h>

int main()
{
	int val=0;
	unsigned int total=0;

	while(val>=0)
	{
		total+=val;
		scanf("%d",&val);
	}
	printf("%d\n",total);
}
