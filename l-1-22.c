#include <stdio.h>

int main(){
	int num, atual, maior;
	printf("Insira um número natural: ");
  	scanf("%d",&num);
	maior=0;
	for (int i=0;i<num;i++)
	{
		printf("\nvalor %d: ",i+1);
		scanf("%d",&atual);
		if(atual>maior)
		{
			maior=atual;
		}else if (i==0)
		{
			maior = atual;
		}
	}
	printf("Maior = %d \n ",maior);
}
