#include<stdio.h>

int main(){
	int n;
	printf("Nhap so nguyen bat ki: ");
	scanf("%d",&n);
	if (n%2==0){
		printf("So %d la so chan \n",n);
	}else{
		printf("So %d la so le \n",n);
	}
	return 0;
}
