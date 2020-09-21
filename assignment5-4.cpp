#include <stdio.h>
int main() {
	int n, tong = 0 , check = 0;
	printf("Nhap so n : ");
	scanf("%d",&n);
	for(int i = 2 ; i < n ; i++){
		for(int j = 2 ; j < i ; j++){
			if(i % j == 0){
				check++;
			}
		}
		if(check == 0){
				printf("N = %d\n",i);
			}else{
				check = 0;
			}
	}
}
