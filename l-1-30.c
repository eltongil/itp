#include <stdio.h>

int main(){
	int atual,pos,neg;
	pos=0;
	neg=0;
	for (int i=0;i<20;i++)
	{
		printf("\nvalor %d: ",i+1);
		scanf("%d",&atual);
		atual>0?pos+=atual:neg++;	
	}
	printf("Soma dos positivis:%d \n Total de negativos:%d. \n ",pos,neg);
}
