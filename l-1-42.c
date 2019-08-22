#include <stdio.h>
#include <stdlib.h>

int main(){
	int *ricci;
	int N;
	do{
		scanf("%d",&N);
	}while(N<3);

	ricci = malloc(N*sizeof(int));
	
	scanf("%d %d",&ricci[0],&ricci[1]);
	for (int i=0;i<N;i++)
	{
		if(i>1)
			ricci[i] = ricci[i-1]+ricci[i-2];
		printf("%d\t",ricci[i]);
	}	
}
