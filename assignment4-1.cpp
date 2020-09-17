#include <stdio.h>
int main() {
	int n,tong=0;
	printf("Nhap so n: ");
	scanf("%d",&n);
	for(int i=1 ; i <= n ; i++){
		tong += i;
	}
	printf("Tong day so la: %d",tong);
	
	
}
