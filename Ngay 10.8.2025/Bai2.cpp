#include <stdio.h>
int main(){
	int n;
	printf("Nhap vao so nguyen n: ");
	scanf("%d", &n);
	int i = n-1;
	while(i>0){
		if(i%2==0 && i%3==0){
			printf("So thoa man la: %d", i);
			return 0;// ket thuc luon chuong trinh
		} i = i -1;
	}
	printf("So thoa man la: 0");
}
