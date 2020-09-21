#include <stdio.h>
int main() {
	int n, tong = 0;
	printf("Nhap so n : ");
	scanf("%d",&n);
	for(int i = 1 ; i <= n ; i++){
		if(n % i == 0 ){
			printf("U = %d\n",i);
			tong += i;
		}
	}
	printf("Tong cac uoc la: %d",tong);	
}
