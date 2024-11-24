#include<stdio.h>

int main(){
	int number1, number2, number3;
	printf("Nhap so nguyen thu nhat: ");
	scanf("%d", &number1);
	printf("Nhap so nguyen thu hai: ");
	scanf("%d", &number2);
	printf("Nhap so nguyen thu ba: ");
	scanf("%d", &number3);
	if ((number3 > number1 && number3 < number2) || (number3 > number2 && number3 < number1)){
		printf("So %d nam trong khoang giua %d va %d \n", number3, number1, number2);
	} else {
		printf("So %d khong nam trong khoang giua %d vaf %d \n", number3, number1, number2);
		
	}
	
		return 0;
}
