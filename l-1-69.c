#include <stdio.h>

int main()
{
	int val=0;
	unsigned int menor=0;

	while(val>=0)
	{
		if(val<menor || menor==0)menor=val;
		scanf("%d",&val);
	}
	printf("%d\n",menor);
}
