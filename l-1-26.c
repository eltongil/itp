#include <stdio.h>

int main(){
	int inf, sup,total;
	scanf("%d %d",&inf,&sup);
	total=0;
	if (inf%2)
		inf++;
	for (int i=inf;i<sup;i+=2)
	{
		if(i%2==0)
		{
			printf("%d\t",i);
			total+=i;
		}
	}
	printf("total: %d\n",total);
}
