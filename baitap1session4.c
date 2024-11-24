#include<stdio.h>

int main(){
	int n;
	printf("Nhap so nguyen: ");
	scanf("%d",&n);
	if (n == 0){
		printf("Day la so 0 \n");
}else if(n>0){
	printf("So %d la so nguyen duong \n",n);
}else{
	printf("So %d la so nguyen am \n",n);
	
}
	
	
	return 0;
}
