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
	
	float delta,x1,x2;
	delta = (float)(b*b)-4*a*c;
	if(delta < 0 ){
		printf("Phuong trinh vo nghiem");
	}else if(delta = 0){
		x1 =(float)-b/(2*a);
		printf("Phuong trinh co nghiem kep: x = %f" , x1);
	}else{
		x1 = (float)(-b+sqrt(delta))/(2*a);
		x2 = (float)(-b-sqrt(delta))/(2*a);
		printf("Phuong trinh co 2 nghiem phan biet: x1= %f , x2 = %f ",x1,x2);
	}
}
