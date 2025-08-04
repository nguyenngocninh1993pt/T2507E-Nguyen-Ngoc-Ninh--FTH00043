#include <stdio.h>
int main(){
	int a, b, c, p;
	printf("Nhap vao gia tri a, b, c: ");
	scanf("%d %d %d", &a, &b, &c);
	printf("Gia tri cua a = %d, b = %d, c= %d\n", a, b, c);
	p = a + b;
	if(p > c){
		printf("La tam giac");
	}else{
		printf("Khong la tam giac");
	}
}
