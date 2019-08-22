#include <stdio.h>

int main()
{
	double nota;
	unsigned int matricula=0,total=100;
	double maior,maior2;
	unsigned int mat_maior,mat_maior2;
	for (int i=0;i<total;i++)
	{
		scanf("%d %lf",&matricula,&nota);
		if(i==0 || nota>maior)
		{
			maior2 = maior;
			mat_maior2 = mat_maior;
			maior = nota;
			mat_maior = matricula;
		} 
		printf("%d - %g\n",matricula, nota);
	}
	printf("maior nota: %g\nmatricula: %d\n",maior,mat_maior);
	printf("2ª maior nota: %g\nmatricula: %d\n",maior2,mat_maior2);
}
