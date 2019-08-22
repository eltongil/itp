#include <stdio.h>

int main(){
	double ent;

	for (int i=0;i<10;i++){
		printf("Número %d :",i+1);
		scanf("%lf",&ent);
			printf("%g³=%g \n",ent,ent*ent*ent);
	}

}

