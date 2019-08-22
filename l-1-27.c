#include <stdio.h>

int main(){
	int num;
	scanf("%d",&num);
	for (int i=15;i<=num;i+=15)
	{
		printf("%d\t",i);
	}
}
