#include <stdio.h>

int main()
{
	double altura;
	int sexo,mulheres=0,total=50;
	double maior,menor,med_mulher=0,med_turma=0;
	for (int i=0;i<total;i++)
	{
		scanf("%d %lf",&sexo,&altura);
		med_turma+=altura;
		if(i==0 || altura>maior) maior = altura;
		if(i==0 || altura<menor) menor=altura;
		if (sexo == 2)
		{
			med_mulher+=altura;
			mulheres++;
		}
	}
	printf("maior: %g\n",maior);
	printf("menor: %g\n",menor);
	printf("media da turma: %g\n",med_turma/total);
	printf("media das mulheres: %g\n",med_mulher/mulheres);
}
