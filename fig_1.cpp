#include <stdio.h>

int main()
{
	printf("INGRESE UN NUMERO:  ");
	int a;
	scanf("%d", &a);
	printf(" \n FIGURA 1:  \n");
	for (int i=0;i<=a;i++)
	{
		for(int j=0 ; j<i;j++){
			printf("*");	
		}
		printf("\n");
		
	}
    
        return 0;
}  
