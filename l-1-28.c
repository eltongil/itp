#include <stdio.h>

int main(){
	int atual, par,impar;
	par=0;
	impar=0;
	for (int i=0;i<200;i++)
	{
		printf("\nvalor %d: ",i+1);
		scanf("%d",&atual);
		atual%2?impar++:par++;	
	}
	printf("%d pares e %d ímpares. \n ",par,impar);
}
