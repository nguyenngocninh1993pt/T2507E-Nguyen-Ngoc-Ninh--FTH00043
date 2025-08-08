#include <stdio.h>
int main(){
	int GT;
	printf("Nhap vao gia tri mua hang: ");
	scanf("%d", &GT);
	int ST;
	if(GT>=500000){
		ST = GT - GT*0.1;
		printf("So tien phai tra la: %d", &ST);
	}else if(GT>=200000){
		ST = GT - GT*0.05;
		printf("So tien phai tra la: %d", &ST);
	}else{
		ST = GT; 
		printf("So tien phai tra la: %d", &ST);
	}
}
