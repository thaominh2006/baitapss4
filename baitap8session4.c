#include<stdio.h>

int main(){
	int a, b, c;
	printf("Nhap vao canh thu nhat: ");
	scanf("%f", &a);
	printf("Nhap vao canh thu hai: ");
	scanf("%f", &b);
	printf("Nhap vao canh thu ba: ");
	scanf("%f", &c);
	if (a > 0 && b > 0 && c > 0 && (a + b > c && b + c > a && c + a > b)){
		printf("Day la 3 canh cua mot tam giac \n");
	} else {
		printf("Day khong phai la 3 canh cua mot tam giac \n");
	}
	
	return 0;
}
