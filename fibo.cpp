#include <stdio.h>
int main(){
	printf("SERIE DE FIBONACCI \n \n INGRESE UN NUMERO:  ");
	int a;
	scanf("%d", &a);
	int v1=0, v2=1, r=0;
	
	for (int i =0; i<a; i++){
		printf(" %d \n", r);
		r= v1+v2;
		v1=v2;
		v2=r;
	}
	return 0;
}
