#include <stdio.h>

int main()
{
	unsigned int total=100,uso[3][3];
	char elevador,turno;
	char el[3]={'A','B','C'};
	char tu[3]={'M','V','N'};
	unsigned int e,t,maior,menor,m_e,m_t,maior_turno,med_e,medio,temp[3];
	double max,med,min;
	for (int i=0;i<3;i++)
	{
		for (int j=0;j<3;j++)
		{
			uso[i][j]=0;
		}
	}
	for (int i=0;i<total;i++)
	{
		scanf("%c %c",&elevador,&turno);
		getchar();
		switch(elevador)
		{
			case 'A':case 'a':
				e=0;
				break;
			case 'B':case 'b':
				e=1;
				break;
			case 'C':case 'c':
				e=2;
				break;
		}
		switch(turno)
		{
			case 'M':case 'm':
				t=0;
				break;
			case 'V':case 'v':
				t=1;
				break;
			case 'N':case 'n':
				t=2;
				break;
		}
		uso[e][t]++;			
	}
	for (e=0;e<3;e++)
	{
		total = 0;
		for (t=0;t<3;t++)
		{
			total+=uso[e][t];
		}
		if (e==0 || total>maior)
		{
			maior=total;
			m_e=e;
		}
	}
	for (t=0;t<3;t++)
	{
		if(t==0 || uso[m_e][t]>uso[m_e][m_t]) m_t=t;		
	}
	printf("Elevador com maior uso é o %c, duranto o turno %c\n",el[m_e],tu[m_t]);
	for(t=0;t<3;t++)
	{
		for (e=0;e<3;e++)
		{
			if((t==0 && e==0) || uso[e][t]>maior) 
			{
				max = uso[e][t];
				m_t=t;
				m_e=e;
			}
			
		}
	}

	printf("O periodo mais usado é o %c, com o elevador %c\n",tu[m_t],el[m_e]);

	for(e=0;e<3;e++)
	{
		for(t=0;t<3;t++)
		{
			if((t==0&&e==0)|| uso[e][t]<min && uso[e][t]!=0)
			{
				min=uso[e][t];
			}
		}
	}
	printf("difrença percentural entre o maior e o menor uso: %g%\n",(max-min)*100/max);
	max=0;
	maior=0;
	menor=0;
	for (e=0;e<3;e++)
	{
		temp[e]=0;
		for(t=0;t<3;t++)
		{
			max+=uso[e][t];
			temp[e]+=uso[e][t];
		}
		if (e==0 || temp[e]>temp[maior])maior=e;
		if (e==0 || temp[e]<temp[menor])menor=e;
	}
	for(e=0;e<3;e++)
		if (e!=maior && e!=menor) m_e=e;
	med = (double)temp[m_e];
	
	printf("Percentual do elevador de uso médio quanto ao total: %g %\nNo elevador %c\n",med*100/max,el[m_e]);
}
