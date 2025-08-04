#include <stdio.h>
int main(){
	int sodien, dongia, tiendien;
	printf("Nhap vao so dien kwh: ");
	scanf("%d", &sodien);
	printf("So dien nhap vao la: %d kwh\n", sodien);
	if(sodien >= 200){
		tiendien = 50*1678 + 100*1734 + 200*2014 + (sodien-200)*2536;
		printf("Tien dien la: %d dong", tiendien);
	}else{
		if(sodien >= 101){
			tiendien = 50*1678 + 100*1734 + (sodien-101)* 2014;
			printf("Tien dien la: %d dong", tiendien);
		}else{
			if(sodien >= 51){
				tiendien= 50*1678 + (sodien-51)*1734;
				printf("Tien dien la: %d dong", tiendien);
			}else{
				tiendien= sodien*1678;
				printf("Tien dien la: %d dong", tiendien);
			}
		}
	}
}
