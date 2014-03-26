#include <stdio.h>

int main()
{
	printf("INGRESE UN NUMERO: ");
	int a,i,j,t;
	scanf("%d", &a);
	printf(" \n FIGURA 4: \n");
	j=a;
	t=a;
	for (i=0;i<=t;i++){
		for(j=0 ; j<i;j++){
			printf(" ");
			}
		for(j=a; j>0; j--){
			printf("*");
			}
		printf("\n");
		a--;
		}
		return 0;
} 
