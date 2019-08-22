#include <stdio.h>

int main(){
	int num, atual, menor;
	printf("Insira um número natural: ");
  	scanf("%d",&num);
	menor=0;
	for (int i=0;i<num;i++)
	{
		printf("\nvalor %d: ",i+1);
		scanf("%d",&atual);
		if(atual<menor)
			menor=atual;
		if(i==0)
			menor = atual;
	}
	printf("Menor = %d \n ",menor);
}
