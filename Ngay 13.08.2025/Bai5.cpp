#include <stdio.h>
int main(){
	int n; 
	printf("Nhap so nguyen duong n: ");
	scanf("%d", &n);
	int dv = 0;
	int maxdigit = 0;
	for(;n!=0;n=n/10){
		dv = n%10;
		if(dv==9){
		 	maxdigit = 9;
			break; 
		}
		if(dv>maxdigit)
		maxdigit = dv;
	}
	printf("Chu so lon nhat là: %d", maxdigit);
}
