#include <stdio.h>
#include <math.h> 

int main(){
	double ent;

	for (int i=0;i<15;i++){
		printf("Número %d :",i+1);
		scanf("%lf",&ent);
			printf("\u221A%g=%g \n",ent,pow(ent,0.5));
		
	}

}

