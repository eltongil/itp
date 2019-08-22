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

double potencia(double a,int b)
{
	double pro=1;
	for(int i=0;i<b;i++)
	{
		pro*=a;
	}
	return pro;
}

int main()
{
	double X,S,P;
	scanf("%lf",&X);
	S=0;
	X=X*3.1412/180;
	for(int i=0;i<15;i++)
	{	
		P = potencia(X,i*2+1)/fatorial(i*2+1);
		S=i%2?S-P:S+P;
		printf("%d - %g - %g \n",i*2+1,X/fatorial(i*2+1),S);
	}
	printf("%g\n",S);
}
