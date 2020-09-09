#include <stdio.h>
#include <math.h>

int main(){
	int a,b,c;
	printf("nhap a =");
	scanf("%d", &a);
	printf("nhap b =");
	scanf("%d", &b);
	printf("nhap c =");
	scanf("%d", &c);
	
	if(a+b > c && a+c > b && b+c > a){
		int chuVi , dienTich;
		chuVi = a + b + c;  
		printf("Day la tam giac");
	}else{
		printf("Day khong phai tam giac");
	}
}
