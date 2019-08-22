#include <stdio.h>
#include <stdlib.h>

int main(){
	int *fibbo;
	int N;
	scanf("%d",&N);
	fibbo = malloc(N*sizeof(int));
	for (int i=0;i<N;i++)
	{
		if (i==0 || i ==1)
			fibbo[i]=1;
		else
			fibbo[i] = fibbo[i-1]+fibbo[i-2];
		printf("%d\t",fibbo[i]);
	}	
}
