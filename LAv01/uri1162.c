#include <stdio.h>
#include <stdlib.h>

int main()
{
	unsigned int N;//número de teste
	unsigned int L;//tamanho do trem
	unsigned int *C = NULL;//ordem corrente
	unsigned int i,j,aux,total;
	scanf("%d",&N);
	for(N;N>0;N--)
	{
		scanf("%d",&L);
		C = malloc(L*sizeof(int));
		for (i;i<L;i++)
		scanf("%d",&C[i]);
		total=0;
		do{
			i=0;
			for(j=0;j<L-1;j++)
			{
				if(C[j]>C[j+1])
				{
					aux = C[j];
					C[j]=C[j+1];
					C[j+1]=aux;
					i++;
					total++;
				}
			}
		}while(i);
		printf("Optimal train swapping takes %d swaps.\n",total);
		free(C);
	}
}

