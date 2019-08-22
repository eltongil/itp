#include <stdio.h>

int main(){
	int atual, maior,menor;
	maior=0;
	menor=0;
	for (int i=0;i<10;i++)
	{
		printf("\nvalor %d: ",i+1);
		scanf("%d",&atual);
		if(i==0)
		{
			maior=atual;
			menor=atual;
		}else
		{
			if(atual>maior)
				maior=atual;
			if(atual<menor)
				menor=atual;
		}	
	}
	printf("Maior = %d \n ",maior);
	printf("Menor = %d \n ",menor);
}
