#include <stdio.h>

int main()
{
	printf("INGRESE UN NUMERO: ");
	int a ,i ,j,t;
	scanf("%d", &a);
	printf(" \n FIGURA 2: \n");
	j=a;
	t=a;
	for (i=0;i<t;i++)
	{
		for(j=a; j>0; j--){
			printf("*");
			}
		printf("\n");
		a--;
	}
	return 0;
	} 
