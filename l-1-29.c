#include <stdio.h>

int main(){
	int atual, maior;
	maior=0;
	for (int i=0;i<15;i++)
	{
		printf("\nvalor %d: ",i+1);
		scanf("%d",&atual);
		if (atual>30) maior++;
	}
	printf("%d maiores que 30 \n ",maior);
}
