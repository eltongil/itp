#include <stdio.h>

int main()
{
	int val=0;
	unsigned int menor=0,maior;

	while(val>=0)
	{
		if(val<menor || menor==0)menor=val;
		if(val>maior || maior==0)maior=val;
		scanf("%d",&val);
	}
	printf("%d\n",menor);
	printf("%d\n",maior);

}
