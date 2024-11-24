#include<stdio.h>

int main(){
	int n;
	printf("Nhap so nguyen: ");
	scanf("%d", &n);
	
	if (n % 3 == 0 && n % 5 == 0){
		printf("So %d la so chia het cho ca 3 va 5 \n",n);
	} else if (n % 3 == 0) {
		printf("So %d la so chia het cho 3 \n",n);
	} else if (n % 5 == 0) {
		printf("So %d la so chia het cho 5 \n",n);
	} else {
		printf("So %d la so khong chia het cho 3 hoac 5 \n",n);
	}
	
	return 0;
}
