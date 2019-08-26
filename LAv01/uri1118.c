#include <stdio.h>

int main()
{
	int X=1;
	float  nota1,nota2,media;
	int i;
	while(X==1)
	{
		do{
			scanf("%f",&nota1);
			getchar();
			if(nota1<0.0 || nota1>10.0)
				printf("nota invalida\n");
		}while(nota1<0.0 || nota1>10.0);
		do{
			scanf("%f",&nota2);
			getchar();
			if(nota2<0.0 || nota2>10.0)
				printf("nota invalida\n");
		}while(nota2<0.0 || nota2>10.0);

		media = (nota1+nota2)/2;
		printf("media = %0.2f\n",media);
		do{
			printf("novo calculo (1-sim 2-nao)\n");
			scanf("%d",&X);			
			getchar();
		}while(X < 1 || X > 2);
	}
}
