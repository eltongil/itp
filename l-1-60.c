#include <stdio.h>

#define total 10

struct contribuinte{
	char cpf[16];
	int dependentes;
	double renda;
	double aliquota;
}contribuintes[total];

void IR(struct contribuinte *A, double sal)
{
	if (A->renda<=sal*2)
		A->aliquota = 0;
	else if (A->renda<sal*3)
		A->aliquota = A->renda*0.05-0.05*A->dependentes*sal;
	else if (A->renda<sal*5)
		A->aliquota = A->renda*0.1-0.05*A->dependentes*sal;
	else if (A->renda<sal*7)	
		A->aliquota = A->renda*0.15-0.05*A->dependentes*sal;
	else 	
		A->aliquota = A->renda*0.2-0.05*A->dependentes*sal;
}

int main()
{
	double sal;
	printf("Valor atual do salário mínimo: ");
	scanf("%lf",&sal);
	getchar();
	for (int i=0;i<total;i++)
	{
		printf("Inserir CPF: ");
		scanf("%[^\n]s",&contribuintes[i].cpf);
		getchar();
		printf("Inserir quantidade de dependentes: ");
		scanf("%d",&contribuintes[i].dependentes);
		getchar();
		printf("Inserir renda: ");
		scanf("%lf",&contribuintes[i].renda);
		getchar();
		IR(&contribuintes[i],sal);
	}
	for (int i=0;i<total;i++)
	{
		printf("CPF: %s \nIR: R$%0.2f\n\n",contribuintes[i].cpf,contribuintes[i].aliquota);
	}
}
