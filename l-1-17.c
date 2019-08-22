#include <stdio.h>

int main()
{
	int total=0;
	for (int i=1;i<100;i++)
	{
		total += i*i;
		printf("%d , %d. \n",i,total);
	}
}
