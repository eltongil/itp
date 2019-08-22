#include <stdio.h>

double fatorial(int a)
{
	
	if(a==0) return 1;
	else{
		double pro =1;
		do{pro*=a--;}while(a>2);
		return pro;
	}
}

int main()
{
	double S,P;
	int N;
	scanf("%d",&N);
	S=0;
	for(int i=0;i<=N;i++)
	{	
		P = fatorial(N-i)/fatorial(2*i);
		S=i%2?S-P:S+P;
		printf("%g - %g\n",P,S);
	}
	printf("%g\n",S);
}
