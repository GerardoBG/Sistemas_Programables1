#include <stdio.h>

int main()
{
	printf("INGRESE UN NUMERO:: ");
	int a ,i ,j;
	scanf("%d", &a);
	printf(" \n FIGURA 1: \n");
	for (i=0;i<=a;i++)
	{
		for(j=0 ; j<i;j++){
			printf("*");	
			}
		printf("\n");
	}
	return 0;
} 
