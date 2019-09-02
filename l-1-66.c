#include <stdio.h>

int main()
{
	double m_p=0,m_i=0,max_p=0,min_i=0;
	int X,p=0,i=0;
	do{
		scanf("%d",&X);
		if(X%2)
		{
			if (i==0 || (X<min_i && X>0)) min_i=X;
			i++;
			m_i+=X;
		}else
		{
			if (p==0 || X>max_p) max_p=X;
			p++;
			m_p+=X;
		}
	}while(X>0);
	printf("Média dos pares: %g.\n",m_p/p);
	printf("Média dos impares: %g.\n",m_i/i);
	printf("Maior dos pares: %g.\n",max_p);
	printf("Menor dos impares: %g.\n",min_i);
}
