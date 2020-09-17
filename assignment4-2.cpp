#include <stdio.h>
int main(){
	int n,i;
	float S=0;
	printf("\nNhap so n: ");
	scanf("%d",&n);
	
	for( int i=1 ; i<=n ; i++){
		S += (float) 1/i;
	} 
	printf("\nTong = %f",S);
}
