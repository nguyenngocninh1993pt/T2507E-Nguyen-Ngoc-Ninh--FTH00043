#include <stdio.h>
int main (){
	int n;
	printf("Nhap so nguyen n: ");
	scanf("%d", &n);
	int i = 2;// vi 1 va chinh no chac chan la uoc cua so n roi nen khong can cho chay tu i =1 và i = n nua
	// gan luon gia tri i = 2 cho nhanh, va kiem tra dieu kien voi i <= n-1
	while(i<=n-1){
		if(n%i==0){
			printf("%d khong la so nguyen to", n);
		return 0; // return 0 de end luon ctrinh, i khong mac gia tri o tai nhanh yes, neu khong co he thong se chay loan len 
		}else i = i + 1;
	}
	printf("%d la so nguyen to", n);
}
