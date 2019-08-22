#include <stdio.h>

int main()
{
	int N,primo,cont,i,nao;
	scanf("%d",&N);
	primo=1;
	cont=0;
	do{
		++primo;
		nao=1;
		for (i=2;i<primo;i++)
		{
			if (primo%i==0)
			{
				nao=0;
				break;
			}
		}
		if (nao)
		{
			printf("%d\t",primo);
			cont++;
		}
	}while(cont<N);

}

