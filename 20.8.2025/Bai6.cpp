#include <stdio.h>

int tinhTongchuso(int a){
	int sum = 0;
	for(sum=0; a!=0; a=a/10){
		int dv= a%10;
		sum = sum+dv;
	}
	return sum;
}

int main(){
	int n; 
	do{
	printf("Nhap vao so n: ");
	scanf("%d", &n);
	}
	while(n<=0);
	int kq= tinhTongchuso(n);
	printf("Tong cac chu so: %d", kq);
}

