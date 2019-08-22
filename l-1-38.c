#include <stdio.h>

int main()
{
	int N;
	scanf("%d",&N);
	int primo;
	if(N%2==0)
	       primo=1;
	else
		primo=0;
	if(!primo){
		for (int i=2;i<N/2;i++){
			if(N%i==0)
			{
				primo=1;
			}
		}
	}
	if(primo)
		printf("%d Não é primo.\n",N);
	else  
		printf("%d é primo. \n",N);
	
}

