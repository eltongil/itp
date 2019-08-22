#include <stdio.h>

int main(){
	int maior,menor,aux;
	scanf("%d %d",&maior,&menor);
	if (menor>maior)
	{
		aux=menor;
		menor=maior;
		maior=aux;
	}
	aux=menor;
	for (aux;aux>1;aux--)
	{
		if(menor%aux == 0 && maior%aux == 0)
		{
			break;
		}
	}
	if (aux==1)
	{
		printf("Não há MDC.\n");
	}else
	{
		printf("O MDC é: %d\n",aux);
	}
}
