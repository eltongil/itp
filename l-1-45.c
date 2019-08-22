#include <stdio.h>

int main()
{
	int um, quatro,N;
	um =1;
	quatro =3;
	scanf("%d",&N);
	for (int i=0;i<N;i++)
	{
		if (i%3){
			printf("%d, ",quatro);
		}
		else{
			printf("%d, ",um++);
			quatro++;
		}
	}
}
