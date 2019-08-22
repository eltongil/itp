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
	double X,S;
	scanf("%lf",&X);
	S=0;
	for(double i=0;i<20;i++)
	{
		S+=X/fatorial(i);
	}
	printf("%g\n",S);
}
