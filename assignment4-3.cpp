#include <stdio.h>
int main() {
	int tong = 0 , dem = 1; 
	for(int i = 0 ; dem <= 100 ; i++){
		if(i % 2 != 0 ){
			tong += i;
			printf("i= %d \n",i);
			dem++;
		}
			
	}
	printf("Tong 100 so le dau tien la: %d",tong);
	
}
