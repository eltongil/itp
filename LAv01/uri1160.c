#include <stdio.h>

int main()
{
	int T,PA,PB,i;
	double G1,G2;
	scanf("%d",&T);
	for(T;T>0;T--)
	{
		scanf("%d %d %lf %lf",&PA,&PB,&G1,&G2);
		getchar();
		i=0;
		for(i;i<=100 && PA<=PB;i++)		
		{
			PA = PA*(1+G1/100);
			PB = PB*(1+G2/100);
		}
		if(i<=100)
			printf("%d anos.\n",i);
		else
			printf("Mais de 1 seculo.\n");
	}

}
