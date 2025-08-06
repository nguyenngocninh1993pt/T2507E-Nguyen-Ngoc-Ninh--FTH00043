#include <stdio.h>
int main(){
	float thunhap;
	float thuetncn;
	printf("Nhap vao thu nhap cua ban (trieu dong): ");
	scanf("%f", &thunhap);
		thunhap = thunhap - 11;
	if(thunhap > 80){
		thuetncn = 18.15 + (thunhap - 80)*35/100;
		printf("Thue thu nhap ca nhan phai nop la: %0.2f trieu dong", thuetncn);
	}else{
		if(thunhap > 52){
			thuetncn = 9.75 + (thunhap - 52)*30/100;
			printf("Thue thu nhap ca nhan phai nop la: %0.2f trieu dong", thuetncn);
		}else{
			if(thunhap > 32){
				thuetncn = 4.75 + (thunhap - 32)*25/100;
				printf("Thue thu nhap ca nhan phai nop la: %0.2f trieu dong", thuetncn);
			}else{
				if(thunhap > 18){
					thuetncn = 1.95 + (thunhap - 18)*20/100;
					printf("Thue thu nhap ca nhan phai nop la: %0.2f trieu dong", thuetncn);
				}else{
					if(thunhap > 10){
						thuetncn = 0.75 + (thunhap - 10)*15/100;
						printf("Thue thu nhap ca nhan phai nop la: %0.2f trieu dong", thuetncn);
					}else{
						if(thunhap > 5){
							thuetncn = 0.25 + (thunhap - 5)*10/100;
							printf("Thue thu nhap ca nhan phai nop la: %0.2f trieu dong", thuetncn);
						}else{
							if(thunhap > 0){
								thuetncn = thunhap * 5/100;
								printf("Thue thu nhap ca nhan phai nop la: %0.2f trieu dong", thuetncn);
							}else{
								printf("Ban khong phai nop thue thu nhap ca nhan! hehe!");
							}
						}
					}
				}
			}
		}
	}
}
