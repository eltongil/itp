#include <stdio.h>

int main(){
	int atual, maior,maior2;
	maior=0;
	maior2=0;
	for (int i=0;i<10;i++)
	{
		printf("\nvalor %d: ",i+1);
		scanf("%d",&atual);
		if(atual>maior)
		{
			maior2=maior;
			maior=atual;
		}else if (i==0)
		{
			maior = atual;
		}
	}
	printf("1º maior = %d \n 2º maior: %d \n",maior,maior2);
}
