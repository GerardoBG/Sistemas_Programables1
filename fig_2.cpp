#include <stdio.h>

int main()
{
	printf("INGRESE UN NUMERO:  ");
	int a;
	scanf("%d", &a);
	printf(" \n FIGURA 2:  \n");
	int j=a;
	for (int i=0;i<=j;i++)
	{
		for(int j=a; j>0; j--){
			printf("*");
		}
		printf("\n");
		a--;
	}
		return 0;
}  
