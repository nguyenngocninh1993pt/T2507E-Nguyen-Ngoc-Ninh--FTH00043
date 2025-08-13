#include <stdio.h>
int main(){
	int n; 
	printf("Nhap so nguyen duong n: ");
	scanf("%d", &n);
	int dv = 0;
	for(;n!=0;n=n/10){
		dv = n%10;
	}
	printf("Chu so dau tien là: %d", dv);
}
