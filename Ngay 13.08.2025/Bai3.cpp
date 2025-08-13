#include <stdio.h>
int main(){
	int n; 
	printf("Nhap so nguyen duong n: ");
	scanf("%d", &n);
	int sum = 0;
	for(sum=0;n!=0;n=n/10){
		int dv = n%10;
		sum = sum + dv;
	}
	printf("Tong cac chu so là: %d", sum);// Luu y: phai khai bao bien sum truoc for neu khong se bao loi
	// vi bien chi co gia tri su dung trong for, ngoai for khong co gia tri
}
