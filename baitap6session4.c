#include<stdio.h>

int main(){
	int sodien, chisocu, chisomoi;
	float tiendien;
	printf("Nhap so chi so cu: ");
	scanf("%d", &chisocu);
	printf("Nhap chi so moi: ");
	scanf("%d", &chisomoi);
	sodien = chisomoi - chisocu;
	if (sodien < 0) {
		printf("Loi \n");
		return 1;
	}
	
	if (0<= sodien < 50) {
		tiendien = sodien * 10000;
	} else if (50 <= sodien < 100) {
		tiendien = sodien * 15000;
	} else if (100 <= sodien < 150) {
		tiendien = sodien * 20000;
	} else if (150 <= sodien < 200) {
		tiendien = sodien * 25000;
	} else if (sodien >= 200) {
		tiendien = sodien * 30000;
	}
	printf("So dien tieu thu: %d kwh\n", sodien);
	printf("Tien dien: %.2f VND\n", tiendien);
	
	return 0;
}
