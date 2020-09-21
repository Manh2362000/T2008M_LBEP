#include <stdio.h>
int main) {
	int a , b ;
	printf("Nhap so a (a < b): ");
	scanf("%d",&a);
	printf("Nhap so b (b > a): ");
	scanf("%d",&b);
	if(a < b){
		for(a ; a < b ; a++){
			if(a < 2){
				continue;
			}
			int check = 0;
			for(int i = 2 ; i < a ; i++){
				if(a % i == 0){
					check++;
				}
			}
			if(check == 0){
				printf("N = %d\n",a);
			}
		}
	}else{
		printf("Ban nhap sai !! Nhap a < b");
	}
}
