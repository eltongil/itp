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

/* f(x) = x³ - r = 0
 * r = x³ = a
 * df(x) = 3x²
 * df(x)(x-s)=f(x)
 * df(x)*x-df(x)*s=f(x)
 * r = x - f(x)/df(x)
 * r = x - (x³-r)/(3x²)
 * r= x - x/3 - r/3x²
 * r = 2x/3 - r/3x²
  */

int teste_raiz(double a,double b, double tol);
double raiz_cubica(double a)
{
	double raiz, raiza=a;
	do{
		raiz =  raiza*2/3- a/(3*raiza*raiza);
		raiza=raiz;
	}while(teste_raiz(raiz,a,0.0000001));
	return raiz;
}

int teste_raiz(double a,double b,double tol)
{
	double cubo = a*a*a;
	if(cubo*b<0)cubo*=-1;
	if((cubo-b)*(cubo-b)>tol)
		return 1;
	else
		return 0;

}

int main()
{
	double S,X;
	S=0;
	for(double i=0;i<51;i++)
	{
		X=(i*2+1);
		S+=1/(X*X*X);
		printf("%g\t",X);
	}
	printf("%g\n",raiz_cubica(S*32));
}
