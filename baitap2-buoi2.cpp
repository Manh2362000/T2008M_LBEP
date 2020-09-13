#include <stdio.h>

int main(){
	int a,b;
	float c;
	printf("Nhap vao so a: ");
	scanf("%d",&a);
	printf("Nhap vao so b: ");
	scanf("%d",&b);
	
	if(a >= b ){
		c = (float)a/b;
		printf("%d / %d = %f",a,b,c);
	}else{
		c = a * b;
		printf("%d * %d = %f",a,b,c);
	}
}

