#include <stdio.h>

int main(){
	int n;
	printf("Nhap vao so nguyen: ");
	scanf("%d",&n);
	
	if(2 <= n <= 8 ){
		if(n == 8){
			printf("Day la Chu Nhat");
		}else{
			printf("Day la thu %d",n);
		}
	}else{
		printf("Day khong phai ngay trong tuan");
	}
}

