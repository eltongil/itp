#include <stdio.h>
#include <stdlib.h>

int main(){
	int *fetu;
	int N;
	do{
		scanf("%d",&N);
	}while(N<3);

	fetu = malloc(N*sizeof(int));
	
	scanf("%d %d",&fetu[0],&fetu[1]);
	for (int i=0;i<N;i++)
	{
		if(i>1){
			if(i%2)
			{
				fetu[i] = fetu[i-1]+fetu[i-2];
			}else
			{
				fetu[i] = fetu[i-1]-fetu[i-2];
			}
		}
		printf("%d\t",fetu[i]);
	}	
	free(fetu);
}
