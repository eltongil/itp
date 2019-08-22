#include <stdio.h>

int main()
{
	unsigned int idade, total=100,otimas=0,maior_pessimo=0,maior_otimo=0,maior_ruim=0;
	char nota;
	double total_bom=0,total_ruim=0,total_regular=0,idade_ruim=0,total_pessimo;
	for (int i=0;i<total;i++)
	{
		scanf("%d %c",&idade,&nota);
		switch(nota)
		{
			case 'A':case 'a':
				otimas++;
				maior_otimo=maior_otimo>idade?idade:maior_otimo;
				break;
			case 'B':case 'b':
				total_bom++;
				break;
			case 'C':case 'c':
				total_regular++;
				break;
			case 'D':case 'd':
				idade_ruim+=idade;
				total_ruim++;
				maior_ruim=maior_ruim>idade?idade:maior_ruim;
				break;
			case 'E':case 'e':
				total_pessimo++;
				maior_pessimo=maior_pessimo<idade?idade:maior_pessimo;
				break;



		}
		
	}
	printf("notas ótimas: %d\n",otimas);
	printf("porcentagem entre bom e regular: %g%\n",((total_bom/total_regular)-1)*100);
	printf("media de idade que julgou ruim: %g\n",idade_ruim/total_ruim);
	printf("percetual de notas péssimo: %g%\nMaior idade com nota péssimo %d\n",total_pessimo*100/total,maior_pessimo);
	printf("difrença entre maiores idades com nota otima e ruim: %d\n",maior_otimo-maior_ruim);
}
