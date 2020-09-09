#include <stdio.h>
int main(){
	int a,b,c;
	printf("nhap a =");
	scanf("%d", &a);
	printf("nhap b =");
	scanf("%d", &b);
	printf("nhap c =");
	scanf("%d", &c);
	
	//kiem tra a va b
	if(a>b){
		//b la so nho
		if(c>b){
			printf("min:%d", b);
		}else{
			printf("min:%d", c);
		}	
	}else{
		//a la so nho
		if(c>a){
			printf("min:%d", a);
		}else{
			printf("min:%d", c);
		}
		
	}	
}
