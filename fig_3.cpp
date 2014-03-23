#include <stdio.h>

int main()
{
	printf("INGRESE UN NUMERO:  ");
	int a;
	scanf("%d", &a);
	printf(" \n FIGURA 3:  \n");
	int j=a;
	for (int i=0;i<=j;i++)
	{
		for(int j=a; j>0; j--){
			printf(" ");
		}
		for(int j=0 ; j<i;j++){
			printf("*");	
		}
			
		printf("\n");
		a--;
	}
		return 0;
}  
