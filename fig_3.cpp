#include <stdio.h>

int main()
{
	printf("INGRESE UN NUMERO: ");
	int a,j,i,t;
	scanf("%d", &a);
	printf(" \n FIGURA 3: \n");
	j=a;
	t=a;
	for (i=0;i<=t;i++)
	{
		for(j=a; j>0; j--){
			printf(" ");
			}
		for(j=0 ; j<i;j++){
			printf("*");
			}
	printf("\n");
	a--;
	}
	return 0;
} 

