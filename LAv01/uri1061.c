#include <stdio.h>

int main()
{
	char entrada[20],temp[2];
	int dia[2],tempo[3][2];
	int W,X,Y,Z;
	int cont_dia=0,cont_tempo=0,j;
	int aux;
	while(cont_dia<2 || cont_tempo<2){
		scanf("%[^\n]s",entrada);
		getchar();
		j=0;
		if(entrada[0]=='D')
			sscanf(entrada,"Dia %d",&dia[cont_dia++]);	
		if(entrada[j]>=48 && entrada[j]<=57){
			sscanf(entrada,"%d : %d : %d",&tempo[0][cont_tempo],&tempo[1][cont_tempo],&tempo[2][cont_tempo]);
			cont_tempo++;
		}
	}
	W = dia[1]-dia[0];
	X = tempo[0][1]-tempo[0][0];
	if(X<0){
		W--;
		X = 24+X;
	}
	Y = tempo[1][1]-tempo[1][0];
	if(Y<0){
		X--;
		Y = 60 + Y;
	}
	Z = tempo[2][1]-tempo[2][0];
	if(Z<0){
		Y--;
		Z = 60 + Z;
	}
	printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",W,X,Y,Z);
}

